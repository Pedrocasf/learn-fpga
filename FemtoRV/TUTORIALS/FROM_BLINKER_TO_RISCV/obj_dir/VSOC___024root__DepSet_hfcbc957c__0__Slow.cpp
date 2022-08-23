// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSOC.h for the primary calling header

#include "verilated.h"

#include "VSOC___024root.h"

VL_ATTR_COLD void VSOC___024root___initial__TOP__0(VSOC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___initial__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h9fa8fbd3__0;
    // Body
    vlSelf->SOC__DOT__CPU__DOT__PC = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[1U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[2U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[3U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[4U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[5U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[6U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[7U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[8U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[9U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0xaU] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0xbU] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0xcU] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0xdU] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0xeU] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0xfU] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0x10U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0x11U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0x12U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0x13U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0x14U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0x15U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0x16U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0x17U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0x18U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0x19U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0x1aU] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0x1bU] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0x1cU] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0x1dU] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0x1eU] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0x1fU] = 0U;
    __Vtemp_h9fa8fbd3__0[0U] = 0x2e686578U;
    __Vtemp_h9fa8fbd3__0[1U] = 0x77617265U;
    __Vtemp_h9fa8fbd3__0[2U] = 0x6669726dU;
    VL_READMEM_N(true, 32, 1536, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_h9fa8fbd3__0)
                 ,  &(vlSelf->SOC__DOT__RAM__DOT__MEM)
                 , 0, ~0ULL);
    vlSelf->SOC__DOT__UART__DOT__cnt = 0U;
    vlSelf->SOC__DOT__CW__DOT__genblk1__DOT__reset_cnt = 0U;
    vlSelf->SOC__DOT__CPU__DOT__state = 0U;
}

extern const VlUnpacked<CData/*0:0*/, 64> VSOC__ConstPool__TABLE_hac2a2347_0;

