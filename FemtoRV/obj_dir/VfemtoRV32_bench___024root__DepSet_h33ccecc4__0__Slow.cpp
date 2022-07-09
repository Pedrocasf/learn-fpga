// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VfemtoRV32_bench.h for the primary calling header

#include "verilated.h"

#include "VfemtoRV32_bench___024root.h"

VL_ATTR_COLD void VfemtoRV32_bench___024root___initial__TOP__0(VfemtoRV32_bench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VfemtoRV32_bench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfemtoRV32_bench___024root___initial__TOP__0\n"); );
    // Init
    IData/*31:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I;
    CData/*6:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    VlWide<6>/*191:0*/ __Vtemp_h15be67f0__0;
    // Body
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_PC = 0U;
    __Vtemp_h15be67f0__0[0U] = 0x2e686578U;
    __Vtemp_h15be67f0__0[1U] = 0x77617265U;
    __Vtemp_h15be67f0__0[2U] = 0x6669726dU;
    __Vtemp_h15be67f0__0[3U] = 0x4152452fU;
    __Vtemp_h15be67f0__0[4U] = 0x49524d57U;
    __Vtemp_h15be67f0__0[5U] = 0x46U;
    VL_READMEM_N(true, 32, 16384, 0, VL_CVT_PACK_STR_NW(6, __Vtemp_h15be67f0__0)
                 ,  &(vlSelf->femtoRV32_bench__DOT__uut__DOT__RAM)
                 , 0, ~0ULL);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__leds__DOT__led_state = 0U;
    vlSelf->oled_DC = 0U;
    vlSelf->oled_RST = 0U;
    vlSelf->oled_CS = 1U;
    vlSelf->femtoRV32_bench__DOT__uut__DOT__oled_display__DOT__bitcount = 0U;
    vlSelf->femtoRV32_bench__DOT__uut__DOT__oled_display__DOT__shifter = 0U;
    vlSelf->femtoRV32_bench__DOT__uut__DOT__reset_cnt = 0U;
    VL_WRITEF("#  Generating FPMI ROM...\n");
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[0U] = 0x40U;
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I = 1U;
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__FPMPROG_CMP = 1U;
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 1U;
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
        = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 0x47U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    VL_WRITEF("#  %3d microinstructions used by           1:FPMPROG_CMP\n",
              32,(femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
                  - (IData)(1U)));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__FPMPROG_ADD 
        = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I;
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 1U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 3U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 4U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 5U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 0x46U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    VL_WRITEF("#  %3d microinstructions used by %11d:FPMPROG_ADD\n",
              32,(femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
                  - vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__FPMPROG_ADD),
              32,vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__FPMPROG_ADD);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__FPMPROG_MUL 
        = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I;
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 0x42U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    VL_WRITEF("#  %3d microinstructions used by %11d:FPMPROG_MUL\n",
              32,(femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
                  - vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__FPMPROG_MUL),
              32,vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__FPMPROG_MUL);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__FPMPROG_MADD 
        = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I;
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 2U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 3U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 4U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 5U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 0x46U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    VL_WRITEF("#  %3d microinstructions used by %11d:FPMPROG_MADD\n",
              32,(femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
                  - vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__FPMPROG_MADD),
              32,vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__FPMPROG_MADD);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__FPMPROG_DIV 
        = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I;
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 0xeU;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 2U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 3U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 4U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 5U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 6U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 0xfU;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 2U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 3U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 4U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 5U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 6U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 0x10U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 2U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 3U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 4U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 5U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 6U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 0xfU;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 2U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 3U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 4U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 5U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 6U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 0x10U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 2U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 3U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 4U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 5U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 6U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 0xfU;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 2U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 3U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 4U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 5U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 6U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 0x10U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 2U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 3U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 4U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 5U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 6U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 0x17U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 5U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 6U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 0x11U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 2U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 0x12U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 8U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 2U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 3U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 4U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 5U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 6U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 0xcU;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 9U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 8U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 2U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 3U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 4U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 5U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 0x46U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    VL_WRITEF("#  %3d microinstructions used by %11d:FPMPROG_DIV\n",
              32,(femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
                  - vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__FPMPROG_DIV),
              32,vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__FPMPROG_DIV);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__FPMPROG_FP_TO_INT 
        = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I;
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 1U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 0x54U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    VL_WRITEF("#  %3d microinstructions used by %11d:FPMPROG_FP_TO_INT\n",
              32,(femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
                  - vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__FPMPROG_FP_TO_INT),
              32,vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__FPMPROG_FP_TO_INT);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__FPMPROG_INT_TO_FP 
        = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I;
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 0x15U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 5U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 0x46U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    VL_WRITEF("#  %3d microinstructions used by %11d:FPMPROG_INT_TO_FP\n",
              32,(femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
                  - vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__FPMPROG_INT_TO_FP),
              32,vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__FPMPROG_INT_TO_FP);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__FPMPROG_SQRT 
        = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I;
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 0x13U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 2U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 8U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 0xaU;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 2U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 3U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 4U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 5U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 6U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 8U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 0xbU;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 2U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 0xdU;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 8U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 0xbU;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 2U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 8U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 0xaU;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 2U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 3U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 4U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 5U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 6U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 8U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 0xbU;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 2U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 8U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 9U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 0x42U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    VL_WRITEF("#  %3d microinstructions used by %11d:FPMPROG_SQRT\n",
              32,(femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
                  - vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__FPMPROG_SQRT),
              32,vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__FPMPROG_SQRT);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__FPMPROG_MIN_MAX 
        = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I;
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 1U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0 = 0x56U;
    if (VL_LIKELY((0x6fU >= (0x7fU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[(0x7fU 
                                                                                & femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I)] 
            = femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT____Vlvbound_h38bc2df0__0;
    }
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
        = ((IData)(1U) + femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I);
    VL_WRITEF("#  %3d microinstructions used by %11d:FPMPROG_MIN_MAX\n#  FPMI ROM max address:%11d\n#  FPMI ROM size       :        112\n",
              32,(femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
                  - vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__FPMPROG_MIN_MAX),
              32,vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__FPMPROG_MIN_MAX,
              32,(femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I 
                  - (IData)(1U)));
    if (VL_UNLIKELY(VL_LTS_III(32, 0x70U, femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__I))) {
        VL_WRITEF("!!!!!!! FPMI ROM SIZE exceeded !!!!!!!\n");
    }
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__cycles = 0ULL;
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__registerFile[0U] = 0U;
}

VL_ATTR_COLD void VfemtoRV32_bench___024root___settle__TOP__0(VfemtoRV32_bench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VfemtoRV32_bench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfemtoRV32_bench___024root___settle__TOP__0\n"); );
    // Init
    IData/*31:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__Iimm;
    CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__isALU;
    IData/*31:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__aluPlus;
    QData/*32:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__aluMinus;
    CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__LT;
    IData/*31:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__shifter_in;
    IData/*31:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__shifter;
    IData/*31:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__leftshift;
    IData/*31:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__aluOut_base;
    IData/*23:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__PCinc;
    IData/*23:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__PCplusImm;
    IData/*31:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__CSR_read;
    IData/*31:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__CSR_modifier;
    CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__mem_byteAccess;
    CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__mem_halfwordAccess;
    CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__LOAD_sign;
    SData/*15:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__LOAD_halfword;
    CData/*7:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__LOAD_byte;
    IData/*31:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__cached_mem;
    CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__jumpToPCplusImm;
    CData/*6:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmprog;
    QData/*50:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__frac_diff;
    CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFSQRT;
    IData/*31:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__clz2__DOT____Vcellinp__genblk1__DOT__inner__in;
    SData/*15:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__clz2__DOT__genblk1__DOT__inner__DOT____Vcellinp__genblk1__DOT__inner__in;
    CData/*7:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__clz2__DOT__genblk1__DOT__inner__DOT__genblk1__DOT__inner__DOT____Vcellinp__genblk1__DOT__inner__in;
    CData/*3:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__clz2__DOT__genblk1__DOT__inner__DOT__genblk1__DOT__inner__DOT__genblk1__DOT__inner__DOT____Vcellinp__genblk1__DOT__inner__in;
    SData/*11:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__addi4spnImm;
    SData/*11:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__lwswImm;
    SData/*11:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__lwspImm;
    SData/*11:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__swspImm;
    SData/*11:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__addImm;
    SData/*12:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__bImm;
    IData/*20:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__jalImm;
    IData/*31:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__luiImm;
    IData/*31:0*/ __Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__0__Vfuncout;
    IData/*31:0*/ __Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__0__x;
    IData/*31:0*/ __Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__1__Vfuncout;
    IData/*31:0*/ __Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__1__x;
    // Body
    vlSelf->oled_CLK = vlSelf->femtoRV32_bench__DOT__uut__DOT__oled_display__DOT__genblk1__DOT__slow_clk__DOT__slow_cnt;
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__aluBusy 
        = (0U != (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__div_cnt));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__frcp_exp 
        = (0x1ffU & (((IData)(0x7eU) + (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp)) 
                     - (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__E_exp)));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__rsqrt_doom_magic 
        = ((IData)(0x5f3759dfU) - (((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_exp) 
                                    << 0x16U) | (0x3fffffU 
                                                 & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_frac 
                                                    >> 1U))));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_fcvt_ftoi_shifted 
        = ((0x100U & ((((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_exp) 
                        - (IData)(0x7fU)) - (IData)(0x17U)) 
                      - (IData)(6U))) ? ((0U != (0xfU 
                                                 & ((- 
                                                     ((((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_exp) 
                                                        - (IData)(0x7fU)) 
                                                       - (IData)(0x17U)) 
                                                      - (IData)(6U))) 
                                                    >> 5U)))
                                          ? 0U : ((IData)(
                                                          (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac 
                                                           >> 0x12U)) 
                                                  >> 
                                                  (0x1fU 
                                                   & (- 
                                                      ((((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_exp) 
                                                         - (IData)(0x7fU)) 
                                                        - (IData)(0x17U)) 
                                                       - (IData)(6U))))))
            : ((IData)((vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac 
                        >> 0x12U)) << (0x1fU & ((((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_exp) 
                                                  - (IData)(0x1fU)) 
                                                 - (IData)(0x17U)) 
                                                - (IData)(6U)))));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__interrupt 
        = (((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__interrupt_request_sticky) 
            & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__mstatus)) 
           & (~ (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__mcause)));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__prod_frac 
        = (0x3ffffffffffffULL & ((QData)((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_frac)) 
                                 * (QData)((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_frac))));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__exp_diff 
        = (0x1ffU & ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_exp) 
                     - (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp)));
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__frac_diff 
        = (0x7ffffffffffffULL & (VL_EXTENDS_QQ(51,50, vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_frac) 
                                 - VL_EXTENDS_QQ(51,50, vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac)));
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__PCinc 
        = (0xffffffU & ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__long_instr)
                         ? ((IData)(4U) + vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__PC)
                         : ((IData)(2U) + vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__PC)));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__frac_sum 
        = (0x7ffffffffffffULL & (VL_EXTENDS_QQ(51,50, vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_frac) 
                                 + VL_EXTENDS_QQ(51,50, vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac)));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__current_cache_hit 
        = (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__cached_addr 
           == (0x3fffffU & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__PC 
                            >> 2U)));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__isLoad 
        = (0U == (0xfU & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                          >> 1U)));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__isStore 
        = (4U == (0xfU & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                          >> 1U)));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rdIsFP 
        = (((1U == (0x1fU & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)) 
            | (4U == (7U & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                            >> 2U)))) | (IData)(((0x14U 
                                                  == 
                                                  (0x1cU 
                                                   & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)) 
                                                 & (((~ 
                                                      (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                                                       >> 0x1dU)) 
                                                     | (0xdU 
                                                        == 
                                                        (0xfU 
                                                         & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                                                            >> 0x1aU)))) 
                                                    | (0xfU 
                                                       == 
                                                       (0xfU 
                                                        & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                                                           >> 0x1aU)))))));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fclass 
        = ((0x7fe00U & (((0xffU == (0xffU & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1 
                                             >> 0x17U))) 
                         << 9U) & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1 
                                   >> 0xdU))) | ((((IData)(
                                                           (0x7f800000U 
                                                            == 
                                                            (0x7fc00000U 
                                                             & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1))) 
                                                   & (0U 
                                                      != 
                                                      (0x3fffffU 
                                                       & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1))) 
                                                  << 8U) 
                                                 | (((IData)(
                                                             (0x7f800000U 
                                                              == vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1)) 
                                                     << 7U) 
                                                    | (((((~ 
                                                           (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1 
                                                            >> 0x1fU)) 
                                                          & (0U 
                                                             != 
                                                             (0xffU 
                                                              & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1 
                                                                 >> 0x17U)))) 
                                                         & (0xffU 
                                                            != 
                                                            (0xffU 
                                                             & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1 
                                                                >> 0x17U)))) 
                                                        << 6U) 
                                                       | ((((IData)(
                                                                    (0U 
                                                                     == 
                                                                     (0xff800000U 
                                                                      & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1))) 
                                                            & (0U 
                                                               != 
                                                               (0x7fffffU 
                                                                & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1))) 
                                                           << 5U) 
                                                          | (((IData)(
                                                                      (0U 
                                                                       == vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1)) 
                                                              << 4U) 
                                                             | (((IData)(
                                                                         (0x80000000U 
                                                                          == vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1)) 
                                                                 << 3U) 
                                                                | ((((IData)(
                                                                             (0x80000000U 
                                                                              == 
                                                                              (0xff800000U 
                                                                               & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1))) 
                                                                     & (0U 
                                                                        != 
                                                                        (0x7fffffU 
                                                                         & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1))) 
                                                                    << 2U) 
                                                                   | ((2U 
                                                                       & (((vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1 
                                                                            >> 0x1eU) 
                                                                           & ((0U 
                                                                               != 
                                                                               (0xffU 
                                                                                & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1 
                                                                                >> 0x17U))) 
                                                                              << 1U)) 
                                                                          & ((0xffU 
                                                                              != 
                                                                              (0xffU 
                                                                               & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1 
                                                                                >> 0x17U))) 
                                                                             << 1U))) 
                                                                      | (IData)(
                                                                                (0xff800000U 
                                                                                == vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1)))))))))));
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__CSR_modifier 
        = ((0x1000U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)
            ? (0x1fU & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                        >> 0xdU)) : vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT____Vcellinp__FPU__wr 
        = (IData)((((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__state) 
                    >> 3U) & (0x10U == (0x18U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr))));
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__isALU 
        = ((4U == (0x1fU & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)) 
           | (0xcU == (0x1fU & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__interrupt_return 
        = (0xffU & ((0x1cU == (0x1fU & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)) 
                    & ((IData)(1U) << (7U & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                                             >> 0xaU)))));
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__mem_halfwordAccess 
        = (IData)((0x400U == (0xc01U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFCVTSWU 
        = (IData)((0x34040004U == (0x3e040004U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFCVTSW 
        = (IData)((0x34000004U == (0x3e040004U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFCVTWUS 
        = (IData)((0x30040004U == (0x3e040004U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFCVTWS 
        = (IData)((0x30000004U == (0x3e040004U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFLE 
        = (IData)((0x28000004U == (0x3e000c04U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFLT 
        = (IData)((0x28000404U == (0x3e000c04U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFEQ 
        = (IData)((0x28000804U == (0x3e000c04U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFMAX 
        = (IData)((0xa000404U == (0x3e000404U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFMIN 
        = (IData)((0xa000004U == (0x3e000404U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFADD 
        = (IData)((4U == (0x3e000004U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFSUB 
        = (IData)((0x2000004U == (0x3e000004U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFMUL 
        = (IData)((0x4000004U == (0x3e000004U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFDIV 
        = (IData)((0x6000004U == (0x3e000004U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)));
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFSQRT 
        = (IData)((0x16000004U == (0x3e000004U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)));
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__PCplusImm 
        = (0xffffffU & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__PC 
                        + ((2U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)
                            ? ((0xf00000U & ((- (IData)(
                                                        (1U 
                                                         & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                                                            >> 0x1dU)))) 
                                             << 0x14U)) 
                               | ((0xff000U & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                                               << 2U)) 
                                  | ((0x800U & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                                                >> 7U)) 
                                     | (0x7feU & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                                                  >> 0x12U)))))
                            : ((4U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)
                                ? (0xfff000U & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                                                << 2U))
                                : ((0xfff000U & ((- (IData)(
                                                            (1U 
                                                             & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                                                                >> 0x1dU)))) 
                                                 << 0xcU)) 
                                   | ((0x800U & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                                                 << 6U)) 
                                      | ((0x7e0U & 
                                          (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                                           >> 0x12U)) 
                                         | (0x1eU & 
                                            (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                                             >> 5U)))))))));
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__mem_byteAccess 
        = (IData)((0U == (0xc01U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)));
    __Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__0__x 
        = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1;
    __Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__0__Vfuncout 
        = ((__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__0__x 
            << 0x1fU) | ((0x40000000U & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__0__x 
                                         << 0x1dU)) 
                         | ((0x20000000U & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__0__x 
                                            << 0x1bU)) 
                            | ((0x10000000U & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__0__x 
                                               << 0x19U)) 
                               | ((0x8000000U & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__0__x 
                                                 << 0x17U)) 
                                  | ((0x4000000U & 
                                      (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__0__x 
                                       << 0x15U)) | 
                                     ((0x2000000U & 
                                       (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__0__x 
                                        << 0x13U)) 
                                      | ((0x1000000U 
                                          & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__0__x 
                                             << 0x11U)) 
                                         | ((0x800000U 
                                             & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__0__x 
                                                << 0xfU)) 
                                            | ((0x400000U 
                                                & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__0__x 
                                                   << 0xdU)) 
                                               | ((0x200000U 
                                                   & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__0__x 
                                                      << 0xbU)) 
                                                  | ((0x100000U 
                                                      & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__0__x 
                                                         << 9U)) 
                                                     | ((0x80000U 
                                                         & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__0__x 
                                                            << 7U)) 
                                                        | ((0x40000U 
                                                            & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__0__x 
                                                               << 5U)) 
                                                           | ((0x20000U 
                                                               & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__0__x 
                                                                  << 3U)) 
                                                              | ((0x10000U 
                                                                  & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__0__x 
                                                                     << 1U)) 
                                                                 | ((0x8000U 
                                                                     & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__0__x 
                                                                        >> 1U)) 
                                                                    | ((0x4000U 
                                                                        & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__0__x 
                                                                           >> 3U)) 
                                                                       | ((0x2000U 
                                                                           & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__0__x 
                                                                              >> 5U)) 
                                                                          | ((0x1000U 
                                                                              & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__0__x 
                                                                                >> 7U)) 
                                                                             | ((0x800U 
                                                                                & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__0__x 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__0__x 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__0__x 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__0__x 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__0__x 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__0__x 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__0__x 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__0__x 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__0__x 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__0__x 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__0__x 
                                                                                >> 0x1dU)) 
                                                                                | (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__0__x 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))));
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__shifter_in 
        = ((2U & ((IData)(1U) << (7U & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                                        >> 0xaU))))
            ? __Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__0__Vfuncout
            : vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__Iimm 
        = (((- (IData)((1U & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                              >> 0x1dU)))) << 0xbU) 
           | (0x7ffU & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                        >> 0x12U)));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__oled_display__DOT__sending 
        = (0U != (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__oled_display__DOT__bitcount));
    vlSelf->oled_DIN = (1U & ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__oled_display__DOT__shifter) 
                              >> 0xfU));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__reset = 
        (0xffffU == (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__reset_cnt));
    vlSelf->femtoRV32_bench__DOT__uut__DOT____Vcellinp__processor__reset 
        = ((0xffffU == (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__reset_cnt)) 
           & (~ (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__uart_brk)));
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__CSR_read 
        = (((((((0x300U == (0xfffU & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                                      >> 0x12U))) ? 
                ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__mstatus) 
                 << 3U) : 0U) | ((0x305U == (0xfffU 
                                             & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                                                >> 0x12U)))
                                  ? vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__mtvec
                                  : 0U)) | ((0x341U 
                                             == (0xfffU 
                                                 & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                                                    >> 0x12U)))
                                             ? vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__mepc
                                             : 0U)) 
             | ((0x342U == (0xfffU & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                                      >> 0x12U))) ? 
                ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__mcause) 
                 << 0x1fU) : 0U)) | ((0xc00U == (0xfffU 
                                                 & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                                                    >> 0x12U)))
                                      ? (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__cycles)
                                      : 0U)) | ((0xc80U 
                                                 == 
                                                 (0xfffU 
                                                  & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                                                     >> 0x12U)))
                                                 ? (IData)(
                                                           (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__cycles 
                                                            >> 0x20U))
                                                 : 0U));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__prod_exp_norm 
        = (0x1ffU & ((((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_exp) 
                       + (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_exp)) 
                      - (IData)(0x7fU)) + (1U & (IData)(
                                                        (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__prod_frac 
                                                         >> 0x2fU)))));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_LE_Y 
        = ((((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign) 
             & (~ (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_sign))) 
            | (((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign) 
                & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_sign)) 
               & (((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__exp_diff) 
                   >> 8U) | ((0U == VL_EXTENDS_II(32,9, (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__exp_diff))) 
                             & ((IData)((femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__frac_diff 
                                         >> 0x32U)) 
                                | (0ULL == femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__frac_diff)))))) 
           | (((~ (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign)) 
               & (~ (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_sign))) 
              & (((~ ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__exp_diff) 
                      >> 8U)) & (0U != VL_EXTENDS_II(32,9, (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__exp_diff)))) 
                 | ((0U == VL_EXTENDS_II(32,9, (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__exp_diff))) 
                    & (~ (IData)((femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__frac_diff 
                                  >> 0x32U)))))));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_EQ_Y 
        = (((0U == VL_EXTENDS_II(32,9, (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__exp_diff))) 
            & (0ULL == femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__frac_diff)) 
           & ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign) 
              == (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_sign)));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fabsY_LT_fabsX 
        = (1U & (((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__exp_diff) 
                  >> 8U) | ((0U == VL_EXTENDS_II(32,9, (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__exp_diff))) 
                            & (IData)((femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__frac_diff 
                                       >> 0x32U)))));
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__clz2__DOT____Vcellinp__genblk1__DOT__inner__in 
        = ((0U != (IData)((vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__frac_sum 
                           >> 0x20U))) ? (IData)((vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__frac_sum 
                                                  >> 0x20U))
            : (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__frac_sum));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__aluWr 
        = (((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__state) 
            >> 3U) & (IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT__isALU));
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmprog 
        = (0x7fU & (((((((((((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFLT) 
                             | (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFLE)) 
                            | (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFEQ)) 
                           | ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFADD) 
                              | (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFSUB))) 
                          | (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFMUL)) 
                         | ((((0U == (7U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)) 
                              | (1U == (7U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr))) 
                             | (3U == (7U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr))) 
                            | (2U == (7U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)))) 
                        | (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFDIV)) 
                       | (IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFSQRT)) 
                      | ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFCVTWS) 
                         | (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFCVTWUS))) 
                     | ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFCVTSW) 
                        | (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFCVTSWU)))
                     ? ((((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFLT) 
                          | (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFLE)) 
                         | (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFEQ))
                         ? vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__FPMPROG_CMP
                         : (((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFADD) 
                             | (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFSUB))
                             ? vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__FPMPROG_ADD
                             : ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFMUL)
                                 ? vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__FPMPROG_MUL
                                 : (((((0U == (7U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)) 
                                       | (1U == (7U 
                                                 & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr))) 
                                      | (3U == (7U 
                                                & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr))) 
                                     | (2U == (7U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)))
                                     ? vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__FPMPROG_MADD
                                     : ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFDIV)
                                         ? vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__FPMPROG_DIV
                                         : ((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFSQRT)
                                             ? vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__FPMPROG_SQRT
                                             : (((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFCVTWS) 
                                                 | (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFCVTWUS))
                                                 ? vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__FPMPROG_FP_TO_INT
                                                 : vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__FPMPROG_INT_TO_FP)))))))
                     : (((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFMIN) 
                         | (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFMAX))
                         ? vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__FPMPROG_MIN_MAX
                         : 0U)));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__aluIn2 
        = (((0xcU == (0x1fU & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)) 
            | (0x18U == (0x1fU & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)))
            ? vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs2
            : femtoRV32_bench__DOT__uut__DOT__processor__DOT__Iimm);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__loadstore_addr 
        = (0xffffffU & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1 
                        + ((8U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)
                            ? ((0xfff800U & ((- (IData)(
                                                        (1U 
                                                         & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                                                            >> 0x1dU)))) 
                                             << 0xbU)) 
                               | ((0x7e0U & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                                             >> 0x12U)) 
                                  | (0x1fU & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                                              >> 5U))))
                            : femtoRV32_bench__DOT__uut__DOT__processor__DOT__Iimm)));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__CSR_write 
        = ((2U == (3U & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                         >> 0xaU))) ? (femtoRV32_bench__DOT__uut__DOT__processor__DOT__CSR_modifier 
                                       | femtoRV32_bench__DOT__uut__DOT__processor__DOT__CSR_read)
            : ((3U == (3U & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                             >> 0xaU))) ? ((~ femtoRV32_bench__DOT__uut__DOT__processor__DOT__CSR_modifier) 
                                           & femtoRV32_bench__DOT__uut__DOT__processor__DOT__CSR_read)
                : femtoRV32_bench__DOT__uut__DOT__processor__DOT__CSR_modifier));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__prod_Z 
        = (1U & (VL_GTES_III(32, 0U, VL_EXTENDS_II(32,9, (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__prod_exp_norm))) 
                 | (~ (IData)((0U != (3U & (IData)(
                                                   (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__prod_frac 
                                                    >> 0x2eU))))))));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_LT_Y 
        = ((((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign) 
             & (~ (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_sign))) 
            | (((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign) 
                & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_sign)) 
               & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fabsY_LT_fabsX))) 
           | (((~ (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign)) 
               & (~ (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_sign))) 
              & (((~ ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__exp_diff) 
                      >> 8U)) & (0U != VL_EXTENDS_II(32,9, (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__exp_diff)))) 
                 | (((0U == VL_EXTENDS_II(32,9, (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__exp_diff))) 
                     & (0ULL != femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__frac_diff)) 
                    & (~ (IData)((femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__frac_diff 
                                  >> 0x32U)))))));
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__clz2__DOT__genblk1__DOT__inner__DOT____Vcellinp__genblk1__DOT__inner__in 
        = (0xffffU & ((0U != (femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__clz2__DOT____Vcellinp__genblk1__DOT__inner__in 
                              >> 0x10U)) ? (femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__clz2__DOT____Vcellinp__genblk1__DOT__inner__in 
                                            >> 0x10U)
                       : femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__clz2__DOT____Vcellinp__genblk1__DOT__inner__in));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_PC_next 
        = (0x7fU & ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT____Vcellinp__FPU__wr)
                     ? (IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmprog)
                     : ((0x40U & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr))
                         ? 0U : ((IData)(1U) + (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_PC)))));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__multiply 
        = VL_MULS_QQQ(64, VL_EXTENDS_QQ(64,33, (((QData)((IData)(
                                                                 ((vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1 
                                                                   >> 0x1fU) 
                                                                  & (((IData)(1U) 
                                                                      << 
                                                                      (7U 
                                                                       & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                                                                          >> 0xaU))) 
                                                                     >> 1U)))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1)))), 
                      VL_EXTENDS_QQ(64,33, (((QData)((IData)(
                                                             ((vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__aluIn2 
                                                               >> 0x1fU) 
                                                              & ((0x7fU 
                                                                  & (((IData)(1U) 
                                                                      << 
                                                                      (7U 
                                                                       & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                                                                          >> 0xaU))) 
                                                                     >> 1U)) 
                                                                 | (0x3fU 
                                                                    & (((IData)(1U) 
                                                                        << 
                                                                        (7U 
                                                                         & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                                                                            >> 0xaU))) 
                                                                       >> 2U)))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__aluIn2)))));
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__aluPlus 
        = (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1 
           + vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__aluIn2);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__shifter 
        = (IData)((0x1ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 
                                                   (((QData)((IData)(
                                                                     ((vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                                                                       >> 0x1cU) 
                                                                      & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1 
                                                                         >> 0x1fU)))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT__shifter_in))), 
                                                   (0x1fU 
                                                    & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__aluIn2))));
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__aluMinus 
        = (0x1ffffffffULL & (1ULL + ((0x100000000ULL 
                                      | (QData)((IData)(
                                                        (~ vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__aluIn2)))) 
                                     + (QData)((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1)))));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_wdata 
        = ((0xffff0000U & vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_wdata) 
           | ((0xff00U & (((1U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__loadstore_addr)
                            ? vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs2
                            : (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs2 
                               >> 8U)) << 8U)) | (0xffU 
                                                  & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs2)));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_wdata 
        = ((0xff00ffffU & vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_wdata) 
           | (0xff0000U & (((2U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__loadstore_addr)
                             ? vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs2
                             : (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs2 
                                >> 0x10U)) << 0x10U)));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_wdata 
        = ((0xffffffU & vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_wdata) 
           | (((1U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__loadstore_addr)
                ? vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs2
                : ((2U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__loadstore_addr)
                    ? (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs2 
                       >> 8U) : (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs2 
                                 >> 0x18U))) << 0x18U));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_wmask 
        = ((- (IData)((IData)((((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__state) 
                                >> 3U) & (8U == (0x1eU 
                                                 & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)))))) 
           & ((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT__mem_byteAccess)
               ? ((2U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__loadstore_addr)
                   ? ((1U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__loadstore_addr)
                       ? 8U : 4U) : ((1U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__loadstore_addr)
                                      ? 2U : 1U)) : 
              ((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT__mem_halfwordAccess)
                ? ((2U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__loadstore_addr)
                    ? 0xcU : 3U) : 0xfU)));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_address 
        = ((IData)((0U != (3U & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__state))))
            ? ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__fetch_second_half)
                ? (0xfffffcU & ((IData)(4U) + vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__PC))
                : (0xfffffcU & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__PC))
            : vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__loadstore_addr);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__clz2__DOT__genblk1__DOT__inner__DOT__genblk1__DOT__inner__DOT____Vcellinp__genblk1__DOT__inner__in 
        = (0xffU & ((0U != (0xffU & ((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__clz2__DOT__genblk1__DOT__inner__DOT____Vcellinp__genblk1__DOT__inner__in) 
                                     >> 8U))) ? ((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__clz2__DOT__genblk1__DOT__inner__DOT____Vcellinp__genblk1__DOT__inner__in) 
                                                 >> 8U)
                     : (IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__clz2__DOT__genblk1__DOT__inner__DOT____Vcellinp__genblk1__DOT__inner__in)));
    __Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__1__x 
        = femtoRV32_bench__DOT__uut__DOT__processor__DOT__shifter;
    __Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__1__Vfuncout 
        = ((__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__1__x 
            << 0x1fU) | ((0x40000000U & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__1__x 
                                         << 0x1dU)) 
                         | ((0x20000000U & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__1__x 
                                            << 0x1bU)) 
                            | ((0x10000000U & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__1__x 
                                               << 0x19U)) 
                               | ((0x8000000U & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__1__x 
                                                 << 0x17U)) 
                                  | ((0x4000000U & 
                                      (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__1__x 
                                       << 0x15U)) | 
                                     ((0x2000000U & 
                                       (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__1__x 
                                        << 0x13U)) 
                                      | ((0x1000000U 
                                          & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__1__x 
                                             << 0x11U)) 
                                         | ((0x800000U 
                                             & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__1__x 
                                                << 0xfU)) 
                                            | ((0x400000U 
                                                & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__1__x 
                                                   << 0xdU)) 
                                               | ((0x200000U 
                                                   & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__1__x 
                                                      << 0xbU)) 
                                                  | ((0x100000U 
                                                      & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__1__x 
                                                         << 9U)) 
                                                     | ((0x80000U 
                                                         & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__1__x 
                                                            << 7U)) 
                                                        | ((0x40000U 
                                                            & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__1__x 
                                                               << 5U)) 
                                                           | ((0x20000U 
                                                               & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__1__x 
                                                                  << 3U)) 
                                                              | ((0x10000U 
                                                                  & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__1__x 
                                                                     << 1U)) 
                                                                 | ((0x8000U 
                                                                     & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__1__x 
                                                                        >> 1U)) 
                                                                    | ((0x4000U 
                                                                        & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__1__x 
                                                                           >> 3U)) 
                                                                       | ((0x2000U 
                                                                           & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__1__x 
                                                                              >> 5U)) 
                                                                          | ((0x1000U 
                                                                              & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__1__x 
                                                                                >> 7U)) 
                                                                             | ((0x800U 
                                                                                & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__1__x 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__1__x 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__1__x 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__1__x 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__1__x 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__1__x 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__1__x 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__1__x 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__1__x 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__1__x 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__1__x 
                                                                                >> 0x1dU)) 
                                                                                | (__Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__1__x 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))));
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__leftshift 
        = __Vfunc_femtoRV32_bench__DOT__uut__DOT__processor__DOT__flip32__1__Vfuncout;
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__LT 
        = (1U & (((vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1 
                   ^ vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__aluIn2) 
                  >> 0x1fU) ? (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1 
                               >> 0x1fU) : (IData)(
                                                   (femtoRV32_bench__DOT__uut__DOT__processor__DOT__aluMinus 
                                                    >> 0x20U))));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__io_wstrb 
        = ((0U != (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_wmask)) 
           & (vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_address 
              >> 0x16U));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__needToWait 
        = ((((0U == (0xfU & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                             >> 1U))) | (IData)(((8U 
                                                  == 
                                                  (0x1eU 
                                                   & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)) 
                                                 & (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_address 
                                                        >> 0x16U)))))) 
            | (IData)((0x80000cU == (0x80001fU & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)))) 
           | (2U == (3U & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                           >> 3U))));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_rdata 
        = ((0x400000U & vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_address)
            ? vlSelf->femtoRV32_bench__DOT__uut__DOT__io_rdata
            : vlSelf->femtoRV32_bench__DOT__uut__DOT__ram_rdata);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__clz2__DOT__genblk1__DOT__inner__DOT__genblk1__DOT__inner__DOT__genblk1__DOT__inner__DOT____Vcellinp__genblk1__DOT__inner__in 
        = (0xfU & ((0U != (0xfU & ((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__clz2__DOT__genblk1__DOT__inner__DOT__genblk1__DOT__inner__DOT____Vcellinp__genblk1__DOT__inner__in) 
                                   >> 4U))) ? ((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__clz2__DOT__genblk1__DOT__inner__DOT__genblk1__DOT__inner__DOT____Vcellinp__genblk1__DOT__inner__in) 
                                               >> 4U)
                    : (IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__clz2__DOT__genblk1__DOT__inner__DOT__genblk1__DOT__inner__DOT____Vcellinp__genblk1__DOT__inner__in)));
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__aluOut_base 
        = (((((((((1U & ((IData)(1U) << (7U & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                                               >> 0xaU))))
                   ? ((IData)((0x10000008U == (0x10000008U 
                                               & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)))
                       ? (IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT__aluMinus)
                       : femtoRV32_bench__DOT__uut__DOT__processor__DOT__aluPlus)
                   : 0U) | ((2U & ((IData)(1U) << (7U 
                                                   & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                                                      >> 0xaU))))
                             ? femtoRV32_bench__DOT__uut__DOT__processor__DOT__leftshift
                             : 0U)) | ((4U & ((IData)(1U) 
                                              << (7U 
                                                  & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                                                     >> 0xaU))))
                                        ? (IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT__LT)
                                        : 0U)) | ((8U 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (7U 
                                                       & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                                                          >> 0xaU))))
                                                   ? 
                                                  (1U 
                                                   & (IData)(
                                                             (femtoRV32_bench__DOT__uut__DOT__processor__DOT__aluMinus 
                                                              >> 0x20U)))
                                                   : 0U)) 
              | ((0x10U & ((IData)(1U) << (7U & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                                                 >> 0xaU))))
                  ? (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1 
                     ^ vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__aluIn2)
                  : 0U)) | ((0x20U & ((IData)(1U) << 
                                      (7U & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                                             >> 0xaU))))
                             ? femtoRV32_bench__DOT__uut__DOT__processor__DOT__shifter
                             : 0U)) | ((0x40U & ((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                                                     >> 0xaU))))
                                        ? (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1 
                                           | vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__aluIn2)
                                        : 0U)) | ((0x80U 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (7U 
                                                       & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                                                          >> 0xaU))))
                                                   ? 
                                                  (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1 
                                                   & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__aluIn2)
                                                   : 0U));
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__jumpToPCplusImm 
        = ((0x1bU == (0x1fU & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)) 
           | ((0x18U == (0x1fU & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)) 
              & ((((((0xffU & (((IData)(1U) << (7U 
                                                & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                                                   >> 0xaU))) 
                               & (0U == (IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT__aluMinus)))) 
                     | (0x7fU & ((((IData)(1U) << (7U 
                                                   & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                                                      >> 0xaU))) 
                                  >> 1U) & (0U != (IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT__aluMinus))))) 
                    | (0xfU & ((((IData)(1U) << (7U 
                                                 & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                                                    >> 0xaU))) 
                                >> 4U) & (IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT__LT)))) 
                   | (7U & ((((IData)(1U) << (7U & 
                                              (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                                               >> 0xaU))) 
                             >> 5U) & (~ (IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT__LT))))) 
                  | (3U & ((((IData)(1U) << (7U & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                                                   >> 0xaU))) 
                            >> 6U) & (IData)((femtoRV32_bench__DOT__uut__DOT__processor__DOT__aluMinus 
                                              >> 0x20U))))) 
                 | (1U & ((((IData)(1U) << (7U & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                                                  >> 0xaU))) 
                           >> 7U) & (~ (IData)((femtoRV32_bench__DOT__uut__DOT__processor__DOT__aluMinus 
                                                >> 0x20U))))))));
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__LOAD_halfword 
        = (0xffffU & ((2U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__loadstore_addr)
                       ? (vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_rdata 
                          >> 0x10U) : vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_rdata));
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__cached_mem 
        = ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__current_cache_hit)
            ? vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__cached_data
            : vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_rdata);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__frac_sum_clz 
        = ((0x20U & ((~ (IData)((0U != (IData)((vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__frac_sum 
                                                >> 0x20U))))) 
                     << 5U)) | ((0x10U & ((~ (IData)(
                                                     (0U 
                                                      != 
                                                      (femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__clz2__DOT____Vcellinp__genblk1__DOT__inner__in 
                                                       >> 0x10U)))) 
                                          << 4U)) | 
                                ((8U & ((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xffU 
                                                     & ((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__clz2__DOT__genblk1__DOT__inner__DOT____Vcellinp__genblk1__DOT__inner__in) 
                                                        >> 8U))))) 
                                        << 3U)) | (
                                                   (4U 
                                                    & ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0xfU 
                                                                    & ((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__clz2__DOT__genblk1__DOT__inner__DOT__genblk1__DOT__inner__DOT____Vcellinp__genblk1__DOT__inner__in) 
                                                                       >> 4U))))) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & ((~ (IData)(
                                                                     (0U 
                                                                      != 
                                                                      (3U 
                                                                       & ((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__clz2__DOT__genblk1__DOT__inner__DOT__genblk1__DOT__inner__DOT__genblk1__DOT__inner__DOT____Vcellinp__genblk1__DOT__inner__in) 
                                                                          >> 2U))))) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (~ 
                                                            (1U 
                                                             & (((0U 
                                                                  != 
                                                                  (3U 
                                                                   & ((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__clz2__DOT__genblk1__DOT__inner__DOT__genblk1__DOT__inner__DOT__genblk1__DOT__inner__DOT____Vcellinp__genblk1__DOT__inner__in) 
                                                                      >> 2U)))
                                                                  ? 
                                                                 ((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__clz2__DOT__genblk1__DOT__inner__DOT__genblk1__DOT__inner__DOT__genblk1__DOT__inner__DOT____Vcellinp__genblk1__DOT__inner__in) 
                                                                  >> 2U)
                                                                  : (IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__clz2__DOT__genblk1__DOT__inner__DOT__genblk1__DOT__inner__DOT__genblk1__DOT__inner__DOT____Vcellinp__genblk1__DOT__inner__in)) 
                                                                >> 1U)))))))));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__PC_new 
        = ((0x19U == (0x1fU & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr))
            ? (0xfffffeU & femtoRV32_bench__DOT__uut__DOT__processor__DOT__aluPlus)
            : ((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT__jumpToPCplusImm)
                ? femtoRV32_bench__DOT__uut__DOT__processor__DOT__PCplusImm
                : ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__interrupt_return)
                    ? vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__mepc
                    : femtoRV32_bench__DOT__uut__DOT__processor__DOT__PCinc)));
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__LOAD_byte 
        = (0xffU & ((1U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__loadstore_addr)
                     ? ((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT__LOAD_halfword) 
                        >> 8U) : (IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT__LOAD_halfword)));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__current_unaligned_long 
        = (IData)(((0x30000U == (0x30000U & femtoRV32_bench__DOT__uut__DOT__processor__DOT__cached_mem)) 
                   & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__PC 
                      >> 1U)));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
        = ((2U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__PC)
            ? ((vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_rdata 
                << 0x10U) | (femtoRV32_bench__DOT__uut__DOT__processor__DOT__cached_mem 
                             >> 0x10U)) : femtoRV32_bench__DOT__uut__DOT__processor__DOT__cached_mem);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__next_cache_hit 
        = (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__cached_addr 
           == (0x3fffffU & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__PC_new 
                            >> 2U)));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__next_unaligned_long 
        = (IData)(((0x30000U == (0x30000U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__cached_data)) 
                   & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__PC_new 
                      >> 1U)));
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__LOAD_sign 
        = (1U & ((~ (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                     >> 0xcU)) & ((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT__mem_byteAccess)
                                   ? ((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT__LOAD_byte) 
                                      >> 7U) : ((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT__LOAD_halfword) 
                                                >> 0xfU))));
    femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__addi4spnImm 
        = ((0x3c0U & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                      >> 1U)) | ((0x30U & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                           >> 7U)) 
                                 | ((8U & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                           >> 2U)) 
                                    | (4U & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                             >> 4U)))));
    femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__lwswImm 
        = ((0x40U & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                     << 1U)) | ((0x38U & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                          >> 7U)) | 
                                (4U & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                       >> 4U))));
    femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__lwspImm 
        = ((0xc0U & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                     << 4U)) | ((0x20U & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                          >> 7U)) | 
                                (0x1cU & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                          >> 2U))));
    femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__swspImm 
        = ((0xc0U & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                     >> 1U)) | (0x3cU & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                         >> 7U)));
    femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__addImm 
        = ((0xfe0U & ((- (IData)((1U & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                        >> 0xcU)))) 
                      << 5U)) | (0x1fU & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                          >> 2U)));
    femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__bImm 
        = ((0x1f00U & ((- (IData)((1U & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                         >> 0xcU)))) 
                       << 8U)) | ((0xc0U & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                            << 1U)) 
                                  | ((0x20U & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                               << 3U)) 
                                     | ((0x18U & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                  >> 7U)) 
                                        | (6U & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                 >> 2U))))));
    femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__jalImm 
        = ((0x1ff800U & ((- (IData)((1U & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                           >> 0xcU)))) 
                         << 0xbU)) | ((0x400U & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                 << 2U)) 
                                      | ((0x300U & 
                                          (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                           >> 1U)) 
                                         | ((0x80U 
                                             & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                << 1U)) 
                                            | ((0x40U 
                                                & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                   >> 1U)) 
                                               | ((0x20U 
                                                   & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                      << 3U)) 
                                                  | ((0x10U 
                                                      & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                         >> 7U)) 
                                                     | (0xeU 
                                                        & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                           >> 2U)))))))));
    femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__luiImm 
        = (((- (IData)((1U & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                              >> 0xcU)))) << 0x11U) 
           | (0x1f000U & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                          << 0xaU)));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__writeBackData 
        = ((((((((0x1cU == (0x1fU & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr))
                  ? femtoRV32_bench__DOT__uut__DOT__processor__DOT__CSR_read
                  : 0U) | ((0xdU == (0x1fU & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr))
                            ? (0xfffff000U & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                                              << 2U))
                            : 0U)) | ((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT__isALU)
                                       ? ((IData)((0x80100cU 
                                                   == 
                                                   (0x80101fU 
                                                    & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)))
                                           ? vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__aluOut_div
                                           : ((IData)(
                                                      (0x80000cU 
                                                       == 
                                                       (0x80101fU 
                                                        & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)))
                                               ? vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__aluOut_mul
                                               : femtoRV32_bench__DOT__uut__DOT__processor__DOT__aluOut_base))
                                       : 0U)) | ((2U 
                                                  == 
                                                  (3U 
                                                   & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                                                      >> 3U)))
                                                  ? 
                                                 (((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign) 
                                                   << 0x1fU) 
                                                  | ((0x7f800000U 
                                                      & ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & (IData)(
                                                                  (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac 
                                                                   >> 0x18U)))))
                                                  : 0U)) 
             | ((5U == (0x1fU & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr))
                 ? femtoRV32_bench__DOT__uut__DOT__processor__DOT__PCplusImm
                 : 0U)) | (((0x19U == (0x1fU & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)) 
                            | (0x1bU == (0x1fU & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)))
                            ? femtoRV32_bench__DOT__uut__DOT__processor__DOT__PCinc
                            : 0U)) | ((0U == (0xfU 
                                              & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                                                 >> 1U)))
                                       ? ((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT__mem_byteAccess)
                                           ? (((- (IData)((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT__LOAD_sign))) 
                                               << 8U) 
                                              | (IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT__LOAD_byte))
                                           : ((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT__mem_halfwordAccess)
                                               ? ((
                                                   (- (IData)((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT__LOAD_sign))) 
                                                   << 0x10U) 
                                                  | (IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT__LOAD_halfword))
                                               : vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_rdata))
                                       : 0U));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__decompressed 
        = ((0x8000U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
            ? ((0x4000U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                ? ((0x2000U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                    ? ((2U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                        ? ((1U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                            ? 0U : (0x12027U | ((0xfe000000U 
                                                 & ((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__swspImm) 
                                                    << 0x14U)) 
                                                | ((0x1f00000U 
                                                    & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                       << 0x12U)) 
                                                   | (0xf80U 
                                                      & ((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__swspImm) 
                                                         << 7U))))))
                        : ((1U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                            ? (0x41063U | ((0x80000000U 
                                            & ((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__bImm) 
                                               << 0x13U)) 
                                           | ((0x7e000000U 
                                               & ((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__bImm) 
                                                  << 0x14U)) 
                                              | ((0x38000U 
                                                  & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                     << 8U)) 
                                                 | ((0xf00U 
                                                     & ((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__bImm) 
                                                        << 7U)) 
                                                    | (0x80U 
                                                       & ((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__bImm) 
                                                          >> 4U)))))))
                            : (0x842027U | ((0xfe000000U 
                                             & ((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__lwswImm) 
                                                << 0x14U)) 
                                            | ((0x700000U 
                                                & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                   << 0x12U)) 
                                               | ((0x38000U 
                                                   & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                      << 8U)) 
                                                  | (0xf80U 
                                                     & ((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__lwswImm) 
                                                        << 7U))))))))
                    : ((2U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                        ? ((1U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                            ? 0U : (0x12023U | ((0xfe000000U 
                                                 & ((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__swspImm) 
                                                    << 0x14U)) 
                                                | ((0x1f00000U 
                                                    & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                       << 0x12U)) 
                                                   | (0xf80U 
                                                      & ((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__swspImm) 
                                                         << 7U))))))
                        : ((1U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                            ? (0x40063U | ((0x80000000U 
                                            & ((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__bImm) 
                                               << 0x13U)) 
                                           | ((0x7e000000U 
                                               & ((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__bImm) 
                                                  << 0x14U)) 
                                              | ((0x38000U 
                                                  & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                     << 8U)) 
                                                 | ((0xf00U 
                                                     & ((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__bImm) 
                                                        << 7U)) 
                                                    | (0x80U 
                                                       & ((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__bImm) 
                                                          >> 4U)))))))
                            : (0x842023U | ((0xfe000000U 
                                             & ((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__lwswImm) 
                                                << 0x14U)) 
                                            | ((0x700000U 
                                                & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                   << 0x12U)) 
                                               | ((0x38000U 
                                                   & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                      << 8U)) 
                                                  | (0xf80U 
                                                     & ((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__lwswImm) 
                                                        << 7U)))))))))
                : ((0x2000U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                    ? ((2U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                        ? 0U : ((1U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                 ? (0x6fU | ((0x80000000U 
                                              & (femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__jalImm 
                                                 << 0xbU)) 
                                             | ((0x7fe00000U 
                                                 & (femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__jalImm 
                                                    << 0x14U)) 
                                                | ((0x100000U 
                                                    & (femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__jalImm 
                                                       << 9U)) 
                                                   | (0xff000U 
                                                      & femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__jalImm)))))
                                 : 0U)) : ((0x1000U 
                                            & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                            ? ((0x800U 
                                                & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                ? (
                                                   (0x400U 
                                                    & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                    ? 
                                                   ((0x40U 
                                                     & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                     ? 
                                                    ((2U 
                                                      & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                       ? 0U
                                                       : 
                                                      (0x33U 
                                                       | ((0x1f00000U 
                                                           & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                              << 0x12U)) 
                                                          | ((0xf8000U 
                                                              & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                 << 8U)) 
                                                             | (0xf80U 
                                                                & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)))))
                                                      : 0U)
                                                     : 
                                                    ((0x20U 
                                                      & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                      ? 
                                                     ((2U 
                                                       & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                        ? 0U
                                                        : 
                                                       (0x33U 
                                                        | ((0x1f00000U 
                                                            & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                               << 0x12U)) 
                                                           | ((0xf8000U 
                                                               & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                  << 8U)) 
                                                              | (0xf80U 
                                                                 & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)))))
                                                       : 0U)
                                                      : 
                                                     ((0x10U 
                                                       & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                       ? 
                                                      ((2U 
                                                        & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                         ? 0U
                                                         : 
                                                        (0x33U 
                                                         | ((0x1f00000U 
                                                             & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                << 0x12U)) 
                                                            | ((0xf8000U 
                                                                & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                   << 8U)) 
                                                               | (0xf80U 
                                                                  & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)))))
                                                        : 0U)
                                                       : 
                                                      ((8U 
                                                        & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                        ? 
                                                       ((2U 
                                                         & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                         ? 
                                                        ((1U 
                                                          & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                          ? 0U
                                                          : 
                                                         (0x33U 
                                                          | ((0x1f00000U 
                                                              & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                 << 0x12U)) 
                                                             | ((0xf8000U 
                                                                 & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                    << 8U)) 
                                                                | (0xf80U 
                                                                   & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)))))
                                                         : 0U)
                                                        : 
                                                       ((4U 
                                                         & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                         ? 
                                                        ((2U 
                                                          & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                          ? 
                                                         ((1U 
                                                           & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                           ? 0U
                                                           : 
                                                          (0x33U 
                                                           | ((0x1f00000U 
                                                               & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                  << 0x12U)) 
                                                              | ((0xf8000U 
                                                                  & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                     << 8U)) 
                                                                 | (0xf80U 
                                                                    & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)))))
                                                          : 0U)
                                                         : 
                                                        ((2U 
                                                          & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                          ? 
                                                         ((1U 
                                                           & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                           ? 0U
                                                           : 
                                                          (0xe7U 
                                                           | (0xf8000U 
                                                              & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                 << 8U))))
                                                          : 0U))))))
                                                    : 
                                                   ((0x40U 
                                                     & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                     ? 
                                                    ((2U 
                                                      & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                       ? 0U
                                                       : 
                                                      (0x33U 
                                                       | ((0x1f00000U 
                                                           & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                              << 0x12U)) 
                                                          | ((0xf8000U 
                                                              & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                 << 8U)) 
                                                             | (0xf80U 
                                                                & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)))))
                                                      : 
                                                     ((1U 
                                                       & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                       ? 
                                                      (0x47413U 
                                                       | (((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__addImm) 
                                                           << 0x14U) 
                                                          | ((0x38000U 
                                                              & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                 << 8U)) 
                                                             | (0x380U 
                                                                & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                       : 0U))
                                                     : 
                                                    ((0x20U 
                                                      & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                      ? 
                                                     ((2U 
                                                       & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                        ? 0U
                                                        : 
                                                       (0x33U 
                                                        | ((0x1f00000U 
                                                            & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                               << 0x12U)) 
                                                           | ((0xf8000U 
                                                               & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                  << 8U)) 
                                                              | (0xf80U 
                                                                 & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)))))
                                                       : 
                                                      ((1U 
                                                        & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                        ? 
                                                       (0x47413U 
                                                        | (((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__addImm) 
                                                            << 0x14U) 
                                                           | ((0x38000U 
                                                               & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                  << 8U)) 
                                                              | (0x380U 
                                                                 & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                        : 0U))
                                                      : 
                                                     ((0x10U 
                                                       & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                       ? 
                                                      ((2U 
                                                        & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                         ? 0U
                                                         : 
                                                        (0x33U 
                                                         | ((0x1f00000U 
                                                             & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                << 0x12U)) 
                                                            | ((0xf8000U 
                                                                & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                   << 8U)) 
                                                               | (0xf80U 
                                                                  & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)))))
                                                        : 
                                                       ((1U 
                                                         & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                         ? 
                                                        (0x47413U 
                                                         | (((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__addImm) 
                                                             << 0x14U) 
                                                            | ((0x38000U 
                                                                & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                   << 8U)) 
                                                               | (0x380U 
                                                                  & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                         : 0U))
                                                       : 
                                                      ((8U 
                                                        & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                        ? 
                                                       ((2U 
                                                         & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                         ? 
                                                        ((1U 
                                                          & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                          ? 0U
                                                          : 
                                                         (0x33U 
                                                          | ((0x1f00000U 
                                                              & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                 << 0x12U)) 
                                                             | ((0xf8000U 
                                                                 & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                    << 8U)) 
                                                                | (0xf80U 
                                                                   & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)))))
                                                         : 
                                                        ((1U 
                                                          & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                          ? 
                                                         (0x47413U 
                                                          | (((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__addImm) 
                                                              << 0x14U) 
                                                             | ((0x38000U 
                                                                 & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                    << 8U)) 
                                                                | (0x380U 
                                                                   & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                          : 0U))
                                                        : 
                                                       ((4U 
                                                         & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                         ? 
                                                        ((2U 
                                                          & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                          ? 
                                                         ((1U 
                                                           & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                           ? 0U
                                                           : 
                                                          (0x33U 
                                                           | ((0x1f00000U 
                                                               & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                  << 0x12U)) 
                                                              | ((0xf8000U 
                                                                  & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                     << 8U)) 
                                                                 | (0xf80U 
                                                                    & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)))))
                                                          : 
                                                         ((1U 
                                                           & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                           ? 
                                                          (0x47413U 
                                                           | (((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__addImm) 
                                                               << 0x14U) 
                                                              | ((0x38000U 
                                                                  & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                     << 8U)) 
                                                                 | (0x380U 
                                                                    & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                           : 0U))
                                                         : 
                                                        ((2U 
                                                          & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                          ? 
                                                         ((1U 
                                                           & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                           ? 0U
                                                           : 
                                                          (0xe7U 
                                                           | (0xf8000U 
                                                              & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                 << 8U))))
                                                          : 
                                                         ((1U 
                                                           & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                           ? 
                                                          (0x47413U 
                                                           | (((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__addImm) 
                                                               << 0x14U) 
                                                              | ((0x38000U 
                                                                  & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                     << 8U)) 
                                                                 | (0x380U 
                                                                    & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                           : 0U))))))))
                                                : (
                                                   (0x400U 
                                                    & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                    ? 
                                                   ((0x40U 
                                                     & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                     ? 
                                                    ((2U 
                                                      & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                       ? 0U
                                                       : 
                                                      (0x33U 
                                                       | ((0x1f00000U 
                                                           & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                              << 0x12U)) 
                                                          | ((0xf8000U 
                                                              & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                 << 8U)) 
                                                             | (0xf80U 
                                                                & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)))))
                                                      : 
                                                     ((1U 
                                                       & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                       ? 
                                                      (0x40045413U 
                                                       | ((0x1f00000U 
                                                           & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                              << 0x12U)) 
                                                          | ((0x38000U 
                                                              & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                 << 8U)) 
                                                             | (0x380U 
                                                                & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                       : 0U))
                                                     : 
                                                    ((0x20U 
                                                      & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                      ? 
                                                     ((2U 
                                                       & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                        ? 0U
                                                        : 
                                                       (0x33U 
                                                        | ((0x1f00000U 
                                                            & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                               << 0x12U)) 
                                                           | ((0xf8000U 
                                                               & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                  << 8U)) 
                                                              | (0xf80U 
                                                                 & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)))))
                                                       : 
                                                      ((1U 
                                                        & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                        ? 
                                                       (0x40045413U 
                                                        | ((0x1f00000U 
                                                            & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                               << 0x12U)) 
                                                           | ((0x38000U 
                                                               & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                  << 8U)) 
                                                              | (0x380U 
                                                                 & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                        : 0U))
                                                      : 
                                                     ((0x10U 
                                                       & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                       ? 
                                                      ((2U 
                                                        & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                         ? 0U
                                                         : 
                                                        (0x33U 
                                                         | ((0x1f00000U 
                                                             & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                << 0x12U)) 
                                                            | ((0xf8000U 
                                                                & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                   << 8U)) 
                                                               | (0xf80U 
                                                                  & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)))))
                                                        : 
                                                       ((1U 
                                                         & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                         ? 
                                                        (0x40045413U 
                                                         | ((0x1f00000U 
                                                             & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                << 0x12U)) 
                                                            | ((0x38000U 
                                                                & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                   << 8U)) 
                                                               | (0x380U 
                                                                  & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                         : 0U))
                                                       : 
                                                      ((8U 
                                                        & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                        ? 
                                                       ((2U 
                                                         & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                         ? 
                                                        ((1U 
                                                          & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                          ? 0U
                                                          : 
                                                         (0x33U 
                                                          | ((0x1f00000U 
                                                              & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                 << 0x12U)) 
                                                             | ((0xf8000U 
                                                                 & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                    << 8U)) 
                                                                | (0xf80U 
                                                                   & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)))))
                                                         : 
                                                        ((1U 
                                                          & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                          ? 
                                                         (0x40045413U 
                                                          | ((0x1f00000U 
                                                              & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                 << 0x12U)) 
                                                             | ((0x38000U 
                                                                 & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                    << 8U)) 
                                                                | (0x380U 
                                                                   & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                          : 0U))
                                                        : 
                                                       ((4U 
                                                         & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                         ? 
                                                        ((2U 
                                                          & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                          ? 
                                                         ((1U 
                                                           & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                           ? 0U
                                                           : 
                                                          (0x33U 
                                                           | ((0x1f00000U 
                                                               & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                  << 0x12U)) 
                                                              | ((0xf8000U 
                                                                  & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                     << 8U)) 
                                                                 | (0xf80U 
                                                                    & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)))))
                                                          : 
                                                         ((1U 
                                                           & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                           ? 
                                                          (0x40045413U 
                                                           | ((0x1f00000U 
                                                               & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                  << 0x12U)) 
                                                              | ((0x38000U 
                                                                  & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                     << 8U)) 
                                                                 | (0x380U 
                                                                    & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                           : 0U))
                                                         : 
                                                        ((2U 
                                                          & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                          ? 
                                                         ((1U 
                                                           & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                           ? 0U
                                                           : 
                                                          (0xe7U 
                                                           | (0xf8000U 
                                                              & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                 << 8U))))
                                                          : 
                                                         ((1U 
                                                           & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                           ? 
                                                          (0x40045413U 
                                                           | ((0x1f00000U 
                                                               & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                  << 0x12U)) 
                                                              | ((0x38000U 
                                                                  & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                     << 8U)) 
                                                                 | (0x380U 
                                                                    & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                           : 0U)))))))
                                                    : 
                                                   ((0x40U 
                                                     & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                     ? 
                                                    ((2U 
                                                      & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                       ? 0U
                                                       : 
                                                      (0x33U 
                                                       | ((0x1f00000U 
                                                           & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                              << 0x12U)) 
                                                          | ((0xf8000U 
                                                              & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                 << 8U)) 
                                                             | (0xf80U 
                                                                & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)))))
                                                      : 
                                                     ((1U 
                                                       & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                       ? 
                                                      (0x45413U 
                                                       | ((0x1f00000U 
                                                           & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                              << 0x12U)) 
                                                          | ((0x38000U 
                                                              & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                 << 8U)) 
                                                             | (0x380U 
                                                                & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                       : 0U))
                                                     : 
                                                    ((0x20U 
                                                      & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                      ? 
                                                     ((2U 
                                                       & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                        ? 0U
                                                        : 
                                                       (0x33U 
                                                        | ((0x1f00000U 
                                                            & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                               << 0x12U)) 
                                                           | ((0xf8000U 
                                                               & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                  << 8U)) 
                                                              | (0xf80U 
                                                                 & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)))))
                                                       : 
                                                      ((1U 
                                                        & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                        ? 
                                                       (0x45413U 
                                                        | ((0x1f00000U 
                                                            & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                               << 0x12U)) 
                                                           | ((0x38000U 
                                                               & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                  << 8U)) 
                                                              | (0x380U 
                                                                 & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                        : 0U))
                                                      : 
                                                     ((0x10U 
                                                       & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                       ? 
                                                      ((2U 
                                                        & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                         ? 0U
                                                         : 
                                                        (0x33U 
                                                         | ((0x1f00000U 
                                                             & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                << 0x12U)) 
                                                            | ((0xf8000U 
                                                                & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                   << 8U)) 
                                                               | (0xf80U 
                                                                  & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)))))
                                                        : 
                                                       ((1U 
                                                         & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                         ? 
                                                        (0x45413U 
                                                         | ((0x1f00000U 
                                                             & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                << 0x12U)) 
                                                            | ((0x38000U 
                                                                & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                   << 8U)) 
                                                               | (0x380U 
                                                                  & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                         : 0U))
                                                       : 
                                                      ((8U 
                                                        & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                        ? 
                                                       ((2U 
                                                         & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                         ? 
                                                        ((1U 
                                                          & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                          ? 0U
                                                          : 
                                                         (0x33U 
                                                          | ((0x1f00000U 
                                                              & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                 << 0x12U)) 
                                                             | ((0xf8000U 
                                                                 & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                    << 8U)) 
                                                                | (0xf80U 
                                                                   & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)))))
                                                         : 
                                                        ((1U 
                                                          & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                          ? 
                                                         (0x45413U 
                                                          | ((0x1f00000U 
                                                              & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                 << 0x12U)) 
                                                             | ((0x38000U 
                                                                 & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                    << 8U)) 
                                                                | (0x380U 
                                                                   & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                          : 0U))
                                                        : 
                                                       ((4U 
                                                         & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                         ? 
                                                        ((2U 
                                                          & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                          ? 
                                                         ((1U 
                                                           & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                           ? 0U
                                                           : 
                                                          (0x33U 
                                                           | ((0x1f00000U 
                                                               & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                  << 0x12U)) 
                                                              | ((0xf8000U 
                                                                  & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                     << 8U)) 
                                                                 | (0xf80U 
                                                                    & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)))))
                                                          : 
                                                         ((1U 
                                                           & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                           ? 
                                                          (0x45413U 
                                                           | ((0x1f00000U 
                                                               & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                  << 0x12U)) 
                                                              | ((0x38000U 
                                                                  & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                     << 8U)) 
                                                                 | (0x380U 
                                                                    & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                           : 0U))
                                                         : 
                                                        ((2U 
                                                          & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                          ? 
                                                         ((1U 
                                                           & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                           ? 0U
                                                           : 
                                                          (0xe7U 
                                                           | (0xf8000U 
                                                              & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                 << 8U))))
                                                          : 
                                                         ((1U 
                                                           & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                           ? 
                                                          (0x45413U 
                                                           | ((0x1f00000U 
                                                               & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                  << 0x12U)) 
                                                              | ((0x38000U 
                                                                  & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                     << 8U)) 
                                                                 | (0x380U 
                                                                    & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                           : 0U)))))))))
                                            : ((0x800U 
                                                & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                ? (
                                                   (0x400U 
                                                    & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                    ? 
                                                   ((0x40U 
                                                     & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                     ? 
                                                    ((0x20U 
                                                      & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                      ? 
                                                     ((2U 
                                                       & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                        ? 0U
                                                        : 
                                                       (0x33U 
                                                        | ((0x1f00000U 
                                                            & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                               << 0x12U)) 
                                                           | (0xf80U 
                                                              & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                       : 
                                                      ((1U 
                                                        & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                        ? 
                                                       (0x847433U 
                                                        | ((0x700000U 
                                                            & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                               << 0x12U)) 
                                                           | ((0x38000U 
                                                               & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                  << 8U)) 
                                                              | (0x380U 
                                                                 & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                        : 0U))
                                                      : 
                                                     ((2U 
                                                       & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                        ? 0U
                                                        : 
                                                       (0x33U 
                                                        | ((0x1f00000U 
                                                            & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                               << 0x12U)) 
                                                           | (0xf80U 
                                                              & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                       : 
                                                      ((1U 
                                                        & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                        ? 
                                                       (0x846433U 
                                                        | ((0x700000U 
                                                            & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                               << 0x12U)) 
                                                           | ((0x38000U 
                                                               & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                  << 8U)) 
                                                              | (0x380U 
                                                                 & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                        : 0U)))
                                                     : 
                                                    ((0x20U 
                                                      & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                      ? 
                                                     ((2U 
                                                       & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                        ? 0U
                                                        : 
                                                       (0x33U 
                                                        | ((0x1f00000U 
                                                            & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                               << 0x12U)) 
                                                           | (0xf80U 
                                                              & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                       : 
                                                      ((1U 
                                                        & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                        ? 
                                                       (0x844433U 
                                                        | ((0x700000U 
                                                            & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                               << 0x12U)) 
                                                           | ((0x38000U 
                                                               & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                  << 8U)) 
                                                              | (0x380U 
                                                                 & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                        : 0U))
                                                      : 
                                                     ((0x10U 
                                                       & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                       ? 
                                                      ((2U 
                                                        & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                         ? 0U
                                                         : 
                                                        (0x33U 
                                                         | ((0x1f00000U 
                                                             & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                << 0x12U)) 
                                                            | (0xf80U 
                                                               & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                        : 
                                                       ((1U 
                                                         & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                         ? 
                                                        (0x40840433U 
                                                         | ((0x700000U 
                                                             & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                << 0x12U)) 
                                                            | ((0x38000U 
                                                                & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                   << 8U)) 
                                                               | (0x380U 
                                                                  & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                         : 0U))
                                                       : 
                                                      ((8U 
                                                        & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                        ? 
                                                       ((2U 
                                                         & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                         ? 
                                                        ((1U 
                                                          & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                          ? 0U
                                                          : 
                                                         (0x33U 
                                                          | ((0x1f00000U 
                                                              & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                 << 0x12U)) 
                                                             | (0xf80U 
                                                                & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                         : 
                                                        ((1U 
                                                          & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                          ? 
                                                         (0x40840433U 
                                                          | ((0x700000U 
                                                              & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                 << 0x12U)) 
                                                             | ((0x38000U 
                                                                 & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                    << 8U)) 
                                                                | (0x380U 
                                                                   & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                          : 0U))
                                                        : 
                                                       ((4U 
                                                         & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                         ? 
                                                        ((2U 
                                                          & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                          ? 
                                                         ((1U 
                                                           & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                           ? 0U
                                                           : 
                                                          (0x33U 
                                                           | ((0x1f00000U 
                                                               & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                  << 0x12U)) 
                                                              | (0xf80U 
                                                                 & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                          : 
                                                         ((1U 
                                                           & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                           ? 
                                                          (0x40840433U 
                                                           | ((0x700000U 
                                                               & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                  << 0x12U)) 
                                                              | ((0x38000U 
                                                                  & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                     << 8U)) 
                                                                 | (0x380U 
                                                                    & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                           : 0U))
                                                         : 
                                                        ((2U 
                                                          & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                          ? 
                                                         ((1U 
                                                           & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                           ? 0U
                                                           : 
                                                          (0x67U 
                                                           | (0xf8000U 
                                                              & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                 << 8U))))
                                                          : 
                                                         ((1U 
                                                           & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                           ? 
                                                          (0x40840433U 
                                                           | ((0x700000U 
                                                               & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                  << 0x12U)) 
                                                              | ((0x38000U 
                                                                  & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                     << 8U)) 
                                                                 | (0x380U 
                                                                    & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                           : 0U)))))))
                                                    : 
                                                   ((0x40U 
                                                     & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                     ? 
                                                    ((2U 
                                                      & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                       ? 0U
                                                       : 
                                                      (0x33U 
                                                       | ((0x1f00000U 
                                                           & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                              << 0x12U)) 
                                                          | (0xf80U 
                                                             & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                      : 
                                                     ((1U 
                                                       & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                       ? 
                                                      (0x47413U 
                                                       | (((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__addImm) 
                                                           << 0x14U) 
                                                          | ((0x38000U 
                                                              & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                 << 8U)) 
                                                             | (0x380U 
                                                                & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                       : 0U))
                                                     : 
                                                    ((0x20U 
                                                      & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                      ? 
                                                     ((2U 
                                                       & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                        ? 0U
                                                        : 
                                                       (0x33U 
                                                        | ((0x1f00000U 
                                                            & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                               << 0x12U)) 
                                                           | (0xf80U 
                                                              & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                       : 
                                                      ((1U 
                                                        & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                        ? 
                                                       (0x47413U 
                                                        | (((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__addImm) 
                                                            << 0x14U) 
                                                           | ((0x38000U 
                                                               & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                  << 8U)) 
                                                              | (0x380U 
                                                                 & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                        : 0U))
                                                      : 
                                                     ((0x10U 
                                                       & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                       ? 
                                                      ((2U 
                                                        & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                         ? 0U
                                                         : 
                                                        (0x33U 
                                                         | ((0x1f00000U 
                                                             & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                << 0x12U)) 
                                                            | (0xf80U 
                                                               & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                        : 
                                                       ((1U 
                                                         & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                         ? 
                                                        (0x47413U 
                                                         | (((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__addImm) 
                                                             << 0x14U) 
                                                            | ((0x38000U 
                                                                & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                   << 8U)) 
                                                               | (0x380U 
                                                                  & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                         : 0U))
                                                       : 
                                                      ((8U 
                                                        & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                        ? 
                                                       ((2U 
                                                         & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                         ? 
                                                        ((1U 
                                                          & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                          ? 0U
                                                          : 
                                                         (0x33U 
                                                          | ((0x1f00000U 
                                                              & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                 << 0x12U)) 
                                                             | (0xf80U 
                                                                & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                         : 
                                                        ((1U 
                                                          & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                          ? 
                                                         (0x47413U 
                                                          | (((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__addImm) 
                                                              << 0x14U) 
                                                             | ((0x38000U 
                                                                 & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                    << 8U)) 
                                                                | (0x380U 
                                                                   & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                          : 0U))
                                                        : 
                                                       ((4U 
                                                         & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                         ? 
                                                        ((2U 
                                                          & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                          ? 
                                                         ((1U 
                                                           & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                           ? 0U
                                                           : 
                                                          (0x33U 
                                                           | ((0x1f00000U 
                                                               & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                  << 0x12U)) 
                                                              | (0xf80U 
                                                                 & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                          : 
                                                         ((1U 
                                                           & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                           ? 
                                                          (0x47413U 
                                                           | (((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__addImm) 
                                                               << 0x14U) 
                                                              | ((0x38000U 
                                                                  & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                     << 8U)) 
                                                                 | (0x380U 
                                                                    & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                           : 0U))
                                                         : 
                                                        ((2U 
                                                          & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                          ? 
                                                         ((1U 
                                                           & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                           ? 0U
                                                           : 
                                                          (0x67U 
                                                           | (0xf8000U 
                                                              & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                 << 8U))))
                                                          : 
                                                         ((1U 
                                                           & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                           ? 
                                                          (0x47413U 
                                                           | (((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__addImm) 
                                                               << 0x14U) 
                                                              | ((0x38000U 
                                                                  & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                     << 8U)) 
                                                                 | (0x380U 
                                                                    & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                           : 0U))))))))
                                                : (
                                                   (0x400U 
                                                    & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                    ? 
                                                   ((0x40U 
                                                     & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                     ? 
                                                    ((2U 
                                                      & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                       ? 0U
                                                       : 
                                                      (0x33U 
                                                       | ((0x1f00000U 
                                                           & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                              << 0x12U)) 
                                                          | (0xf80U 
                                                             & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                      : 
                                                     ((1U 
                                                       & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                       ? 
                                                      (0x40045413U 
                                                       | ((0x1f00000U 
                                                           & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                              << 0x12U)) 
                                                          | ((0x38000U 
                                                              & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                 << 8U)) 
                                                             | (0x380U 
                                                                & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                       : 0U))
                                                     : 
                                                    ((0x20U 
                                                      & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                      ? 
                                                     ((2U 
                                                       & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                        ? 0U
                                                        : 
                                                       (0x33U 
                                                        | ((0x1f00000U 
                                                            & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                               << 0x12U)) 
                                                           | (0xf80U 
                                                              & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                       : 
                                                      ((1U 
                                                        & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                        ? 
                                                       (0x40045413U 
                                                        | ((0x1f00000U 
                                                            & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                               << 0x12U)) 
                                                           | ((0x38000U 
                                                               & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                  << 8U)) 
                                                              | (0x380U 
                                                                 & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                        : 0U))
                                                      : 
                                                     ((0x10U 
                                                       & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                       ? 
                                                      ((2U 
                                                        & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                         ? 0U
                                                         : 
                                                        (0x33U 
                                                         | ((0x1f00000U 
                                                             & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                << 0x12U)) 
                                                            | (0xf80U 
                                                               & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                        : 
                                                       ((1U 
                                                         & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                         ? 
                                                        (0x40045413U 
                                                         | ((0x1f00000U 
                                                             & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                << 0x12U)) 
                                                            | ((0x38000U 
                                                                & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                   << 8U)) 
                                                               | (0x380U 
                                                                  & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                         : 0U))
                                                       : 
                                                      ((8U 
                                                        & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                        ? 
                                                       ((2U 
                                                         & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                         ? 
                                                        ((1U 
                                                          & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                          ? 0U
                                                          : 
                                                         (0x33U 
                                                          | ((0x1f00000U 
                                                              & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                 << 0x12U)) 
                                                             | (0xf80U 
                                                                & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                         : 
                                                        ((1U 
                                                          & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                          ? 
                                                         (0x40045413U 
                                                          | ((0x1f00000U 
                                                              & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                 << 0x12U)) 
                                                             | ((0x38000U 
                                                                 & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                    << 8U)) 
                                                                | (0x380U 
                                                                   & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                          : 0U))
                                                        : 
                                                       ((4U 
                                                         & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                         ? 
                                                        ((2U 
                                                          & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                          ? 
                                                         ((1U 
                                                           & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                           ? 0U
                                                           : 
                                                          (0x33U 
                                                           | ((0x1f00000U 
                                                               & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                  << 0x12U)) 
                                                              | (0xf80U 
                                                                 & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                          : 
                                                         ((1U 
                                                           & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                           ? 
                                                          (0x40045413U 
                                                           | ((0x1f00000U 
                                                               & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                  << 0x12U)) 
                                                              | ((0x38000U 
                                                                  & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                     << 8U)) 
                                                                 | (0x380U 
                                                                    & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                           : 0U))
                                                         : 
                                                        ((2U 
                                                          & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                          ? 
                                                         ((1U 
                                                           & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                           ? 0U
                                                           : 
                                                          (0x67U 
                                                           | (0xf8000U 
                                                              & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                 << 8U))))
                                                          : 
                                                         ((1U 
                                                           & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                           ? 
                                                          (0x40045413U 
                                                           | ((0x1f00000U 
                                                               & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                  << 0x12U)) 
                                                              | ((0x38000U 
                                                                  & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                     << 8U)) 
                                                                 | (0x380U 
                                                                    & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                           : 0U)))))))
                                                    : 
                                                   ((0x40U 
                                                     & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                     ? 
                                                    ((2U 
                                                      & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                       ? 0U
                                                       : 
                                                      (0x33U 
                                                       | ((0x1f00000U 
                                                           & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                              << 0x12U)) 
                                                          | (0xf80U 
                                                             & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                      : 
                                                     ((1U 
                                                       & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                       ? 
                                                      (0x45413U 
                                                       | ((0x1f00000U 
                                                           & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                              << 0x12U)) 
                                                          | ((0x38000U 
                                                              & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                 << 8U)) 
                                                             | (0x380U 
                                                                & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                       : 0U))
                                                     : 
                                                    ((0x20U 
                                                      & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                      ? 
                                                     ((2U 
                                                       & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                        ? 0U
                                                        : 
                                                       (0x33U 
                                                        | ((0x1f00000U 
                                                            & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                               << 0x12U)) 
                                                           | (0xf80U 
                                                              & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                       : 
                                                      ((1U 
                                                        & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                        ? 
                                                       (0x45413U 
                                                        | ((0x1f00000U 
                                                            & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                               << 0x12U)) 
                                                           | ((0x38000U 
                                                               & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                  << 8U)) 
                                                              | (0x380U 
                                                                 & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                        : 0U))
                                                      : 
                                                     ((0x10U 
                                                       & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                       ? 
                                                      ((2U 
                                                        & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                         ? 0U
                                                         : 
                                                        (0x33U 
                                                         | ((0x1f00000U 
                                                             & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                << 0x12U)) 
                                                            | (0xf80U 
                                                               & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                        : 
                                                       ((1U 
                                                         & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                         ? 
                                                        (0x45413U 
                                                         | ((0x1f00000U 
                                                             & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                << 0x12U)) 
                                                            | ((0x38000U 
                                                                & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                   << 8U)) 
                                                               | (0x380U 
                                                                  & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                         : 0U))
                                                       : 
                                                      ((8U 
                                                        & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                        ? 
                                                       ((2U 
                                                         & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                         ? 
                                                        ((1U 
                                                          & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                          ? 0U
                                                          : 
                                                         (0x33U 
                                                          | ((0x1f00000U 
                                                              & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                 << 0x12U)) 
                                                             | (0xf80U 
                                                                & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                         : 
                                                        ((1U 
                                                          & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                          ? 
                                                         (0x45413U 
                                                          | ((0x1f00000U 
                                                              & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                 << 0x12U)) 
                                                             | ((0x38000U 
                                                                 & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                    << 8U)) 
                                                                | (0x380U 
                                                                   & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                          : 0U))
                                                        : 
                                                       ((4U 
                                                         & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                         ? 
                                                        ((2U 
                                                          & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                          ? 
                                                         ((1U 
                                                           & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                           ? 0U
                                                           : 
                                                          (0x33U 
                                                           | ((0x1f00000U 
                                                               & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                  << 0x12U)) 
                                                              | (0xf80U 
                                                                 & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                          : 
                                                         ((1U 
                                                           & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                           ? 
                                                          (0x45413U 
                                                           | ((0x1f00000U 
                                                               & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                  << 0x12U)) 
                                                              | ((0x38000U 
                                                                  & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                     << 8U)) 
                                                                 | (0x380U 
                                                                    & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                           : 0U))
                                                         : 
                                                        ((2U 
                                                          & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                          ? 
                                                         ((1U 
                                                           & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                           ? 0U
                                                           : 
                                                          (0x67U 
                                                           | (0xf8000U 
                                                              & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                 << 8U))))
                                                          : 
                                                         ((1U 
                                                           & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                           ? 
                                                          (0x45413U 
                                                           | ((0x1f00000U 
                                                               & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                  << 0x12U)) 
                                                              | ((0x38000U 
                                                                  & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                     << 8U)) 
                                                                 | (0x380U 
                                                                    & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                           : 0U))))))))))))
            : ((0x4000U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                ? ((0x2000U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                    ? ((0x800U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                        ? ((2U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                            ? ((1U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                ? 0U : (0x12007U | 
                                        (((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__lwspImm) 
                                          << 0x14U) 
                                         | (0xf80U 
                                            & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                            : ((1U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                ? (0x37U | ((0xfffff000U 
                                             & femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__luiImm) 
                                            | (0xf80U 
                                               & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)))
                                : (0x42407U | (((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__lwswImm) 
                                                << 0x14U) 
                                               | ((0x38000U 
                                                   & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                      << 8U)) 
                                                  | (0x380U 
                                                     & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                        << 5U)))))))
                        : ((0x400U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                            ? ((2U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                ? ((1U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                    ? 0U : (0x12007U 
                                            | (((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__lwspImm) 
                                                << 0x14U) 
                                               | (0xf80U 
                                                  & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                : ((1U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                    ? (0x37U | ((0xfffff000U 
                                                 & femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__luiImm) 
                                                | (0xf80U 
                                                   & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)))
                                    : (0x42407U | (
                                                   ((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__lwswImm) 
                                                    << 0x14U) 
                                                   | ((0x38000U 
                                                       & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                          << 8U)) 
                                                      | (0x380U 
                                                         & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                            << 5U)))))))
                            : ((0x200U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                ? ((2U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                    ? ((1U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                        ? 0U : (0x12007U 
                                                | (((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__lwspImm) 
                                                    << 0x14U) 
                                                   | (0xf80U 
                                                      & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                    : ((1U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                        ? (0x37U | 
                                           ((0xfffff000U 
                                             & femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__luiImm) 
                                            | (0xf80U 
                                               & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)))
                                        : (0x42407U 
                                           | (((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__lwswImm) 
                                               << 0x14U) 
                                              | ((0x38000U 
                                                  & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                     << 8U)) 
                                                 | (0x380U 
                                                    & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                       << 5U)))))))
                                : ((0x100U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                    ? ((0x80U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                        ? ((2U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                            ? ((1U 
                                                & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                ? 0U
                                                : (0x12007U 
                                                   | (((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__lwspImm) 
                                                       << 0x14U) 
                                                      | (0xf80U 
                                                         & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                            : ((1U 
                                                & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                ? (0x37U 
                                                   | ((0xfffff000U 
                                                       & femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__luiImm) 
                                                      | (0xf80U 
                                                         & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)))
                                                : (0x42407U 
                                                   | (((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__lwswImm) 
                                                       << 0x14U) 
                                                      | ((0x38000U 
                                                          & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                             << 8U)) 
                                                         | (0x380U 
                                                            & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                               << 5U)))))))
                                        : ((2U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                            ? ((1U 
                                                & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                ? 0U
                                                : (0x12007U 
                                                   | (((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__lwspImm) 
                                                       << 0x14U) 
                                                      | (0xf80U 
                                                         & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                            : ((1U 
                                                & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                ? (0x13U 
                                                   | ((((- (IData)(
                                                                   (1U 
                                                                    & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                       >> 0xcU)))) 
                                                        << 0x1dU) 
                                                       | ((0x18000000U 
                                                           & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                              << 0x18U)) 
                                                          | ((0x4000000U 
                                                              & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                 << 0x15U)) 
                                                             | ((0x2000000U 
                                                                 & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                    << 0x17U)) 
                                                                | (0x1000000U 
                                                                   & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                      << 0x12U)))))) 
                                                      | ((0xf8000U 
                                                          & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                             << 8U)) 
                                                         | (0xf80U 
                                                            & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                : (0x42407U 
                                                   | (((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__lwswImm) 
                                                       << 0x14U) 
                                                      | ((0x38000U 
                                                          & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                             << 8U)) 
                                                         | (0x380U 
                                                            & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                               << 5U))))))))
                                    : ((2U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                        ? ((1U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                            ? 0U : 
                                           (0x12007U 
                                            | (((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__lwspImm) 
                                                << 0x14U) 
                                               | (0xf80U 
                                                  & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                        : ((1U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                            ? (0x37U 
                                               | ((0xfffff000U 
                                                   & femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__luiImm) 
                                                  | (0xf80U 
                                                     & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)))
                                            : (0x42407U 
                                               | (((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__lwswImm) 
                                                   << 0x14U) 
                                                  | ((0x38000U 
                                                      & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                         << 8U)) 
                                                     | (0x380U 
                                                        & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                           << 5U)))))))))))
                    : ((2U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                        ? ((1U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                            ? 0U : (0x12003U | (((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__lwspImm) 
                                                 << 0x14U) 
                                                | (0xf80U 
                                                   & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                        : ((1U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                            ? (0x13U | (((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__addImm) 
                                         << 0x14U) 
                                        | (0xf80U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)))
                            : (0x42403U | (((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__lwswImm) 
                                            << 0x14U) 
                                           | ((0x38000U 
                                               & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                  << 8U)) 
                                              | (0x380U 
                                                 & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                    << 5U))))))))
                : ((0x2000U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                    ? ((2U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                        ? 0U : ((1U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                 ? (0xefU | ((0x80000000U 
                                              & (femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__jalImm 
                                                 << 0xbU)) 
                                             | ((0x7fe00000U 
                                                 & (femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__jalImm 
                                                    << 0x14U)) 
                                                | ((0x100000U 
                                                    & (femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__jalImm 
                                                       << 9U)) 
                                                   | (0xff000U 
                                                      & femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__jalImm)))))
                                 : 0U)) : ((0x1000U 
                                            & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                            ? ((2U 
                                                & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                ? (
                                                   (1U 
                                                    & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                    ? 0U
                                                    : 
                                                   (0x1013U 
                                                    | ((0x1f00000U 
                                                        & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                           << 0x12U)) 
                                                       | ((0xf8000U 
                                                           & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                              << 8U)) 
                                                          | (0xf80U 
                                                             & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)))))
                                                : (
                                                   (1U 
                                                    & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                    ? 
                                                   (0x13U 
                                                    | (((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__addImm) 
                                                        << 0x14U) 
                                                       | ((0xf8000U 
                                                           & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                              << 8U)) 
                                                          | (0xf80U 
                                                             & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                    : 
                                                   (0x10413U 
                                                    | (((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__addi4spnImm) 
                                                        << 0x14U) 
                                                       | (0x380U 
                                                          & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                             << 5U))))))
                                            : ((0x800U 
                                                & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                ? (
                                                   (2U 
                                                    & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                     ? 0U
                                                     : 
                                                    (0x1013U 
                                                     | ((0x1f00000U 
                                                         & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                            << 0x12U)) 
                                                        | ((0xf8000U 
                                                            & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                               << 8U)) 
                                                           | (0xf80U 
                                                              & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)))))
                                                    : 
                                                   ((1U 
                                                     & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                     ? 
                                                    (0x13U 
                                                     | (((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__addImm) 
                                                         << 0x14U) 
                                                        | ((0xf8000U 
                                                            & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                               << 8U)) 
                                                           | (0xf80U 
                                                              & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                     : 
                                                    (0x10413U 
                                                     | (((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__addi4spnImm) 
                                                         << 0x14U) 
                                                        | (0x380U 
                                                           & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                              << 5U))))))
                                                : (
                                                   (0x400U 
                                                    & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                      ? 0U
                                                      : 
                                                     (0x1013U 
                                                      | ((0x1f00000U 
                                                          & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                             << 0x12U)) 
                                                         | ((0xf8000U 
                                                             & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                << 8U)) 
                                                            | (0xf80U 
                                                               & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)))))
                                                     : 
                                                    ((1U 
                                                      & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                      ? 
                                                     (0x13U 
                                                      | (((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__addImm) 
                                                          << 0x14U) 
                                                         | ((0xf8000U 
                                                             & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                << 8U)) 
                                                            | (0xf80U 
                                                               & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                      : 
                                                     (0x10413U 
                                                      | (((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__addi4spnImm) 
                                                          << 0x14U) 
                                                         | (0x380U 
                                                            & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                               << 5U))))))
                                                    : 
                                                   ((0x200U 
                                                     & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                     ? 
                                                    ((2U 
                                                      & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                       ? 0U
                                                       : 
                                                      (0x1013U 
                                                       | ((0x1f00000U 
                                                           & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                              << 0x12U)) 
                                                          | ((0xf8000U 
                                                              & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                 << 8U)) 
                                                             | (0xf80U 
                                                                & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)))))
                                                      : 
                                                     ((1U 
                                                       & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                       ? 
                                                      (0x13U 
                                                       | (((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__addImm) 
                                                           << 0x14U) 
                                                          | ((0xf8000U 
                                                              & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                 << 8U)) 
                                                             | (0xf80U 
                                                                & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                       : 
                                                      (0x10413U 
                                                       | (((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__addi4spnImm) 
                                                           << 0x14U) 
                                                          | (0x380U 
                                                             & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                << 5U))))))
                                                     : 
                                                    ((0x100U 
                                                      & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                      ? 
                                                     ((2U 
                                                       & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                        ? 0U
                                                        : 
                                                       (0x1013U 
                                                        | ((0x1f00000U 
                                                            & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                               << 0x12U)) 
                                                           | ((0xf8000U 
                                                               & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                  << 8U)) 
                                                              | (0xf80U 
                                                                 & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)))))
                                                       : 
                                                      ((1U 
                                                        & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                        ? 
                                                       (0x13U 
                                                        | (((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__addImm) 
                                                            << 0x14U) 
                                                           | ((0xf8000U 
                                                               & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                  << 8U)) 
                                                              | (0xf80U 
                                                                 & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                        : 
                                                       (0x10413U 
                                                        | (((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__addi4spnImm) 
                                                            << 0x14U) 
                                                           | (0x380U 
                                                              & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                 << 5U))))))
                                                      : 
                                                     ((0x80U 
                                                       & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                       ? 
                                                      ((2U 
                                                        & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                         ? 0U
                                                         : 
                                                        (0x1013U 
                                                         | ((0x1f00000U 
                                                             & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                << 0x12U)) 
                                                            | ((0xf8000U 
                                                                & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                   << 8U)) 
                                                               | (0xf80U 
                                                                  & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)))))
                                                        : 
                                                       ((1U 
                                                         & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                         ? 
                                                        (0x13U 
                                                         | (((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__addImm) 
                                                             << 0x14U) 
                                                            | ((0xf8000U 
                                                                & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                   << 8U)) 
                                                               | (0xf80U 
                                                                  & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                         : 
                                                        (0x10413U 
                                                         | (((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__addi4spnImm) 
                                                             << 0x14U) 
                                                            | (0x380U 
                                                               & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                  << 5U))))))
                                                       : 
                                                      ((0x40U 
                                                        & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                        ? 
                                                       ((2U 
                                                         & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                         ? 
                                                        ((1U 
                                                          & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                          ? 0U
                                                          : 
                                                         (0x1013U 
                                                          | ((0x1f00000U 
                                                              & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                 << 0x12U)) 
                                                             | ((0xf8000U 
                                                                 & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                    << 8U)) 
                                                                | (0xf80U 
                                                                   & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)))))
                                                         : 
                                                        ((1U 
                                                          & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                          ? 
                                                         (0x13U 
                                                          | (((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__addImm) 
                                                              << 0x14U) 
                                                             | ((0xf8000U 
                                                                 & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                    << 8U)) 
                                                                | (0xf80U 
                                                                   & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                          : 
                                                         (0x10413U 
                                                          | (((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__addi4spnImm) 
                                                              << 0x14U) 
                                                             | (0x380U 
                                                                & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                   << 5U))))))
                                                        : 
                                                       ((0x20U 
                                                         & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                         ? 
                                                        ((2U 
                                                          & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                          ? 
                                                         ((1U 
                                                           & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                           ? 0U
                                                           : 
                                                          (0x1013U 
                                                           | ((0x1f00000U 
                                                               & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                  << 0x12U)) 
                                                              | ((0xf8000U 
                                                                  & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                     << 8U)) 
                                                                 | (0xf80U 
                                                                    & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)))))
                                                          : 
                                                         ((1U 
                                                           & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                           ? 
                                                          (0x13U 
                                                           | (((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__addImm) 
                                                               << 0x14U) 
                                                              | ((0xf8000U 
                                                                  & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                     << 8U)) 
                                                                 | (0xf80U 
                                                                    & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                           : 
                                                          (0x10413U 
                                                           | (((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__addi4spnImm) 
                                                               << 0x14U) 
                                                              | (0x380U 
                                                                 & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                    << 5U))))))
                                                         : 
                                                        ((0x10U 
                                                          & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                          ? 
                                                         ((2U 
                                                           & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                           ? 
                                                          ((1U 
                                                            & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                            ? 0U
                                                            : 
                                                           (0x1013U 
                                                            | ((0x1f00000U 
                                                                & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                   << 0x12U)) 
                                                               | ((0xf8000U 
                                                                   & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                      << 8U)) 
                                                                  | (0xf80U 
                                                                     & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)))))
                                                           : 
                                                          ((1U 
                                                            & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                            ? 
                                                           (0x13U 
                                                            | (((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__addImm) 
                                                                << 0x14U) 
                                                               | ((0xf8000U 
                                                                   & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                      << 8U)) 
                                                                  | (0xf80U 
                                                                     & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                            : 
                                                           (0x10413U 
                                                            | (((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__addi4spnImm) 
                                                                << 0x14U) 
                                                               | (0x380U 
                                                                  & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                     << 5U))))))
                                                          : 
                                                         ((8U 
                                                           & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                           ? 
                                                          ((2U 
                                                            & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                            ? 
                                                           ((1U 
                                                             & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                             ? 0U
                                                             : 
                                                            (0x1013U 
                                                             | ((0x1f00000U 
                                                                 & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                    << 0x12U)) 
                                                                | ((0xf8000U 
                                                                    & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                       << 8U)) 
                                                                   | (0xf80U 
                                                                      & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)))))
                                                            : 
                                                           ((1U 
                                                             & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                             ? 
                                                            (0x13U 
                                                             | (((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__addImm) 
                                                                 << 0x14U) 
                                                                | ((0xf8000U 
                                                                    & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                       << 8U)) 
                                                                   | (0xf80U 
                                                                      & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                             : 
                                                            (0x10413U 
                                                             | (((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__addi4spnImm) 
                                                                 << 0x14U) 
                                                                | (0x380U 
                                                                   & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                      << 5U))))))
                                                           : 
                                                          ((4U 
                                                            & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                            ? 
                                                           ((2U 
                                                             & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                             ? 
                                                            ((1U 
                                                              & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                              ? 0U
                                                              : 
                                                             (0x1013U 
                                                              | ((0x1f00000U 
                                                                  & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                     << 0x12U)) 
                                                                 | ((0xf8000U 
                                                                     & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                        << 8U)) 
                                                                    | (0xf80U 
                                                                       & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)))))
                                                             : 
                                                            ((1U 
                                                              & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                              ? 
                                                             (0x13U 
                                                              | (((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__addImm) 
                                                                  << 0x14U) 
                                                                 | ((0xf8000U 
                                                                     & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                        << 8U)) 
                                                                    | (0xf80U 
                                                                       & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                              : 
                                                             (0x10413U 
                                                              | (((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__addi4spnImm) 
                                                                  << 0x14U) 
                                                                 | (0x380U 
                                                                    & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                       << 5U))))))
                                                            : 
                                                           ((2U 
                                                             & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                             ? 
                                                            ((1U 
                                                              & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                              ? 0U
                                                              : 
                                                             (0x1013U 
                                                              | ((0x1f00000U 
                                                                  & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                     << 0x12U)) 
                                                                 | ((0xf8000U 
                                                                     & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                        << 8U)) 
                                                                    | (0xf80U 
                                                                       & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)))))
                                                             : 
                                                            ((1U 
                                                              & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)
                                                              ? 
                                                             (0x13U 
                                                              | (((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT___decomp__DOT__addImm) 
                                                                  << 0x14U) 
                                                                 | ((0xf8000U 
                                                                     & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                                        << 8U)) 
                                                                    | (0xf80U 
                                                                       & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))))
                                                              : 0U))))))))))))))));
}

VL_ATTR_COLD void VfemtoRV32_bench___024root___eval_initial(VfemtoRV32_bench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VfemtoRV32_bench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfemtoRV32_bench___024root___eval_initial\n"); );
    // Body
    VfemtoRV32_bench___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__pclk = vlSelf->pclk;
}

VL_ATTR_COLD void VfemtoRV32_bench___024root___eval_settle(VfemtoRV32_bench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VfemtoRV32_bench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfemtoRV32_bench___024root___eval_settle\n"); );
    // Body
    VfemtoRV32_bench___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VfemtoRV32_bench___024root___final(VfemtoRV32_bench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VfemtoRV32_bench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfemtoRV32_bench___024root___final\n"); );
}

VL_ATTR_COLD void VfemtoRV32_bench___024root___ctor_var_reset(VfemtoRV32_bench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VfemtoRV32_bench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfemtoRV32_bench___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->pclk = VL_RAND_RESET_I(1);
    vlSelf->oled_DIN = VL_RAND_RESET_I(1);
    vlSelf->oled_CLK = VL_RAND_RESET_I(1);
    vlSelf->oled_CS = VL_RAND_RESET_I(1);
    vlSelf->oled_DC = VL_RAND_RESET_I(1);
    vlSelf->oled_RST = VL_RAND_RESET_I(1);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__reset_cnt = VL_RAND_RESET_I(16);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_address = VL_RAND_RESET_I(32);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_wmask = VL_RAND_RESET_I(4);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_rdata = VL_RAND_RESET_I(32);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_wdata = VL_RAND_RESET_I(32);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__io_rdata = VL_RAND_RESET_I(32);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__io_wstrb = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<16384; ++__Vi0) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__RAM[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->femtoRV32_bench__DOT__uut__DOT__ram_rdata = VL_RAND_RESET_I(32);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__uart_brk = VL_RAND_RESET_I(1);
    vlSelf->femtoRV32_bench__DOT__uut__DOT____Vcellinp__processor__reset = VL_RAND_RESET_I(1);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__leds__DOT__led_state = VL_RAND_RESET_I(4);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__oled_display__DOT__bitcount = VL_RAND_RESET_I(5);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__oled_display__DOT__shifter = VL_RAND_RESET_I(16);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__oled_display__DOT__sending = VL_RAND_RESET_I(1);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__oled_display__DOT__genblk1__DOT__slow_clk__DOT__slow_cnt = VL_RAND_RESET_I(1);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__isLoad = VL_RAND_RESET_I(1);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__isStore = VL_RAND_RESET_I(1);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1 = VL_RAND_RESET_I(32);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs2 = VL_RAND_RESET_I(32);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs3 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__registerFile[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__aluIn2 = VL_RAND_RESET_I(32);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__aluWr = VL_RAND_RESET_I(1);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__aluBusy = VL_RAND_RESET_I(1);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__multiply = VL_RAND_RESET_Q(64);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__aluOut_mul = VL_RAND_RESET_I(32);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__aluOut_div = VL_RAND_RESET_I(32);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__dividend = VL_RAND_RESET_I(32);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__divisor = VL_RAND_RESET_Q(63);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__quotient = VL_RAND_RESET_I(32);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__div_cnt = VL_RAND_RESET_I(6);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__div_sign = VL_RAND_RESET_I(1);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT____Vcellinp__FPU__wr = VL_RAND_RESET_I(1);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rdIsFP = VL_RAND_RESET_I(1);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__PC = VL_RAND_RESET_I(24);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr = VL_RAND_RESET_I(30);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__loadstore_addr = VL_RAND_RESET_I(24);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__interrupt_request_sticky = VL_RAND_RESET_I(1);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__interrupt = VL_RAND_RESET_I(1);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__interrupt_return = VL_RAND_RESET_I(1);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__mepc = VL_RAND_RESET_I(24);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__mtvec = VL_RAND_RESET_I(24);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__mstatus = VL_RAND_RESET_I(1);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__mcause = VL_RAND_RESET_I(1);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__cycles = VL_RAND_RESET_Q(64);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__CSR_write = VL_RAND_RESET_I(32);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__writeBackData = VL_RAND_RESET_I(32);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__cached_addr = VL_RAND_RESET_I(22);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__cached_data = VL_RAND_RESET_I(32);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__current_cache_hit = VL_RAND_RESET_I(1);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__next_cache_hit = VL_RAND_RESET_I(1);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__current_unaligned_long = VL_RAND_RESET_I(1);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__next_unaligned_long = VL_RAND_RESET_I(1);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__fetch_second_half = VL_RAND_RESET_I(1);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__long_instr = VL_RAND_RESET_I(1);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr = VL_RAND_RESET_I(32);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__decompressed = VL_RAND_RESET_I(32);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__state = VL_RAND_RESET_I(6);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__needToWait = VL_RAND_RESET_I(1);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__PC_new = VL_RAND_RESET_I(24);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign = VL_RAND_RESET_I(1);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp = VL_RAND_RESET_I(9);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac = VL_RAND_RESET_Q(50);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_sign = VL_RAND_RESET_I(1);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_exp = VL_RAND_RESET_I(9);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_frac = VL_RAND_RESET_Q(50);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_sign = VL_RAND_RESET_I(1);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_exp = VL_RAND_RESET_I(8);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_frac = VL_RAND_RESET_I(24);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_sign = VL_RAND_RESET_I(1);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_exp = VL_RAND_RESET_I(8);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_frac = VL_RAND_RESET_I(24);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__C_sign = VL_RAND_RESET_I(1);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__C_exp = VL_RAND_RESET_I(8);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__C_frac = VL_RAND_RESET_I(24);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__D_sign = VL_RAND_RESET_I(1);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__D_exp = VL_RAND_RESET_I(8);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__D_frac = VL_RAND_RESET_I(24);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__E_sign = VL_RAND_RESET_I(1);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__E_exp = VL_RAND_RESET_I(8);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__E_frac = VL_RAND_RESET_I(24);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_PC = VL_RAND_RESET_I(7);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr = VL_RAND_RESET_I(7);
    for (int __Vi0=0; __Vi0<112; ++__Vi0) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM[__Vi0] = VL_RAND_RESET_I(7);
    }
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__FPMPROG_CMP = VL_RAND_RESET_I(32);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__FPMPROG_ADD = VL_RAND_RESET_I(32);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__FPMPROG_MUL = VL_RAND_RESET_I(32);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__FPMPROG_MADD = VL_RAND_RESET_I(32);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__FPMPROG_DIV = VL_RAND_RESET_I(32);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__FPMPROG_FP_TO_INT = VL_RAND_RESET_I(32);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__FPMPROG_INT_TO_FP = VL_RAND_RESET_I(32);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__FPMPROG_SQRT = VL_RAND_RESET_I(32);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__FPMPROG_MIN_MAX = VL_RAND_RESET_I(32);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_PC_next = VL_RAND_RESET_I(7);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__exp_diff = VL_RAND_RESET_I(9);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fabsY_LT_fabsX = VL_RAND_RESET_I(1);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_LT_Y = VL_RAND_RESET_I(1);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_LE_Y = VL_RAND_RESET_I(1);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_EQ_Y = VL_RAND_RESET_I(1);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__frac_sum = VL_RAND_RESET_Q(51);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__prod_frac = VL_RAND_RESET_Q(50);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__prod_exp_norm = VL_RAND_RESET_I(9);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__prod_Z = VL_RAND_RESET_I(1);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__frac_sum_clz = VL_RAND_RESET_I(6);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__norm_lshamt = VL_RAND_RESET_I(6);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp_norm = VL_RAND_RESET_I(9);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__frcp_exp = VL_RAND_RESET_I(9);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__rsqrt_doom_magic = VL_RAND_RESET_I(32);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_fcvt_ftoi_shifted = VL_RAND_RESET_I(32);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fclass = VL_RAND_RESET_I(32);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFADD = VL_RAND_RESET_I(1);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFSUB = VL_RAND_RESET_I(1);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFMUL = VL_RAND_RESET_I(1);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFDIV = VL_RAND_RESET_I(1);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFMIN = VL_RAND_RESET_I(1);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFMAX = VL_RAND_RESET_I(1);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFEQ = VL_RAND_RESET_I(1);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFLT = VL_RAND_RESET_I(1);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFLE = VL_RAND_RESET_I(1);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFCVTWS = VL_RAND_RESET_I(1);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFCVTWUS = VL_RAND_RESET_I(1);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFCVTSW = VL_RAND_RESET_I(1);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFCVTSWU = VL_RAND_RESET_I(1);
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__active = VL_RAND_RESET_I(1);
}
