// Copyright (c) 2007-2010  Projet RNRT SAPHIR
// Copyright (c) 2019 PM-Tech
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef GROESTL512_H
#define GROESTL512_H

#include <stdint.h>
#include <stdlib.h>
#include <crypto/c11_types.h>

/**
 * This structure is a context for GROESTL512 computations:
 * it contains the intermediate values and some data from the last
 * entered block. Once a BLAKE computation has been performed, the
 * context can be reused for another computation.
 *
 * The contents of this structure are private. A running GROESTL512
 * computation can be cloned by copying the context (e.g. with a simple
 * <code>memcpy()</code>).
 */
typedef struct {
    unsigned char buf[128];    /* first field, for alignment */
    size_t ptr;
    sph_u64 state[16];
    sph_u64 count;
} groestl_context;

/** A hasher class for GROESTL512. */
class CGROESTL512
{
private:
    groestl_context s;

public:
    static const size_t OUTPUT_SIZE = 64;

    CGROESTL512();
    CGROESTL512& Write(const unsigned char* data, size_t len);
    void Finalize(unsigned char hash[OUTPUT_SIZE]);
    CGROESTL512& Reset();
};

#endif // GROESTL512_H
