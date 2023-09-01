#include "qubit-gate.h"

bool register_qubit_algo( algo_gate_t* gate )
{
   
  init_qubit_ctx();
  gate->scanhash  = (void*)&scanhash_qubit;
  gate->hash      = (void*)&qubit_hash;
  gate->optimizations = SSE2_OPT | AES_OPT | AVX2_OPT;
  return true;
};

