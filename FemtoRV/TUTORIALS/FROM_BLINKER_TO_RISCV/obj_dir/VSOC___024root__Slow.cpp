// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSOC.h for the primary calling header

#include "verilated.h"

#include "VSOC__Syms.h"
#include "VSOC___024root.h"

void VSOC___024root___ctor_var_reset(VSOC___024root* vlSelf);

VSOC___024root::VSOC___024root(VSOC__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VSOC___024root___ctor_var_reset(this);
}

void VSOC___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VSOC___024root::~VSOC___024root() {
}
