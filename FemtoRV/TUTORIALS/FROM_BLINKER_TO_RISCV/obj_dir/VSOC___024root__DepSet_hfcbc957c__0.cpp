// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSOC.h for the primary calling header

#include "verilated.h"

#include "VSOC___024root.h"

VL_INLINE_OPT void VSOC___024root___sequent__TOP__0(VSOC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdly__SOC__DOT__CW__DOT__genblk1__DOT__reset_cnt 
        = vlSelf->SOC__DOT__CW__DOT__genblk1__DOT__reset_cnt;
    vlSelf->__Vdly__SOC__DOT__CW__DOT__genblk1__DOT__reset_cnt 
        = ((IData)(vlSelf->RESET) ? 0U : (0xffffU & 
                                          ((IData)(vlSelf->SOC__DOT__CW__DOT__genblk1__DOT__reset_cnt) 
                                           + (1U & 
                                              (~ (IData)(vlSelf->SOC__DOT__resetn))))));
}

extern const VlUnpacked<CData/*0:0*/, 64> VSOC__ConstPool__TABLE_hac2a2347_0;

VL_INLINE_OPT void VSOC___024root___sequent__TOP__1(VSOC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___sequent__TOP__1\n"); );
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
    CData/*2:0*/ __Vdly__SOC__DOT__CPU__DOT__state;
    CData/*4:0*/ __Vdlyvdim0__SOC__DOT__CPU__DOT__RegisterBank__v0;
    IData/*31:0*/ __Vdlyvval__SOC__DOT__CPU__DOT__RegisterBank__v0;
    CData/*0:0*/ __Vdlyvset__SOC__DOT__CPU__DOT__RegisterBank__v0;
    SData/*10:0*/ __Vdlyvdim0__SOC__DOT__RAM__DOT__MEM__v0;
    CData/*4:0*/ __Vdlyvlsb__SOC__DOT__RAM__DOT__MEM__v0;
    CData/*7:0*/ __Vdlyvval__SOC__DOT__RAM__DOT__MEM__v0;
    CData/*0:0*/ __Vdlyvset__SOC__DOT__RAM__DOT__MEM__v0;
    SData/*10:0*/ __Vdlyvdim0__SOC__DOT__RAM__DOT__MEM__v1;
    CData/*4:0*/ __Vdlyvlsb__SOC__DOT__RAM__DOT__MEM__v1;
    CData/*7:0*/ __Vdlyvval__SOC__DOT__RAM__DOT__MEM__v1;
    CData/*0:0*/ __Vdlyvset__SOC__DOT__RAM__DOT__MEM__v1;
    SData/*10:0*/ __Vdlyvdim0__SOC__DOT__RAM__DOT__MEM__v2;
    CData/*4:0*/ __Vdlyvlsb__SOC__DOT__RAM__DOT__MEM__v2;
    CData/*7:0*/ __Vdlyvval__SOC__DOT__RAM__DOT__MEM__v2;
    CData/*0:0*/ __Vdlyvset__SOC__DOT__RAM__DOT__MEM__v2;
    SData/*10:0*/ __Vdlyvdim0__SOC__DOT__RAM__DOT__MEM__v3;
    CData/*4:0*/ __Vdlyvlsb__SOC__DOT__RAM__DOT__MEM__v3;
    CData/*7:0*/ __Vdlyvval__SOC__DOT__RAM__DOT__MEM__v3;
    CData/*0:0*/ __Vdlyvset__SOC__DOT__RAM__DOT__MEM__v3;
    CData/*0:0*/ __Vdly__SOC__DOT__uart_ready;
    CData/*4:0*/ __Vdly__SOC__DOT__UART__DOT__cnt;
    // Body
    __Vdly__SOC__DOT__UART__DOT__cnt = vlSelf->SOC__DOT__UART__DOT__cnt;
    __Vdly__SOC__DOT__uart_ready = vlSelf->SOC__DOT__uart_ready;
    __Vdlyvset__SOC__DOT__RAM__DOT__MEM__v0 = 0U;
    __Vdlyvset__SOC__DOT__RAM__DOT__MEM__v1 = 0U;
    __Vdlyvset__SOC__DOT__RAM__DOT__MEM__v2 = 0U;
    __Vdlyvset__SOC__DOT__RAM__DOT__MEM__v3 = 0U;
    __Vdlyvset__SOC__DOT__CPU__DOT__RegisterBank__v0 = 0U;
    __Vdly__SOC__DOT__CPU__DOT__state = vlSelf->SOC__DOT__CPU__DOT__state;
    if (VL_UNLIKELY(vlSelf->SOC__DOT__uart_valid)) {
        VL_WRITEF("%c",8,(0xffU & vlSelf->SOC__DOT__mem_wdata));
        if (0x80000001U) { VL_FFLUSH_I(0x80000001U); }
    }
    if ((IData)(((0x400004U == (0x400004U & vlSelf->SOC__DOT__mem_addr)) 
                 & (0U != (IData)(vlSelf->SOC__DOT__mem_wmask))))) {
        vlSelf->LEDS = (0x1fU & vlSelf->SOC__DOT__mem_wdata);
    }
    if ((IData)((((IData)(vlSelf->SOC__DOT__UART__DOT__cnt) 
                  >> 4U) & (~ (IData)((0U != (IData)(vlSelf->SOC__DOT__UART__DOT__data))))))) {
        __Vdly__SOC__DOT__uart_ready = 1U;
    } else if (((IData)(vlSelf->SOC__DOT__uart_valid) 
                & (IData)(vlSelf->SOC__DOT__uart_ready))) {
        __Vdly__SOC__DOT__uart_ready = 0U;
    }
    __Vdly__SOC__DOT__UART__DOT__cnt = (((IData)(vlSelf->SOC__DOT__uart_ready) 
                                         | ((IData)(vlSelf->SOC__DOT__UART__DOT__cnt) 
                                            >> 4U))
                                         ? 0xaU : (0x1fU 
                                                   & ((IData)(vlSelf->SOC__DOT__UART__DOT__cnt) 
                                                      - (IData)(1U))));
    if ((0x10U & (IData)(vlSelf->SOC__DOT__UART__DOT__cnt))) {
        vlSelf->SOC__DOT__UART__DOT__data = (0x1ffU 
                                             & ((IData)(vlSelf->SOC__DOT__UART__DOT__data) 
                                                >> 1U));
    } else if (((IData)(vlSelf->SOC__DOT__uart_valid) 
                & (IData)(vlSelf->SOC__DOT__uart_ready))) {
        vlSelf->SOC__DOT__UART__DOT__data = (0x200U 
                                             | (0x1feU 
                                                & (vlSelf->SOC__DOT__mem_wdata 
                                                   << 1U)));
    }
    if (((~ (vlSelf->SOC__DOT__mem_addr >> 0x16U)) 
         & ((0U == (IData)(vlSelf->SOC__DOT__CPU__DOT__state)) 
            | (4U == (IData)(vlSelf->SOC__DOT__CPU__DOT__state))))) {
        vlSelf->SOC__DOT__RAM_rdata = ((0x5ffU >= (0x7ffU 
                                                   & (vlSelf->SOC__DOT__mem_addr 
                                                      >> 2U)))
                                        ? vlSelf->SOC__DOT__RAM__DOT__MEM
                                       [(0x7ffU & (vlSelf->SOC__DOT__mem_addr 
                                                   >> 2U))]
                                        : 0U);
    }
    if ((1U & (IData)(vlSelf->SOC__DOT____Vcellinp__RAM__mem_wmask))) {
        vlSelf->SOC__DOT__RAM__DOT____Vlvbound_h8baf4682__0 
            = (0xffU & vlSelf->SOC__DOT__mem_wdata);
        if ((0x5ffU >= (0x7ffU & (vlSelf->SOC__DOT__mem_addr 
                                  >> 2U)))) {
            __Vdlyvval__SOC__DOT__RAM__DOT__MEM__v0 
                = vlSelf->SOC__DOT__RAM__DOT____Vlvbound_h8baf4682__0;
            __Vdlyvset__SOC__DOT__RAM__DOT__MEM__v0 = 1U;
            __Vdlyvlsb__SOC__DOT__RAM__DOT__MEM__v0 = 0U;
            __Vdlyvdim0__SOC__DOT__RAM__DOT__MEM__v0 
                = (0x7ffU & (vlSelf->SOC__DOT__mem_addr 
                             >> 2U));
        }
    }
    if ((2U & (IData)(vlSelf->SOC__DOT____Vcellinp__RAM__mem_wmask))) {
        vlSelf->SOC__DOT__RAM__DOT____Vlvbound_h8baec87f__0 
            = (0xffU & (vlSelf->SOC__DOT__mem_wdata 
                        >> 8U));
        if ((0x5ffU >= (0x7ffU & (vlSelf->SOC__DOT__mem_addr 
                                  >> 2U)))) {
            __Vdlyvval__SOC__DOT__RAM__DOT__MEM__v1 
                = vlSelf->SOC__DOT__RAM__DOT____Vlvbound_h8baec87f__0;
            __Vdlyvset__SOC__DOT__RAM__DOT__MEM__v1 = 1U;
            __Vdlyvlsb__SOC__DOT__RAM__DOT__MEM__v1 = 8U;
            __Vdlyvdim0__SOC__DOT__RAM__DOT__MEM__v1 
                = (0x7ffU & (vlSelf->SOC__DOT__mem_addr 
                             >> 2U));
        }
    }
    if ((4U & (IData)(vlSelf->SOC__DOT____Vcellinp__RAM__mem_wmask))) {
        vlSelf->SOC__DOT__RAM__DOT____Vlvbound_h8b826fe1__0 
            = (0xffU & (vlSelf->SOC__DOT__mem_wdata 
                        >> 0x10U));
        if ((0x5ffU >= (0x7ffU & (vlSelf->SOC__DOT__mem_addr 
                                  >> 2U)))) {
            __Vdlyvval__SOC__DOT__RAM__DOT__MEM__v2 
                = vlSelf->SOC__DOT__RAM__DOT____Vlvbound_h8b826fe1__0;
            __Vdlyvset__SOC__DOT__RAM__DOT__MEM__v2 = 1U;
            __Vdlyvlsb__SOC__DOT__RAM__DOT__MEM__v2 = 0x10U;
            __Vdlyvdim0__SOC__DOT__RAM__DOT__MEM__v2 
                = (0x7ffU & (vlSelf->SOC__DOT__mem_addr 
                             >> 2U));
        }
    }
    if ((8U & (IData)(vlSelf->SOC__DOT____Vcellinp__RAM__mem_wmask))) {
        vlSelf->SOC__DOT__RAM__DOT____Vlvbound_h8b81ede2__0 
            = (vlSelf->SOC__DOT__mem_wdata >> 0x18U);
        if ((0x5ffU >= (0x7ffU & (vlSelf->SOC__DOT__mem_addr 
                                  >> 2U)))) {
            __Vdlyvval__SOC__DOT__RAM__DOT__MEM__v3 
                = vlSelf->SOC__DOT__RAM__DOT____Vlvbound_h8b81ede2__0;
            __Vdlyvset__SOC__DOT__RAM__DOT__MEM__v3 = 1U;
            __Vdlyvlsb__SOC__DOT__RAM__DOT__MEM__v3 = 0x18U;
            __Vdlyvdim0__SOC__DOT__RAM__DOT__MEM__v3 
                = (0x7ffU & (vlSelf->SOC__DOT__mem_addr 
                             >> 2U));
        }
    }
    if ((0xffffU == (IData)(vlSelf->SOC__DOT__CW__DOT__genblk1__DOT__reset_cnt))) {
        if ((0U == (IData)(vlSelf->SOC__DOT__CPU__DOT__state))) {
            __Vdly__SOC__DOT__CPU__DOT__state = 1U;
        } else if ((1U == (IData)(vlSelf->SOC__DOT__CPU__DOT__state))) {
            vlSelf->SOC__DOT__CPU__DOT__instr = vlSelf->SOC__DOT__mem_rdata;
            __Vdly__SOC__DOT__CPU__DOT__state = 2U;
        } else if ((2U == (IData)(vlSelf->SOC__DOT__CPU__DOT__state))) {
            vlSelf->SOC__DOT__CPU__DOT__rs1 = vlSelf->SOC__DOT__CPU__DOT__RegisterBank
                [vlSelf->SOC__DOT__CPU__DOT__rs1Id];
            __Vdly__SOC__DOT__CPU__DOT__state = 3U;
            vlSelf->SOC__DOT__CPU__DOT__rs2 = vlSelf->SOC__DOT__CPU__DOT__RegisterBank
                [vlSelf->SOC__DOT__CPU__DOT__rs2Id];
        } else if ((3U == (IData)(vlSelf->SOC__DOT__CPU__DOT__state))) {
            if (VL_UNLIKELY(vlSelf->SOC__DOT__CPU__DOT__isSYSTEM)) {
                VL_FINISH_MT("step20.v", 286, "");
            }
            if ((1U & (~ (IData)(vlSelf->SOC__DOT__CPU__DOT__isSYSTEM)))) {
                vlSelf->SOC__DOT__CPU__DOT__PC = vlSelf->SOC__DOT__CPU__DOT__nextPC;
            }
            __Vdly__SOC__DOT__CPU__DOT__state = ((IData)(vlSelf->SOC__DOT__CPU__DOT__isLoad)
                                                  ? 4U
                                                  : 
                                                 ((IData)(vlSelf->SOC__DOT__CPU__DOT__isStore)
                                                   ? 6U
                                                   : 0U));
        } else if ((4U == (IData)(vlSelf->SOC__DOT__CPU__DOT__state))) {
            __Vdly__SOC__DOT__CPU__DOT__state = 5U;
        } else if ((5U == (IData)(vlSelf->SOC__DOT__CPU__DOT__state))) {
            __Vdly__SOC__DOT__CPU__DOT__state = 0U;
        } else if ((6U == (IData)(vlSelf->SOC__DOT__CPU__DOT__state))) {
            __Vdly__SOC__DOT__CPU__DOT__state = 0U;
        }
        if (((IData)(vlSelf->SOC__DOT__CPU__DOT__writeBackEn) 
             & (0U != (IData)(vlSelf->SOC__DOT__CPU__DOT__rdId)))) {
            __Vdlyvval__SOC__DOT__CPU__DOT__RegisterBank__v0 
                = vlSelf->SOC__DOT__CPU__DOT__writeBackData;
            __Vdlyvset__SOC__DOT__CPU__DOT__RegisterBank__v0 = 1U;
            __Vdlyvdim0__SOC__DOT__CPU__DOT__RegisterBank__v0 
                = vlSelf->SOC__DOT__CPU__DOT__rdId;
        }
    } else {
        vlSelf->SOC__DOT__CPU__DOT__PC = 0U;
        __Vdly__SOC__DOT__CPU__DOT__state = 0U;
    }
    vlSelf->SOC__DOT__UART__DOT__cnt = __Vdly__SOC__DOT__UART__DOT__cnt;
    vlSelf->SOC__DOT__uart_ready = __Vdly__SOC__DOT__uart_ready;
    if (__Vdlyvset__SOC__DOT__RAM__DOT__MEM__v0) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[__Vdlyvdim0__SOC__DOT__RAM__DOT__MEM__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__SOC__DOT__RAM__DOT__MEM__v0))) 
                & vlSelf->SOC__DOT__RAM__DOT__MEM[__Vdlyvdim0__SOC__DOT__RAM__DOT__MEM__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__SOC__DOT__RAM__DOT__MEM__v0) 
                                   << (IData)(__Vdlyvlsb__SOC__DOT__RAM__DOT__MEM__v0))));
    }
    if (__Vdlyvset__SOC__DOT__RAM__DOT__MEM__v1) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[__Vdlyvdim0__SOC__DOT__RAM__DOT__MEM__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__SOC__DOT__RAM__DOT__MEM__v1))) 
                & vlSelf->SOC__DOT__RAM__DOT__MEM[__Vdlyvdim0__SOC__DOT__RAM__DOT__MEM__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__SOC__DOT__RAM__DOT__MEM__v1) 
                                   << (IData)(__Vdlyvlsb__SOC__DOT__RAM__DOT__MEM__v1))));
    }
    if (__Vdlyvset__SOC__DOT__RAM__DOT__MEM__v2) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[__Vdlyvdim0__SOC__DOT__RAM__DOT__MEM__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__SOC__DOT__RAM__DOT__MEM__v2))) 
                & vlSelf->SOC__DOT__RAM__DOT__MEM[__Vdlyvdim0__SOC__DOT__RAM__DOT__MEM__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__SOC__DOT__RAM__DOT__MEM__v2) 
                                   << (IData)(__Vdlyvlsb__SOC__DOT__RAM__DOT__MEM__v2))));
    }
    if (__Vdlyvset__SOC__DOT__RAM__DOT__MEM__v3) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[__Vdlyvdim0__SOC__DOT__RAM__DOT__MEM__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__SOC__DOT__RAM__DOT__MEM__v3))) 
                & vlSelf->SOC__DOT__RAM__DOT__MEM[__Vdlyvdim0__SOC__DOT__RAM__DOT__MEM__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__SOC__DOT__RAM__DOT__MEM__v3) 
                                   << (IData)(__Vdlyvlsb__SOC__DOT__RAM__DOT__MEM__v3))));
    }
    if (__Vdlyvset__SOC__DOT__CPU__DOT__RegisterBank__v0) {
        vlSelf->SOC__DOT__CPU__DOT__RegisterBank[__Vdlyvdim0__SOC__DOT__CPU__DOT__RegisterBank__v0] 
            = __Vdlyvval__SOC__DOT__CPU__DOT__RegisterBank__v0;
    }
    vlSelf->SOC__DOT__CPU__DOT__state = __Vdly__SOC__DOT__CPU__DOT__state;
    vlSelf->TXD = (1U & ((IData)(vlSelf->SOC__DOT__UART__DOT__data) 
                         | (~ (IData)((0U != (IData)(vlSelf->SOC__DOT__UART__DOT__data))))));
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

