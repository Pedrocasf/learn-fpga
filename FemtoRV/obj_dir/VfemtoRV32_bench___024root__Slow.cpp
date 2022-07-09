// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VfemtoRV32_bench.h for the primary calling header

#include "verilated.h"

#include "VfemtoRV32_bench__Syms.h"
#include "VfemtoRV32_bench___024root.h"

void VfemtoRV32_bench___024root___ctor_var_reset(VfemtoRV32_bench___024root* vlSelf);

VfemtoRV32_bench___024root::VfemtoRV32_bench___024root(VfemtoRV32_bench__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VfemtoRV32_bench___024root___ctor_var_reset(this);
}

void VfemtoRV32_bench___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VfemtoRV32_bench___024root::~VfemtoRV32_bench___024root() {
}
