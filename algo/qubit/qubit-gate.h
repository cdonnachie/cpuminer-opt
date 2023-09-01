#ifndef QUBIT_GATE_H__
#define QUBIT_GATE_H__ 1

#include "algo-gate-api.h"
#include <stdint.h>

bool register_qubit_algo( algo_gate_t* gate );

void qubit_hash( void *state, const void *input );
int scanhash_qubit( struct work *work, uint32_t max_nonce,
                    uint64_t *hashes_done, struct thr_info *mythr );
void init_qubit_ctx();

#endif