VL_INLINE_OPT void VSOC___024root___sequent__TOP__2(VSOC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___sequent__TOP__2\n"); );
    // Body
    vlSelf->SOC__DOT__CW__DOT__genblk1__DOT__reset_cnt 
        = vlSelf->__Vdly__SOC__DOT__CW__DOT__genblk1__DOT__reset_cnt;
    vlSelf->SOC__DOT__resetn = (0xffffU == (IData)(vlSelf->SOC__DOT__CW__DOT__genblk1__DOT__reset_cnt));
}

void VSOC___024root___eval(VSOC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->CLK) & (~ (IData)(vlSelf->__Vclklast__TOP__CLK))) 
         | ((IData)(vlSelf->RESET) & (~ (IData)(vlSelf->__Vclklast__TOP__RESET))))) {
        VSOC___024root___sequent__TOP__0(vlSelf);
    }
    if (((IData)(vlSelf->CLK) & (~ (IData)(vlSelf->__Vclklast__TOP__CLK)))) {
        VSOC___024root___sequent__TOP__1(vlSelf);
    }
    if ((((IData)(vlSelf->CLK) & (~ (IData)(vlSelf->__Vclklast__TOP__CLK))) 
         | ((IData)(vlSelf->RESET) & (~ (IData)(vlSelf->__Vclklast__TOP__RESET))))) {
        VSOC___024root___sequent__TOP__2(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__CLK = vlSelf->CLK;
    vlSelf->__Vclklast__TOP__RESET = vlSelf->RESET;
}

#ifdef VL_DEBUG
void VSOC___024root___eval_debug_assertions(VSOC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->CLK & 0xfeU))) {
        Verilated::overWidthError("CLK");}
    if (VL_UNLIKELY((vlSelf->RESET & 0xfeU))) {
        Verilated::overWidthError("RESET");}
    if (VL_UNLIKELY((vlSelf->RXD & 0xfeU))) {
        Verilated::overWidthError("RXD");}
}
#endif  // VL_DEBUG
