// Copyright (c) 2014-2017 The Dash Core developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#ifndef BITCOIN_MODULES_PLATFORM_FUNDING_CLASSES_H
#define BITCOIN_MODULES_PLATFORM_FUNDING_CLASSES_H

#include <modules/platform/funding.h>
#include <key.h>
#include <key_io.h>
#include <script/standard.h>
#include <util/system.h>

class CSuperblock;
class CGovernanceTriggerManager;
class CSuperblockManager;

typedef std::shared_ptr<CSuperblock> CSuperblock_sptr;

// DECLARE GLOBAL VARIABLES FOR GOVERNANCE CLASSES
extern CGovernanceTriggerManager triggerman;

/**
*   Trigger Mananger
*
*   - Track funding objects which are triggers
*   - After triggers are activated and executed, they can be removed
*/

class CGovernanceTriggerManager
{
    friend class CSuperblockManager;
    friend class CGovernanceManager;

private:
    std::map<uint256, CSuperblock_sptr> mapTrigger;

    std::vector<CSuperblock_sptr> GetActiveTriggers();
    bool AddNewTrigger(uint256 nHash);
    void CleanAndRemove();

public:
    CGovernanceTriggerManager() : mapTrigger() {}
};

/**
*   Superblock Manager
*
*   Class for querying superblock information
*/

class CSuperblockManager
{
private:
    static bool GetBestSuperblock(CSuperblock_sptr& pSuperblockRet, int nBlockHeight);

public:

    static bool IsSuperblockTriggered(int nBlockHeight);

    static void CreateSuperblock(CMutableTransaction& txNewRet, int nBlockHeight, std::vector<CTxOut>& voutSuperblockRet);
    static void ExecuteBestSuperblock(int nBlockHeight);

    static std::string GetRequiredPaymentsString(int nBlockHeight);
    static bool IsValid(const CTransactionRef& txNew, int nBlockHeight, CAmount blockReward);
};

/**
*   Governance Object Payment
*
*/

class CGovernancePayment
{
private:
    bool fValid;

public:
    CScript script;
    CAmount nAmount;

    CGovernancePayment()
        :fValid(false),
         script(),
         nAmount(0)
    {}

    CGovernancePayment(CTxDestination dest, CAmount nAmountIn)
        :fValid(false),
         script(),
         nAmount(0)
    {
        try
        {
            script = GetScriptForDestination(dest);
            nAmount = nAmountIn;
            fValid = true;
        }
        catch(std::exception& e)
        {
            LogPrintf("CGovernancePayment Payment not valid: addrIn = %s, nAmountIn = %d, what = %s\n",
                     EncodeDestination(dest), nAmountIn, e.what());
        }
        catch(...)
        {
            LogPrintf("CGovernancePayment Payment not valid: addrIn = %s, nAmountIn = %d\n",
                      EncodeDestination(dest), nAmountIn);
        }
    }

    bool IsValid() { return fValid; }
};


/**
*   Trigger : Superblock
*
*   - Create payments on the network
*
*   object structure:
*   {
*       "governance_object_id" : last_id,
*       "type" : govtypes.trigger,
*       "subtype" : "superblock",
*       "superblock_name" : superblock_name,
*       "start_epoch" : start_epoch,
*       "payment_addresses" : "addr1|addr2|addr3",
*       "payment_amounts"   : "amount1|amount2|amount3"
*   }
*/

class CSuperblock : public CGovernanceObject
{
private:
    uint256 nGovObjHash;

    int nBlockHeight;
    int nStatus;
    std::vector<CGovernancePayment> vecPayments;

    void ParsePaymentSchedule(const std::string& strPaymentAddresses, const std::string& strPaymentAmounts);

public:

    CSuperblock();
    CSuperblock(uint256& nHash);

    static bool IsValidBlockHeight(int nBlockHeight);
    static void GetNearestSuperblocksHeights(int nBlockHeight, int& nLastSuperblockRet, int& nNextSuperblockRet);
    static CAmount GetPaymentsLimit(int nBlockHeight);

    int GetStatus() { return nStatus; }
    void SetStatus(int nStatusIn) { nStatus = nStatusIn; }

    // IS THIS TRIGGER ALREADY EXECUTED?
    bool IsExecuted() { return nStatus == SEEN_OBJECT_EXECUTED; }
    // TELL THE ENGINE WE EXECUTED THIS EVENT
    void SetExecuted() { nStatus = SEEN_OBJECT_EXECUTED; }

    CGovernanceObject* GetGovernanceObject()
    {
        AssertLockHeld(funding.cs);
        CGovernanceObject* pObj = funding.FindGovernanceObject(nGovObjHash);
        return pObj;
    }

    int GetBlockHeight()
    {
        return nBlockHeight;
    }

    int CountPayments() { return (int)vecPayments.size(); }
    bool GetPayment(int nPaymentIndex, CGovernancePayment& paymentRet);
    CAmount GetPaymentsTotalAmount();

    bool IsValid(const CTransactionRef& txNew, int nBlockHeight, CAmount blockReward);
    bool IsExpired();
};

#endif
