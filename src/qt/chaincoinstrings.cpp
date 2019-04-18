

#include <QtGlobal>

// Automatically generated by extract_strings_qt.py
#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif
static const char UNUSED *chaincoin_strings[] = {
QT_TRANSLATE_NOOP("chaincoin-core", "None"),
QT_TRANSLATE_NOOP("chaincoin-core", "None"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"-maxtxfee is set very high! Fees this large could be paid on a single "
"transaction."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Can't generate a change-address key. Private keys are disabled for this "
"wallet."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Cannot obtain a lock on data directory %s. %s is probably already running."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Cannot provide specific connections and have addrman find outgoing "
"connections at the same."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Cannot upgrade a non HD split wallet without upgrading to support pre split "
"keypool. Please use -upgradewallet=169900 or -upgradewallet with no version "
"specified."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Disable all Chaincoin specific functionality (Masternodes, CoinJoin, "
"Governance) (0-1, default: %u)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Distributed under the MIT software license, see the accompanying file "
"COPYING or <http://www.opensource.org/licenses/mit-license.php>."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Enable multiple CoinJoin mixing sessions per block, experimental (0-1, "
"default: %u)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Enable use of automated CoinJoin for funds stored in this wallet (0-1, "
"default: %u)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Error reading %s! All keys read correctly, but transaction data or address "
"book entries might be missing or incorrect."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Error: Listening for incoming connections failed (listen returned error %s)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Failed to create backup, file already exists! This could happen if you "
"restarted wallet in less than 60 seconds. You can continue if you are ok "
"with this."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Fee estimation failed. Fallbackfee is disabled. Wait a few blocks or enable -"
"fallbackfee."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Invalid amount for -maxtxfee=<amount>: '%s' (must be at least the minrelay "
"fee of %s to prevent stuck transactions)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Please check that your computer's date and time are correct! If your clock "
"is wrong, %s will not work properly."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Please contribute if you find %s useful. Visit %s for further information "
"about the software."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"CoinJoin uses exact denominated amounts to send funds, you might simply "
"need to anonymize some more coins."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Provide liquidity to CoinJoin by infrequently mixing coins on a continual "
"basis (0-100, default: %u, 1=very frequent, high fees, 100=very infrequent, "
"low fees)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Prune configured below the minimum of %d MiB.  Please use a higher number."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Prune: last wallet synchronisation goes beyond pruned data. You need to -"
"reindex (download the whole blockchain again in case of pruned node)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Rescans are not possible in pruned mode. You will need to use -reindex which "
"will download the whole blockchain again."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Starting in lite mode, all Chaincoin-specific functionality is disabled."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"The block database contains a block which appears to be from the future. "
"This may be due to your computer's date and time being set incorrectly. Only "
"rebuild the block database if you are sure that your computer's date and "
"time are correct"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"The transaction amount is too small to send after the fee has been deducted"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"This is a pre-release test build - use at your own risk - do not use for "
"privatesend, mining or merchant applications"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"This is the transaction fee you may discard if change is smaller than dust "
"at this level"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"This is the transaction fee you may pay when fee estimates are not available."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"This product includes software developed by the OpenSSL Project for use in "
"the OpenSSL Toolkit %s and cryptographic software written by Eric Young and "
"UPnP software written by Thomas Bernard."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Total length of network version string (%i) exceeds maximum length (%i). "
"Reduce the number or size of uacomments."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Unable to locate enough CoinJoin denominated funds for this transaction."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Unable to locate enough CoinJoin non-denominated funds for this "
"transaction that are not equal 1000 CHC."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Unable to replay blocks. You will need to rebuild the database using -"
"reindex-chainstate."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Unable to rewind the database to a pre-fork state. You will need to "
"redownload the blockchain"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Use N separate masternodes for each denominated input to mix funds (2-16, "
"default: %u)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"WARNING! Failed to replenish keypool, please unlock your wallet to do so."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Wallet is locked, can't replenish keypool! Automatic backups and mixing are "
"disabled, please unlock your wallet to replenish keypool."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Warning: At least %d of %d masternodes are running on a newer software "
"version. Please check latest releases, you might need to update too."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Warning: Every masternode (out of %d known ones) is running on a newer "
"software version. Please check latest releases, it's very likely that you "
"missed a major/critical update."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Warning: Private keys detected in wallet {%s} with disabled private keys"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Warning: The network does not appear to fully agree! Some miners appear to "
"be experiencing issues."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Warning: Unknown block versions being mined! It's possible unknown rules are "
"in effect"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Warning: Wallet file corrupt, data salvaged! Original %s saved as %s in %s; "
"if your balance or transactions are incorrect you should restore from a "
"backup."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Warning: We do not appear to fully agree with our peers! You may need to "
"upgrade, or other nodes may need to upgrade."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"You must specify a masternodeprivkey in the configuration. Please see "
"documentation for help."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"You need to rebuild the database using -reindex to go back to unpruned "
"mode.  This will redownload the entire blockchain"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"masternodeaddr option is deprecated. Please use masternode.conf to manage "
"your remote masternodes."),
QT_TRANSLATE_NOOP("chaincoin-core", "%d of last 100 blocks have unexpected version"),
QT_TRANSLATE_NOOP("chaincoin-core", "%s corrupt, salvage failed"),
QT_TRANSLATE_NOOP("chaincoin-core", "%s is set very high!"),
QT_TRANSLATE_NOOP("chaincoin-core", "(%d could be used only on mainnet)"),
QT_TRANSLATE_NOOP("chaincoin-core", "(must be %d for mainnet)"),
QT_TRANSLATE_NOOP("chaincoin-core", "-maxmempool must be at least %d MB"),
QT_TRANSLATE_NOOP("chaincoin-core", "Already have that input."),
QT_TRANSLATE_NOOP("chaincoin-core", "Automatic backups disabled"),
QT_TRANSLATE_NOOP("chaincoin-core", "Can't find random Masternode."),
QT_TRANSLATE_NOOP("chaincoin-core", "Can't mix while sync in progress."),
QT_TRANSLATE_NOOP("chaincoin-core", "Can't mix: no compatible inputs found!"),
QT_TRANSLATE_NOOP("chaincoin-core", "Cannot downgrade wallet"),
QT_TRANSLATE_NOOP("chaincoin-core", "Cannot resolve -%s address: '%s'"),
QT_TRANSLATE_NOOP("chaincoin-core", "Cannot write to data directory '%s'; check permissions."),
QT_TRANSLATE_NOOP("chaincoin-core", "Change index out of range"),
QT_TRANSLATE_NOOP("chaincoin-core", "Collateral not valid."),
QT_TRANSLATE_NOOP("chaincoin-core", "Config setting for %s only applied on %s network when in [%s] section."),
QT_TRANSLATE_NOOP("chaincoin-core", "Copyright (C) %i-%i"),
QT_TRANSLATE_NOOP("chaincoin-core", "Corrupted block database detected"),
QT_TRANSLATE_NOOP("chaincoin-core", "Could not parse masternode.conf"),
QT_TRANSLATE_NOOP("chaincoin-core", "Do you want to rebuild the block database now?"),
QT_TRANSLATE_NOOP("chaincoin-core", "Done loading"),
QT_TRANSLATE_NOOP("chaincoin-core", "ERROR! Failed to create automatic backup"),
QT_TRANSLATE_NOOP("chaincoin-core", "Enable the client to act as a masternode (0-1, default: %u)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Entries are full."),
QT_TRANSLATE_NOOP("chaincoin-core", "Entry exceeds maximum size."),
QT_TRANSLATE_NOOP("chaincoin-core", "Error initializing block database"),
QT_TRANSLATE_NOOP("chaincoin-core", "Error initializing wallet database environment %s!"),
QT_TRANSLATE_NOOP("chaincoin-core", "Error loading %s"),
QT_TRANSLATE_NOOP("chaincoin-core", "Error loading %s: Private keys can only be disabled during creation"),
QT_TRANSLATE_NOOP("chaincoin-core", "Error loading %s: Wallet corrupted"),
QT_TRANSLATE_NOOP("chaincoin-core", "Error loading %s: Wallet requires newer version of %s"),
QT_TRANSLATE_NOOP("chaincoin-core", "Error loading block database"),
QT_TRANSLATE_NOOP("chaincoin-core", "Error loading wallet %s. Duplicate -wallet filename specified."),
QT_TRANSLATE_NOOP("chaincoin-core", "Error opening block database"),
QT_TRANSLATE_NOOP("chaincoin-core", "Error reading from database, shutting down."),
QT_TRANSLATE_NOOP("chaincoin-core", "Error upgrading chainstate database"),
QT_TRANSLATE_NOOP("chaincoin-core", "Error"),
QT_TRANSLATE_NOOP("chaincoin-core", "Error: A fatal internal error occurred, see debug.log for details"),
QT_TRANSLATE_NOOP("chaincoin-core", "Error: Disk space is low for %s"),
QT_TRANSLATE_NOOP("chaincoin-core", "Error: Disk space is low!"),
QT_TRANSLATE_NOOP("chaincoin-core", "Failed to create backup %s!"),
QT_TRANSLATE_NOOP("chaincoin-core", "Failed to create backup, error: %s"),
QT_TRANSLATE_NOOP("chaincoin-core", "Failed to delete backup, error: %s"),
QT_TRANSLATE_NOOP("chaincoin-core", "Failed to find mixing queue to join"),
QT_TRANSLATE_NOOP("chaincoin-core", "Failed to listen on any port. Use -listen=0 if you want this."),
QT_TRANSLATE_NOOP("chaincoin-core", "Failed to parse host:port string"),
QT_TRANSLATE_NOOP("chaincoin-core", "Failed to rescan the wallet during initialization"),
QT_TRANSLATE_NOOP("chaincoin-core", "Failed to start a new mixing queue"),
QT_TRANSLATE_NOOP("chaincoin-core", "Found enough users, signing ( waiting %s )"),
QT_TRANSLATE_NOOP("chaincoin-core", "Found enough users, signing ..."),
QT_TRANSLATE_NOOP("chaincoin-core", "Importing..."),
QT_TRANSLATE_NOOP("chaincoin-core", "Incompatible mode."),
QT_TRANSLATE_NOOP("chaincoin-core", "Incompatible version."),
QT_TRANSLATE_NOOP("chaincoin-core", "Incorrect or no genesis block found. Wrong datadir for network?"),
QT_TRANSLATE_NOOP("chaincoin-core", "Information"),
QT_TRANSLATE_NOOP("chaincoin-core", "Initialization sanity check failed. %s is shutting down."),
QT_TRANSLATE_NOOP("chaincoin-core", "Input is not valid."),
QT_TRANSLATE_NOOP("chaincoin-core", "Insufficient funds."),
QT_TRANSLATE_NOOP("chaincoin-core", "Invalid -onion address or hostname: '%s'"),
QT_TRANSLATE_NOOP("chaincoin-core", "Invalid -proxy address or hostname: '%s'"),
QT_TRANSLATE_NOOP("chaincoin-core", "Invalid amount for -%s=<amount>: '%s'"),
QT_TRANSLATE_NOOP("chaincoin-core", "Invalid amount for -discardfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("chaincoin-core", "Invalid amount for -fallbackfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("chaincoin-core", "Invalid amount for -paytxfee=<amount>: '%s' (must be at least %s)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Invalid masternodeprivkey. Please see documenation."),
QT_TRANSLATE_NOOP("chaincoin-core", "Invalid netmask specified in -whitelist: '%s'"),
QT_TRANSLATE_NOOP("chaincoin-core", "Invalid port detected in masternode.conf"),
QT_TRANSLATE_NOOP("chaincoin-core", "Invalid script detected."),
QT_TRANSLATE_NOOP("chaincoin-core", "Keep N CHC anonymized (default: %u)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Keypool ran out, please call keypoolrefill first"),
QT_TRANSLATE_NOOP("chaincoin-core", "Last CoinJoin was too recent."),
QT_TRANSLATE_NOOP("chaincoin-core", "Last successful CoinJoin action was too recent."),
QT_TRANSLATE_NOOP("chaincoin-core", "Line: %d"),
QT_TRANSLATE_NOOP("chaincoin-core", "Loading P2P addresses..."),
QT_TRANSLATE_NOOP("chaincoin-core", "Loading banlist..."),
QT_TRANSLATE_NOOP("chaincoin-core", "Loading block index..."),
QT_TRANSLATE_NOOP("chaincoin-core", "Loading masternode cache..."),
QT_TRANSLATE_NOOP("chaincoin-core", "Loading wallet..."),
QT_TRANSLATE_NOOP("chaincoin-core", "Lock is already in place."),
QT_TRANSLATE_NOOP("chaincoin-core", "Lock masternodes from masternode configuration file (default: %u)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Masternode cache is empty, skipping payments and governance cache..."),
QT_TRANSLATE_NOOP("chaincoin-core", "Masternode queue is full."),
QT_TRANSLATE_NOOP("chaincoin-core", "Masternode:"),
QT_TRANSLATE_NOOP("chaincoin-core", "Masternodes are not supported in lite mode."),
QT_TRANSLATE_NOOP("chaincoin-core", "Missing input transaction information."),
QT_TRANSLATE_NOOP("chaincoin-core", "Mixing in progress..."),
QT_TRANSLATE_NOOP("chaincoin-core", "Need to specify a port with -whitebind: '%s'"),
QT_TRANSLATE_NOOP("chaincoin-core", "No Masternodes detected."),
QT_TRANSLATE_NOOP("chaincoin-core", "No compatible Masternode found."),
QT_TRANSLATE_NOOP("chaincoin-core", "No errors detected."),
QT_TRANSLATE_NOOP("chaincoin-core", "No matching denominations found for mixing."),
QT_TRANSLATE_NOOP("chaincoin-core", "Non-standard public key detected."),
QT_TRANSLATE_NOOP("chaincoin-core", "Not compatible with existing transactions."),
QT_TRANSLATE_NOOP("chaincoin-core", "Not enough file descriptors available."),
QT_TRANSLATE_NOOP("chaincoin-core", "Not enough funds to anonymize."),
QT_TRANSLATE_NOOP("chaincoin-core", "Not in the Masternode list."),
QT_TRANSLATE_NOOP("chaincoin-core", "Port: %d"),
QT_TRANSLATE_NOOP("chaincoin-core", "CoinJoin is idle."),
QT_TRANSLATE_NOOP("chaincoin-core", "CoinJoin request complete:"),
QT_TRANSLATE_NOOP("chaincoin-core", "CoinJoin request incomplete:"),
QT_TRANSLATE_NOOP("chaincoin-core", "Prune cannot be configured with a negative value."),
QT_TRANSLATE_NOOP("chaincoin-core", "Prune mode is incompatible with -txindex."),
QT_TRANSLATE_NOOP("chaincoin-core", "Pruning blockstore..."),
QT_TRANSLATE_NOOP("chaincoin-core", "Reducing -maxconnections from %d to %d, because of system limitations."),
QT_TRANSLATE_NOOP("chaincoin-core", "Replaying blocks..."),
QT_TRANSLATE_NOOP("chaincoin-core", "Rescanning..."),
QT_TRANSLATE_NOOP("chaincoin-core", "Rewinding blocks..."),
QT_TRANSLATE_NOOP("chaincoin-core", "Section [%s] is not recognized."),
QT_TRANSLATE_NOOP("chaincoin-core", "Session not complete!"),
QT_TRANSLATE_NOOP("chaincoin-core", "Session timed out."),
QT_TRANSLATE_NOOP("chaincoin-core", "Set the masternode private key"),
QT_TRANSLATE_NOOP("chaincoin-core", "Signing transaction failed"),
QT_TRANSLATE_NOOP("chaincoin-core", "Specified -walletdir \"%s\" does not exist"),
QT_TRANSLATE_NOOP("chaincoin-core", "Specified -walletdir \"%s\" is a relative path"),
QT_TRANSLATE_NOOP("chaincoin-core", "Specified -walletdir \"%s\" is not a directory"),
QT_TRANSLATE_NOOP("chaincoin-core", "Specified blocks directory \"%s\" does not exist."),
QT_TRANSLATE_NOOP("chaincoin-core", "Specify masternode configuration file (default: %s)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Starting network threads..."),
QT_TRANSLATE_NOOP("chaincoin-core", "Submitted following entries to masternode: %u / %d"),
QT_TRANSLATE_NOOP("chaincoin-core", "Submitted to masternode, waiting for more entries ( %u / %d ) %s"),
QT_TRANSLATE_NOOP("chaincoin-core", "Submitted to masternode, waiting in queue %s"),
QT_TRANSLATE_NOOP("chaincoin-core", "Synchroning blockchain..."),
QT_TRANSLATE_NOOP("chaincoin-core", "Synchronization failed"),
QT_TRANSLATE_NOOP("chaincoin-core", "Synchronization finished"),
QT_TRANSLATE_NOOP("chaincoin-core", "Synchronization pending..."),
QT_TRANSLATE_NOOP("chaincoin-core", "Synchronizing governance objects..."),
QT_TRANSLATE_NOOP("chaincoin-core", "Synchronizing masternode payments..."),
QT_TRANSLATE_NOOP("chaincoin-core", "Synchronizing masternodes..."),
QT_TRANSLATE_NOOP("chaincoin-core", "The source code is available from %s."),
QT_TRANSLATE_NOOP("chaincoin-core", "The specified config file %s does not exist\n"),
QT_TRANSLATE_NOOP("chaincoin-core", "The transaction amount is too small to pay the fee"),
QT_TRANSLATE_NOOP("chaincoin-core", "The wallet will avoid paying less than the minimum relay fee."),
QT_TRANSLATE_NOOP("chaincoin-core", "This is experimental software."),
QT_TRANSLATE_NOOP("chaincoin-core", "This is not a Masternode."),
QT_TRANSLATE_NOOP("chaincoin-core", "This is the minimum transaction fee you pay on every transaction."),
QT_TRANSLATE_NOOP("chaincoin-core", "This is the transaction fee you will pay if you send a transaction."),
QT_TRANSLATE_NOOP("chaincoin-core", "Too many %f denominations, removing."),
QT_TRANSLATE_NOOP("chaincoin-core", "Too many %f denominations, skipping."),
QT_TRANSLATE_NOOP("chaincoin-core", "Transaction amount too small"),
QT_TRANSLATE_NOOP("chaincoin-core", "Transaction amounts must not be negative"),
QT_TRANSLATE_NOOP("chaincoin-core", "Transaction created successfully."),
QT_TRANSLATE_NOOP("chaincoin-core", "Transaction fee and change calculation failed"),
QT_TRANSLATE_NOOP("chaincoin-core", "Transaction fees are too high."),
QT_TRANSLATE_NOOP("chaincoin-core", "Transaction has too long of a mempool chain"),
QT_TRANSLATE_NOOP("chaincoin-core", "Transaction must have at least one recipient"),
QT_TRANSLATE_NOOP("chaincoin-core", "Transaction not valid."),
QT_TRANSLATE_NOOP("chaincoin-core", "Transaction too large for fee policy"),
QT_TRANSLATE_NOOP("chaincoin-core", "Transaction too large"),
QT_TRANSLATE_NOOP("chaincoin-core", "Trying to connect..."),
QT_TRANSLATE_NOOP("chaincoin-core", "Unable to bind to %s on this computer (bind returned error %s)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Unable to bind to %s on this computer. %s is probably already running."),
QT_TRANSLATE_NOOP("chaincoin-core", "Unable to generate initial keys"),
QT_TRANSLATE_NOOP("chaincoin-core", "Unable to generate keys"),
QT_TRANSLATE_NOOP("chaincoin-core", "Unable to start HTTP server. See debug log for details."),
QT_TRANSLATE_NOOP("chaincoin-core", "Unknown network specified in -onlynet: '%s'"),
QT_TRANSLATE_NOOP("chaincoin-core", "Unknown response."),
QT_TRANSLATE_NOOP("chaincoin-core", "Unknown state: id = %u"),
QT_TRANSLATE_NOOP("chaincoin-core", "Unsupported logging category %s=%s."),
QT_TRANSLATE_NOOP("chaincoin-core", "Upgrading UTXO database"),
QT_TRANSLATE_NOOP("chaincoin-core", "Upgrading txindex database"),
QT_TRANSLATE_NOOP("chaincoin-core", "User Agent comment (%s) contains unsafe characters."),
QT_TRANSLATE_NOOP("chaincoin-core", "Verifying and backing up wallet(s)..."),
QT_TRANSLATE_NOOP("chaincoin-core", "Verifying blocks..."),
QT_TRANSLATE_NOOP("chaincoin-core", "Very low number of keys left: %d"),
QT_TRANSLATE_NOOP("chaincoin-core", "Wallet %s resides outside wallet directory %s"),
QT_TRANSLATE_NOOP("chaincoin-core", "Wallet is locked."),
QT_TRANSLATE_NOOP("chaincoin-core", "Wallet is not initialized"),
QT_TRANSLATE_NOOP("chaincoin-core", "Wallet needed to be rewritten: restart %s to complete"),
QT_TRANSLATE_NOOP("chaincoin-core", "Warning"),
QT_TRANSLATE_NOOP("chaincoin-core", "Warning: unknown new rules activated (versionbit %i)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Wasn't able to create wallet backup folder %s!"),
QT_TRANSLATE_NOOP("chaincoin-core", "Will retry..."),
QT_TRANSLATE_NOOP("chaincoin-core", "Your entries added successfully."),
QT_TRANSLATE_NOOP("chaincoin-core", "Your transaction was accepted into the pool!"),
QT_TRANSLATE_NOOP("chaincoin-core", "Zapping all transactions from wallet..."),
QT_TRANSLATE_NOOP("chaincoin-core", "no mixing available."),
QT_TRANSLATE_NOOP("chaincoin-core", "see debug.log for details."),
};
