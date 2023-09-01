#ifndef DEEP_GATE_H__
#define DEEP_GATE_H__ 1

#include "algo-gate-api.h"
#include <stdint.h>

bool register_deep_algo( algo_gate_t* gate );

void deep_hash( void *state, const void *input );
int scanhash_deep( struct work *work, uint32_t max_nonce,
                    uint64_t *hashes_done, struct thr_info *mythr );
void init_deep_ctx();

#endif

