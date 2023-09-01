#include "deep-gate.h"

bool register_deep_algo( algo_gate_t* gate )
{
  init_deep_ctx();
  gate->scanhash  = (void*)&scanhash_deep;
  gate->hash      = (void*)&deep_hash;
  gate->optimizations = SSE2_OPT | AES_OPT | AVX2_OPT;
  return true;
};

