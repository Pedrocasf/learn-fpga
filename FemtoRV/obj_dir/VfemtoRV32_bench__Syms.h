// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VFEMTORV32_BENCH__SYMS_H_
#define VERILATED_VFEMTORV32_BENCH__SYMS_H_  // guard

#include "FPU_funcs.h"
#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VfemtoRV32_bench.h"

// INCLUDE MODULE CLASSES
#include "VfemtoRV32_bench___024root.h"

// SYMS CLASS (contains all model state)
class VfemtoRV32_bench__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VfemtoRV32_bench* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VfemtoRV32_bench___024root     TOP;

    // CONSTRUCTORS
    VfemtoRV32_bench__Syms(VerilatedContext* contextp, const char* namep, VfemtoRV32_bench* modelp);
    ~VfemtoRV32_bench__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