VL_ATTR_COLD void VSOC___024root___settle__TOP__0(VSOC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___settle__TOP__0\n"); );
    // Init
    IData/*31:0*/ SOC__DOT__CPU__DOT__Iimm;
    IData/*31:0*/ SOC__DOT__CPU__DOT__aluIn2;
    IData/*31:0*/ SOC__DOT__CPU__DOT__aluPlus;
    QData/*32:0*/ SOC__DOT__CPU__DOT__aluMinus;
    CData/*0:0*/ SOC__DOT__CPU__DOT__LT;
    IData/*31:0*/ SOC__DOT__CPU__DOT__shifter_in;
    IData/*31:0*/ SOC__DOT__CPU__DOT__shifter;
    IData/*31:0*/ SOC__DOT__CPU__DOT__leftshift;
    CData/*0:0*/ SOC__DOT__CPU__DOT__takeBranch;
    IData/*31:0*/ SOC__DOT__CPU__DOT__PCplusImm;
    IData/*31:0*/ SOC__DOT__CPU__DOT__loadstore_addr;
    SData/*15:0*/ SOC__DOT__CPU__DOT__LOAD_halfword;
    CData/*7:0*/ SOC__DOT__CPU__DOT__LOAD_byte;
    CData/*0:0*/ SOC__DOT__CPU__DOT__LOAD_sign;
    IData/*31:0*/ __Vfunc_SOC__DOT__CPU__DOT__flip32__0__Vfuncout;
    IData/*31:0*/ __Vfunc_SOC__DOT__CPU__DOT__flip32__0__x;
    IData/*31:0*/ __Vfunc_SOC__DOT__CPU__DOT__flip32__1__Vfuncout;
    IData/*31:0*/ __Vfunc_SOC__DOT__CPU__DOT__flip32__1__x;
    CData/*5:0*/ __Vtableidx1;
    // Body
    vlSelf->SOC__DOT__CPU__DOT__isLoad = (3U == (0x7fU 
                                                 & vlSelf->SOC__DOT__CPU__DOT__instr));
    vlSelf->SOC__DOT__CPU__DOT__isStore = (0x23U == 
                                           (0x7fU & vlSelf->SOC__DOT__CPU__DOT__instr));
    vlSelf->SOC__DOT__CPU__DOT__isSYSTEM = (0x73U == 
                                            (0x7fU 
                                             & vlSelf->SOC__DOT__CPU__DOT__instr));
    vlSelf->SOC__DOT__CPU__DOT__rs1Id = (0x1fU & (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                  >> 0xfU));
    vlSelf->SOC__DOT__CPU__DOT__rs2Id = (0x1fU & (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                  >> 0x14U));
    vlSelf->SOC__DOT__CPU__DOT__rdId = (0x1fU & (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                 >> 7U));
    vlSelf->TXD = (1U & ((IData)(vlSelf->SOC__DOT__UART__DOT__data) 
                         | (~ (IData)((0U != (IData)(vlSelf->SOC__DOT__UART__DOT__data))))));
    __Vfunc_SOC__DOT__CPU__DOT__flip32__0__x = vlSelf->SOC__DOT__CPU__DOT__rs1;
    __Vfunc_SOC__DOT__CPU__DOT__flip32__0__Vfuncout 
        = ((__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
            << 0x1fU) | ((0x40000000U & (__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                         << 0x1dU)) 
                         | ((0x20000000U & (__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                            << 0x1bU)) 
                            | ((0x10000000U & (__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                               << 0x19U)) 
                               | ((0x8000000U & (__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                 << 0x17U)) 
                                  | ((0x4000000U & 
                                      (__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                       << 0x15U)) | 
                                     ((0x2000000U & 
                                       (__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                        << 0x13U)) 
                                      | ((0x1000000U 
                                          & (__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                             << 0x11U)) 
                                         | ((0x800000U 
                                             & (__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                << 0xfU)) 
                                            | ((0x400000U 
                                                & (__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                   << 0xdU)) 
                                               | ((0x200000U 
                                                   & (__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                      << 0xbU)) 
                                                  | ((0x100000U 
                                                      & (__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                         << 9U)) 
                                                     | ((0x80000U 
                                                         & (__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                            << 7U)) 
                                                        | ((0x40000U 
                                                            & (__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                               << 5U)) 
                                                           | ((0x20000U 
                                                               & (__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                  << 3U)) 
                                                              | ((0x10000U 
                                                                  & (__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                     << 1U)) 
                                                                 | ((0x8000U 
                                                                     & (__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                        >> 1U)) 
                                                                    | ((0x4000U 
                                                                        & (__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                           >> 3U)) 
                                                                       | ((0x2000U 
                                                                           & (__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                              >> 5U)) 
                                                                          | ((0x1000U 
                                                                              & (__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 7U)) 
                                                                             | ((0x800U 
                                                                                & (__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 0x1dU)) 
                                                                                | (__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))));
    SOC__DOT__CPU__DOT__shifter_in = ((1U == (7U & 
                                              (vlSelf->SOC__DOT__CPU__DOT__instr 
                                               >> 0xcU)))
                                       ? __Vfunc_SOC__DOT__CPU__DOT__flip32__0__Vfuncout
                                       : vlSelf->SOC__DOT__CPU__DOT__rs1);
    SOC__DOT__CPU__DOT__Iimm = (((- (IData)((vlSelf->SOC__DOT__CPU__DOT__instr 
                                             >> 0x1fU))) 
                                 << 0xbU) | (0x7ffU 
                                             & (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                >> 0x14U)));
    SOC__DOT__CPU__DOT__PCplusImm = (vlSelf->SOC__DOT__CPU__DOT__PC 
                                     + ((8U & vlSelf->SOC__DOT__CPU__DOT__instr)
                                         ? (((- (IData)(
                                                        (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                         >> 0x1fU))) 
                                             << 0x14U) 
                                            | ((0xff000U 
                                                & vlSelf->SOC__DOT__CPU__DOT__instr) 
                                               | ((0x800U 
                                                   & (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                      >> 9U)) 
                                                  | (0x7feU 
                                                     & (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                        >> 0x14U)))))
                                         : ((0x10U 
                                             & vlSelf->SOC__DOT__CPU__DOT__instr)
                                             ? (0xfffff000U 
                                                & vlSelf->SOC__DOT__CPU__DOT__instr)
                                             : (((- (IData)(
                                                            (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                             >> 0x1fU))) 
                                                 << 0xcU) 
                                                | ((0x800U 
                                                    & (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                            >> 7U))))))));
    vlSelf->SOC__DOT__resetn = (0xffffU == (IData)(vlSelf->SOC__DOT__CW__DOT__genblk1__DOT__reset_cnt));
    vlSelf->SOC__DOT__CPU__DOT__writeBackEn = ((((3U 
                                                  == (IData)(vlSelf->SOC__DOT__CPU__DOT__state)) 
                                                 & (0x63U 
                                                    != 
                                                    (0x7fU 
                                                     & vlSelf->SOC__DOT__CPU__DOT__instr))) 
                                                & (0x23U 
                                                   != 
                                                   (0x7fU 
                                                    & vlSelf->SOC__DOT__CPU__DOT__instr))) 
                                               | (5U 
                                                  == (IData)(vlSelf->SOC__DOT__CPU__DOT__state)));
    SOC__DOT__CPU__DOT__aluIn2 = (((0x33U == (0x7fU 
                                              & vlSelf->SOC__DOT__CPU__DOT__instr)) 
                                   | (0x63U == (0x7fU 
                                                & vlSelf->SOC__DOT__CPU__DOT__instr)))
                                   ? vlSelf->SOC__DOT__CPU__DOT__rs2
                                   : SOC__DOT__CPU__DOT__Iimm);
    SOC__DOT__CPU__DOT__loadstore_addr = (vlSelf->SOC__DOT__CPU__DOT__rs1 
                                          + ((0x23U 
                                              == (0x7fU 
                                                  & vlSelf->SOC__DOT__CPU__DOT__instr))
                                              ? (((- (IData)(
                                                             (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                              >> 0x1fU))) 
                                                  << 0xbU) 
                                                 | ((0x7e0U 
                                                     & (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                        >> 0x14U)) 
                                                    | (0x1fU 
                                                       & (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                          >> 7U))))
                                              : SOC__DOT__CPU__DOT__Iimm));
    SOC__DOT__CPU__DOT__aluPlus = (vlSelf->SOC__DOT__CPU__DOT__rs1 
                                   + SOC__DOT__CPU__DOT__aluIn2);
    SOC__DOT__CPU__DOT__shifter = (IData)((0x1ffffffffULL 
                                           & VL_SHIFTRS_QQI(33,33,5, 
                                                            (((QData)((IData)(
                                                                              ((vlSelf->SOC__DOT__CPU__DOT__instr 
                                                                                >> 0x1eU) 
                                                                               & (vlSelf->SOC__DOT__CPU__DOT__rs1 
                                                                                >> 0x1fU)))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(SOC__DOT__CPU__DOT__shifter_in))), 
                                                            (0x1fU 
                                                             & SOC__DOT__CPU__DOT__aluIn2))));
    SOC__DOT__CPU__DOT__aluMinus = (0x1ffffffffULL 
                                    & (1ULL + ((0x100000000ULL 
                                                | (QData)((IData)(
                                                                  (~ SOC__DOT__CPU__DOT__aluIn2)))) 
                                               + (QData)((IData)(vlSelf->SOC__DOT__CPU__DOT__rs1)))));
    vlSelf->SOC__DOT__mem_wdata = ((0xffff0000U & vlSelf->SOC__DOT__mem_wdata) 
                                   | ((0xff00U & ((
                                                   (1U 
                                                    & SOC__DOT__CPU__DOT__loadstore_addr)
                                                    ? vlSelf->SOC__DOT__CPU__DOT__rs2
                                                    : 
                                                   (vlSelf->SOC__DOT__CPU__DOT__rs2 
                                                    >> 8U)) 
                                                  << 8U)) 
                                      | (0xffU & vlSelf->SOC__DOT__CPU__DOT__rs2)));
    vlSelf->SOC__DOT__mem_wdata = ((0xff00ffffU & vlSelf->SOC__DOT__mem_wdata) 
                                   | (0xff0000U & (
                                                   ((2U 
                                                     & SOC__DOT__CPU__DOT__loadstore_addr)
                                                     ? vlSelf->SOC__DOT__CPU__DOT__rs2
                                                     : 
                                                    (vlSelf->SOC__DOT__CPU__DOT__rs2 
                                                     >> 0x10U)) 
                                                   << 0x10U)));
    vlSelf->SOC__DOT__mem_wdata = ((0xffffffU & vlSelf->SOC__DOT__mem_wdata) 
                                   | (((1U & SOC__DOT__CPU__DOT__loadstore_addr)
                                        ? vlSelf->SOC__DOT__CPU__DOT__rs2
                                        : ((2U & SOC__DOT__CPU__DOT__loadstore_addr)
                                            ? (vlSelf->SOC__DOT__CPU__DOT__rs2 
                                               >> 8U)
                                            : (vlSelf->SOC__DOT__CPU__DOT__rs2 
                                               >> 0x18U))) 
                                      << 0x18U));
    vlSelf->SOC__DOT__mem_wmask = ((- (IData)((6U == (IData)(vlSelf->SOC__DOT__CPU__DOT__state)))) 
                                   & ((0U == (3U & 
                                              (vlSelf->SOC__DOT__CPU__DOT__instr 
                                               >> 0xcU)))
                                       ? ((2U & SOC__DOT__CPU__DOT__loadstore_addr)
                                           ? ((1U & SOC__DOT__CPU__DOT__loadstore_addr)
                                               ? 8U
                                               : 4U)
                                           : ((1U & SOC__DOT__CPU__DOT__loadstore_addr)
                                               ? 2U
                                               : 1U))
                                       : ((1U == (3U 
                                                  & (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                     >> 0xcU)))
                                           ? ((2U & SOC__DOT__CPU__DOT__loadstore_addr)
                                               ? 0xcU
                                               : 3U)
                                           : 0xfU)));
    vlSelf->SOC__DOT__mem_addr = (((1U == (IData)(vlSelf->SOC__DOT__CPU__DOT__state)) 
                                   | (0U == (IData)(vlSelf->SOC__DOT__CPU__DOT__state)))
                                   ? vlSelf->SOC__DOT__CPU__DOT__PC
                                   : SOC__DOT__CPU__DOT__loadstore_addr);
    __Vfunc_SOC__DOT__CPU__DOT__flip32__1__x = SOC__DOT__CPU__DOT__shifter;
    __Vfunc_SOC__DOT__CPU__DOT__flip32__1__Vfuncout 
        = ((__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
            << 0x1fU) | ((0x40000000U & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                         << 0x1dU)) 
                         | ((0x20000000U & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                            << 0x1bU)) 
                            | ((0x10000000U & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                               << 0x19U)) 
                               | ((0x8000000U & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                 << 0x17U)) 
                                  | ((0x4000000U & 
                                      (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                       << 0x15U)) | 
                                     ((0x2000000U & 
                                       (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                        << 0x13U)) 
                                      | ((0x1000000U 
                                          & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                             << 0x11U)) 
                                         | ((0x800000U 
                                             & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                << 0xfU)) 
                                            | ((0x400000U 
                                                & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                   << 0xdU)) 
                                               | ((0x200000U 
                                                   & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                      << 0xbU)) 
                                                  | ((0x100000U 
                                                      & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                         << 9U)) 
                                                     | ((0x80000U 
                                                         & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                            << 7U)) 
                                                        | ((0x40000U 
                                                            & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                               << 5U)) 
                                                           | ((0x20000U 
                                                               & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                                  << 3U)) 
                                                              | ((0x10000U 
                                                                  & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                                     << 1U)) 
                                                                 | ((0x8000U 
                                                                     & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                                        >> 1U)) 
                                                                    | ((0x4000U 
                                                                        & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                                           >> 3U)) 
                                                                       | ((0x2000U 
                                                                           & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                                              >> 5U)) 
                                                                          | ((0x1000U 
                                                                              & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                                                >> 7U)) 
                                                                             | ((0x800U 
                                                                                & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                                                >> 0x1dU)) 
                                                                                | (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))));
    SOC__DOT__CPU__DOT__leftshift = __Vfunc_SOC__DOT__CPU__DOT__flip32__1__Vfuncout;
    SOC__DOT__CPU__DOT__LT = (1U & (((vlSelf->SOC__DOT__CPU__DOT__rs1 
                                      ^ SOC__DOT__CPU__DOT__aluIn2) 
                                     >> 0x1fU) ? (vlSelf->SOC__DOT__CPU__DOT__rs1 
                                                  >> 0x1fU)
                                     : (IData)((SOC__DOT__CPU__DOT__aluMinus 
                                                >> 0x20U))));
    vlSelf->SOC__DOT____Vcellinp__RAM__mem_wmask = 
        ((- (IData)((1U & (~ (vlSelf->SOC__DOT__mem_addr 
                              >> 0x16U))))) & (IData)(vlSelf->SOC__DOT__mem_wmask));
    vlSelf->SOC__DOT__uart_valid = (IData)(((0x400008U 
                                             == (0x400008U 
                                                 & vlSelf->SOC__DOT__mem_addr)) 
                                            & (0U != (IData)(vlSelf->SOC__DOT__mem_wmask))));
    vlSelf->SOC__DOT__mem_rdata = ((0x400000U & vlSelf->SOC__DOT__mem_addr)
                                    ? ((0x10U & vlSelf->SOC__DOT__mem_addr)
                                        ? (0x200U & 
                                           ((~ (IData)(vlSelf->SOC__DOT__uart_ready)) 
                                            << 9U))
                                        : 0U) : vlSelf->SOC__DOT__RAM_rdata);
    __Vtableidx1 = (((0U == (IData)(SOC__DOT__CPU__DOT__aluMinus)) 
                     << 5U) | (((IData)(SOC__DOT__CPU__DOT__LT) 
                                << 4U) | ((8U & ((IData)(
                                                         (SOC__DOT__CPU__DOT__aluMinus 
                                                          >> 0x20U)) 
                                                 << 3U)) 
                                          | (7U & (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                   >> 0xcU)))));
    SOC__DOT__CPU__DOT__takeBranch = VSOC__ConstPool__TABLE_hac2a2347_0
        [__Vtableidx1];
    SOC__DOT__CPU__DOT__LOAD_halfword = (0xffffU & 
                                         ((2U & SOC__DOT__CPU__DOT__loadstore_addr)
                                           ? (vlSelf->SOC__DOT__mem_rdata 
                                              >> 0x10U)
                                           : vlSelf->SOC__DOT__mem_rdata));
    vlSelf->SOC__DOT__CPU__DOT__nextPC = ((((0x63U 
                                             == (0x7fU 
                                                 & vlSelf->SOC__DOT__CPU__DOT__instr)) 
                                            & (IData)(SOC__DOT__CPU__DOT__takeBranch)) 
                                           | (0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->SOC__DOT__CPU__DOT__instr)))
                                           ? SOC__DOT__CPU__DOT__PCplusImm
                                           : ((0x67U 
                                               == (0x7fU 
                                                   & vlSelf->SOC__DOT__CPU__DOT__instr))
                                               ? (0xfffffffeU 
                                                  & SOC__DOT__CPU__DOT__aluPlus)
                                               : ((IData)(4U) 
                                                  + vlSelf->SOC__DOT__CPU__DOT__PC)));
    SOC__DOT__CPU__DOT__LOAD_byte = (0xffU & ((1U & SOC__DOT__CPU__DOT__loadstore_addr)
                                               ? ((IData)(SOC__DOT__CPU__DOT__LOAD_halfword) 
                                                  >> 8U)
                                               : (IData)(SOC__DOT__CPU__DOT__LOAD_halfword)));
    SOC__DOT__CPU__DOT__LOAD_sign = (1U & ((~ (vlSelf->SOC__DOT__CPU__DOT__instr 
                                               >> 0xeU)) 
                                           & ((0U == 
                                               (3U 
                                                & (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                   >> 0xcU)))
                                               ? ((IData)(SOC__DOT__CPU__DOT__LOAD_byte) 
                                                  >> 7U)
                                               : ((IData)(SOC__DOT__CPU__DOT__LOAD_halfword) 
                                                  >> 0xfU))));
    vlSelf->SOC__DOT__CPU__DOT__writeBackData = (((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->SOC__DOT__CPU__DOT__instr)) 
                                                  | (0x67U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->SOC__DOT__CPU__DOT__instr)))
                                                  ? 
                                                 ((IData)(4U) 
                                                  + vlSelf->SOC__DOT__CPU__DOT__PC)
                                                  : 
                                                 ((0x37U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->SOC__DOT__CPU__DOT__instr))
                                                   ? 
                                                  (0xfffff000U 
                                                   & vlSelf->SOC__DOT__CPU__DOT__instr)
                                                   : 
                                                  ((0x17U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->SOC__DOT__CPU__DOT__instr))
                                                    ? SOC__DOT__CPU__DOT__PCplusImm
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->SOC__DOT__CPU__DOT__instr))
                                                     ? 
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                          >> 0xcU)))
                                                      ? 
                                                     (((- (IData)((IData)(SOC__DOT__CPU__DOT__LOAD_sign))) 
                                                       << 8U) 
                                                      | (IData)(SOC__DOT__CPU__DOT__LOAD_byte))
                                                      : 
                                                     ((1U 
                                                       == 
                                                       (3U 
                                                        & (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                           >> 0xcU)))
                                                       ? 
                                                      (((- (IData)((IData)(SOC__DOT__CPU__DOT__LOAD_sign))) 
                                                        << 0x10U) 
                                                       | (IData)(SOC__DOT__CPU__DOT__LOAD_halfword))
                                                       : vlSelf->SOC__DOT__mem_rdata))
                                                     : 
                                                    ((0x4000U 
                                                      & vlSelf->SOC__DOT__CPU__DOT__instr)
                                                      ? 
                                                     ((0x2000U 
                                                       & vlSelf->SOC__DOT__CPU__DOT__instr)
                                                       ? 
                                                      ((0x1000U 
                                                        & vlSelf->SOC__DOT__CPU__DOT__instr)
                                                        ? 
                                                       (vlSelf->SOC__DOT__CPU__DOT__rs1 
                                                        & SOC__DOT__CPU__DOT__aluIn2)
                                                        : 
                                                       (vlSelf->SOC__DOT__CPU__DOT__rs1 
                                                        | SOC__DOT__CPU__DOT__aluIn2))
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelf->SOC__DOT__CPU__DOT__instr)
                                                        ? SOC__DOT__CPU__DOT__shifter
                                                        : 
                                                       (vlSelf->SOC__DOT__CPU__DOT__rs1 
                                                        ^ SOC__DOT__CPU__DOT__aluIn2)))
                                                      : 
                                                     ((0x2000U 
                                                       & vlSelf->SOC__DOT__CPU__DOT__instr)
                                                       ? 
                                                      ((0x1000U 
                                                        & vlSelf->SOC__DOT__CPU__DOT__instr)
                                                        ? 
                                                       (1U 
                                                        & (IData)(
                                                                  (SOC__DOT__CPU__DOT__aluMinus 
                                                                   >> 0x20U)))
                                                        : (IData)(SOC__DOT__CPU__DOT__LT))
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelf->SOC__DOT__CPU__DOT__instr)
                                                        ? SOC__DOT__CPU__DOT__leftshift
                                                        : 
                                                       ((IData)(
                                                                (0x40000020U 
                                                                 == 
                                                                 (0x40000020U 
                                                                  & vlSelf->SOC__DOT__CPU__DOT__instr)))
                                                         ? (IData)(SOC__DOT__CPU__DOT__aluMinus)
                                                         : SOC__DOT__CPU__DOT__aluPlus))))))));
}

VL_ATTR_COLD void VSOC___024root___eval_initial(VSOC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___eval_initial\n"); );
    // Body
    VSOC___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__CLK = vlSelf->CLK;
    vlSelf->__Vclklast__TOP__RESET = vlSelf->RESET;
}

VL_ATTR_COLD void VSOC___024root___eval_settle(VSOC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___eval_settle\n"); );
    // Body
    VSOC___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VSOC___024root___final(VSOC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___final\n"); );
}

VL_ATTR_COLD void VSOC___024root___ctor_var_reset(VSOC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->CLK = VL_RAND_RESET_I(1);
    vlSelf->RESET = VL_RAND_RESET_I(1);
    vlSelf->LEDS = VL_RAND_RESET_I(5);
    vlSelf->RXD = VL_RAND_RESET_I(1);
    vlSelf->TXD = VL_RAND_RESET_I(1);
    vlSelf->SOC__DOT__resetn = VL_RAND_RESET_I(1);
    vlSelf->SOC__DOT__mem_addr = VL_RAND_RESET_I(32);
    vlSelf->SOC__DOT__mem_rdata = VL_RAND_RESET_I(32);
    vlSelf->SOC__DOT__mem_wdata = VL_RAND_RESET_I(32);
    vlSelf->SOC__DOT__mem_wmask = VL_RAND_RESET_I(4);
    vlSelf->SOC__DOT__RAM_rdata = VL_RAND_RESET_I(32);
    vlSelf->SOC__DOT____Vcellinp__RAM__mem_wmask = VL_RAND_RESET_I(4);
    vlSelf->SOC__DOT__uart_valid = VL_RAND_RESET_I(1);
    vlSelf->SOC__DOT__uart_ready = VL_RAND_RESET_I(1);
    vlSelf->SOC__DOT__CPU__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->SOC__DOT__CPU__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->SOC__DOT__CPU__DOT__isLoad = VL_RAND_RESET_I(1);
    vlSelf->SOC__DOT__CPU__DOT__isStore = VL_RAND_RESET_I(1);
    vlSelf->SOC__DOT__CPU__DOT__isSYSTEM = VL_RAND_RESET_I(1);
    vlSelf->SOC__DOT__CPU__DOT__rs1Id = VL_RAND_RESET_I(5);
    vlSelf->SOC__DOT__CPU__DOT__rs2Id = VL_RAND_RESET_I(5);
    vlSelf->SOC__DOT__CPU__DOT__rdId = VL_RAND_RESET_I(5);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->SOC__DOT__CPU__DOT__RegisterBank[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->SOC__DOT__CPU__DOT__rs1 = VL_RAND_RESET_I(32);
    vlSelf->SOC__DOT__CPU__DOT__rs2 = VL_RAND_RESET_I(32);
    vlSelf->SOC__DOT__CPU__DOT__writeBackData = VL_RAND_RESET_I(32);
    vlSelf->SOC__DOT__CPU__DOT__writeBackEn = VL_RAND_RESET_I(1);
    vlSelf->SOC__DOT__CPU__DOT__nextPC = VL_RAND_RESET_I(32);
    vlSelf->SOC__DOT__CPU__DOT__state = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<1536; ++__Vi0) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->SOC__DOT__RAM__DOT____Vlvbound_h8baf4682__0 = VL_RAND_RESET_I(8);
    vlSelf->SOC__DOT__RAM__DOT____Vlvbound_h8baec87f__0 = VL_RAND_RESET_I(8);
    vlSelf->SOC__DOT__RAM__DOT____Vlvbound_h8b826fe1__0 = VL_RAND_RESET_I(8);
    vlSelf->SOC__DOT__RAM__DOT____Vlvbound_h8b81ede2__0 = VL_RAND_RESET_I(8);
    vlSelf->SOC__DOT__UART__DOT__cnt = VL_RAND_RESET_I(5);
    vlSelf->SOC__DOT__UART__DOT__data = VL_RAND_RESET_I(10);
    vlSelf->SOC__DOT__CW__DOT__genblk1__DOT__reset_cnt = VL_RAND_RESET_I(16);
    vlSelf->__Vdly__SOC__DOT__CW__DOT__genblk1__DOT__reset_cnt = VL_RAND_RESET_I(16);
}
