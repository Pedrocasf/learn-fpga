// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VSOC.h"
#include "VSOC__Syms.h"

//============================================================
// Constructors

VSOC::VSOC(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VSOC__Syms(_vcontextp__, _vcname__, this)}
    , CLK{vlSymsp->TOP.CLK}
    , RESET{vlSymsp->TOP.RESET}
    , LEDS{vlSymsp->TOP.LEDS}
    , RXD{vlSymsp->TOP.RXD}
    , TXD{vlSymsp->TOP.TXD}
    , rootp{&(vlSymsp->TOP)}
{
}

VSOC::VSOC(const char* _vcname__)
    : VSOC(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VSOC::~VSOC() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VSOC___024root___eval_initial(VSOC___024root* vlSelf);
void VSOC___024root___eval_settle(VSOC___024root* vlSelf);
void VSOC___024root___eval(VSOC___024root* vlSelf);
#ifdef VL_DEBUG
void VSOC___024root___eval_debug_assertions(VSOC___024root* vlSelf);
#endif  // VL_DEBUG
void VSOC___024root___final(VSOC___024root* vlSelf);

static void _eval_initial_loop(VSOC__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VSOC___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VSOC___024root___eval_settle(&(vlSymsp->TOP));
        VSOC___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VSOC::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSOC::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VSOC___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VSOC___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VSOC::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VSOC::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VSOC::final() {
    VSOC___024root___final(&(vlSymsp->TOP));
}
