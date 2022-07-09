// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VfemtoRV32_bench.h"
#include "VfemtoRV32_bench__Syms.h"

//============================================================
// Constructors

VfemtoRV32_bench::VfemtoRV32_bench(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VfemtoRV32_bench__Syms(_vcontextp__, _vcname__, this)}
    , pclk{vlSymsp->TOP.pclk}
    , oled_DIN{vlSymsp->TOP.oled_DIN}
    , oled_CLK{vlSymsp->TOP.oled_CLK}
    , oled_CS{vlSymsp->TOP.oled_CS}
    , oled_DC{vlSymsp->TOP.oled_DC}
    , oled_RST{vlSymsp->TOP.oled_RST}
    , rootp{&(vlSymsp->TOP)}
{
}

VfemtoRV32_bench::VfemtoRV32_bench(const char* _vcname__)
    : VfemtoRV32_bench(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VfemtoRV32_bench::~VfemtoRV32_bench() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VfemtoRV32_bench___024root___eval_initial(VfemtoRV32_bench___024root* vlSelf);
void VfemtoRV32_bench___024root___eval_settle(VfemtoRV32_bench___024root* vlSelf);
void VfemtoRV32_bench___024root___eval(VfemtoRV32_bench___024root* vlSelf);
#ifdef VL_DEBUG
void VfemtoRV32_bench___024root___eval_debug_assertions(VfemtoRV32_bench___024root* vlSelf);
#endif  // VL_DEBUG
void VfemtoRV32_bench___024root___final(VfemtoRV32_bench___024root* vlSelf);

static void _eval_initial_loop(VfemtoRV32_bench__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VfemtoRV32_bench___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VfemtoRV32_bench___024root___eval_settle(&(vlSymsp->TOP));
        VfemtoRV32_bench___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VfemtoRV32_bench::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VfemtoRV32_bench::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VfemtoRV32_bench___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VfemtoRV32_bench___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VfemtoRV32_bench::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VfemtoRV32_bench::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VfemtoRV32_bench::final() {
    VfemtoRV32_bench___024root___final(&(vlSymsp->TOP));
}
