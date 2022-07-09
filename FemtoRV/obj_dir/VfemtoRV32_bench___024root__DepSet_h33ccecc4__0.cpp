// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VfemtoRV32_bench.h for the primary calling header

#include "verilated.h"

#include "VfemtoRV32_bench___024root.h"

VL_INLINE_OPT void VfemtoRV32_bench___024root___sequent__TOP__0(VfemtoRV32_bench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VfemtoRV32_bench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfemtoRV32_bench___024root___sequent__TOP__0\n"); );
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
    IData/*31:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__z;
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
    SData/*13:0*/ __Vdlyvdim0__femtoRV32_bench__DOT__uut__DOT__RAM__v0;
    CData/*4:0*/ __Vdlyvlsb__femtoRV32_bench__DOT__uut__DOT__RAM__v0;
    CData/*7:0*/ __Vdlyvval__femtoRV32_bench__DOT__uut__DOT__RAM__v0;
    CData/*0:0*/ __Vdlyvset__femtoRV32_bench__DOT__uut__DOT__RAM__v0;
    SData/*13:0*/ __Vdlyvdim0__femtoRV32_bench__DOT__uut__DOT__RAM__v1;
    CData/*4:0*/ __Vdlyvlsb__femtoRV32_bench__DOT__uut__DOT__RAM__v1;
    CData/*7:0*/ __Vdlyvval__femtoRV32_bench__DOT__uut__DOT__RAM__v1;
    CData/*0:0*/ __Vdlyvset__femtoRV32_bench__DOT__uut__DOT__RAM__v1;
    SData/*13:0*/ __Vdlyvdim0__femtoRV32_bench__DOT__uut__DOT__RAM__v2;
    CData/*4:0*/ __Vdlyvlsb__femtoRV32_bench__DOT__uut__DOT__RAM__v2;
    CData/*7:0*/ __Vdlyvval__femtoRV32_bench__DOT__uut__DOT__RAM__v2;
    CData/*0:0*/ __Vdlyvset__femtoRV32_bench__DOT__uut__DOT__RAM__v2;
    SData/*13:0*/ __Vdlyvdim0__femtoRV32_bench__DOT__uut__DOT__RAM__v3;
    CData/*4:0*/ __Vdlyvlsb__femtoRV32_bench__DOT__uut__DOT__RAM__v3;
    CData/*7:0*/ __Vdlyvval__femtoRV32_bench__DOT__uut__DOT__RAM__v3;
    CData/*0:0*/ __Vdlyvset__femtoRV32_bench__DOT__uut__DOT__RAM__v3;
    CData/*0:0*/ __Vdly__oled_CS;
    SData/*15:0*/ __Vdly__femtoRV32_bench__DOT__uut__DOT__oled_display__DOT__shifter;
    CData/*4:0*/ __Vdly__femtoRV32_bench__DOT__uut__DOT__oled_display__DOT__bitcount;
    CData/*0:0*/ __Vdly__femtoRV32_bench__DOT__uut__DOT__oled_display__DOT__genblk1__DOT__slow_clk__DOT__slow_cnt;
    IData/*31:0*/ __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__dividend;
    QData/*62:0*/ __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__divisor;
    IData/*31:0*/ __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__quotient;
    CData/*5:0*/ __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__div_cnt;
    CData/*5:0*/ __Vdlyvdim0__femtoRV32_bench__DOT__uut__DOT__processor__DOT__registerFile__v0;
    IData/*31:0*/ __Vdlyvval__femtoRV32_bench__DOT__uut__DOT__processor__DOT__registerFile__v0;
    CData/*0:0*/ __Vdlyvset__femtoRV32_bench__DOT__uut__DOT__processor__DOT__registerFile__v0;
    IData/*29:0*/ __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr;
    CData/*5:0*/ __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__state;
    IData/*23:0*/ __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__PC;
    CData/*0:0*/ __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_sign;
    CData/*7:0*/ __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_exp;
    IData/*23:0*/ __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_frac;
    CData/*0:0*/ __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_sign;
    CData/*7:0*/ __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_exp;
    IData/*23:0*/ __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_frac;
    CData/*0:0*/ __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__C_sign;
    CData/*7:0*/ __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__C_exp;
    IData/*23:0*/ __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__C_frac;
    CData/*0:0*/ __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__E_sign;
    CData/*7:0*/ __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__E_exp;
    IData/*23:0*/ __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__E_frac;
    CData/*0:0*/ __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign;
    SData/*8:0*/ __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp;
    QData/*49:0*/ __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac;
    CData/*0:0*/ __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_sign;
    QData/*49:0*/ __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_frac;
    SData/*8:0*/ __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_exp;
    CData/*5:0*/ __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__norm_lshamt;
    SData/*8:0*/ __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp_norm;
    CData/*0:0*/ __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__D_sign;
    CData/*7:0*/ __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__D_exp;
    IData/*23:0*/ __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__D_frac;
    CData/*0:0*/ __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__active;
    // Body
    __Vdly__femtoRV32_bench__DOT__uut__DOT__oled_display__DOT__genblk1__DOT__slow_clk__DOT__slow_cnt 
        = vlSelf->femtoRV32_bench__DOT__uut__DOT__oled_display__DOT__genblk1__DOT__slow_clk__DOT__slow_cnt;
    __Vdly__oled_CS = vlSelf->oled_CS;
    __Vdly__femtoRV32_bench__DOT__uut__DOT__oled_display__DOT__bitcount 
        = vlSelf->femtoRV32_bench__DOT__uut__DOT__oled_display__DOT__bitcount;
    __Vdly__femtoRV32_bench__DOT__uut__DOT__oled_display__DOT__shifter 
        = vlSelf->femtoRV32_bench__DOT__uut__DOT__oled_display__DOT__shifter;
    __Vdlyvset__femtoRV32_bench__DOT__uut__DOT__RAM__v0 = 0U;
    __Vdlyvset__femtoRV32_bench__DOT__uut__DOT__RAM__v1 = 0U;
    __Vdlyvset__femtoRV32_bench__DOT__uut__DOT__RAM__v2 = 0U;
    __Vdlyvset__femtoRV32_bench__DOT__uut__DOT__RAM__v3 = 0U;
    __Vdlyvset__femtoRV32_bench__DOT__uut__DOT__processor__DOT__registerFile__v0 = 0U;
    __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__quotient 
        = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__quotient;
    __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__divisor 
        = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__divisor;
    __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__dividend 
        = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__dividend;
    __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__div_cnt 
        = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__div_cnt;
    __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__state 
        = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__state;
    __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__PC 
        = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__PC;
    __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__active 
        = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__active;
    __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__D_frac 
        = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__D_frac;
    __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__D_exp 
        = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__D_exp;
    __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__D_sign 
        = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__D_sign;
    __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp_norm 
        = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp_norm;
    __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__norm_lshamt 
        = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__norm_lshamt;
    __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__E_frac 
        = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__E_frac;
    __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__E_sign 
        = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__E_sign;
    __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__C_frac 
        = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__C_frac;
    __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__C_exp 
        = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__C_exp;
    __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__C_sign 
        = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__C_sign;
    __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_sign 
        = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_sign;
    __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_sign 
        = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_sign;
    __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__E_exp 
        = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__E_exp;
    __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_exp 
        = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_exp;
    __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_sign 
        = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_sign;
    __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_exp 
        = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_exp;
    __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign 
        = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign;
    __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_frac 
        = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_frac;
    __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_frac 
        = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_frac;
    __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_exp 
        = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_exp;
    __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp 
        = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp;
    __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_frac 
        = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_frac;
    __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac 
        = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac;
    __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
        = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr;
    if (VL_UNLIKELY(((vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_address 
                      >> 3U) & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__io_wstrb)))) {
        if (VL_UNLIKELY((4U == vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_wdata))) {
            VL_WRITEF("<end of simulation> (EOT sent to UART)\n");
            VL_FINISH_MT("RTL/DEVICES/uart.v", 32, "");
        }
        VL_WRITEF("%c",8,(0xffU & vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_wdata));
        if (0x80000001U) { VL_FFLUSH_I(0x80000001U); }
    }
    __Vdly__femtoRV32_bench__DOT__uut__DOT__oled_display__DOT__genblk1__DOT__slow_clk__DOT__slow_cnt 
        = (1U & ((IData)(1U) + (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__oled_display__DOT__genblk1__DOT__slow_clk__DOT__slow_cnt)));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_PC 
        = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_PC_next;
    vlSelf->femtoRV32_bench__DOT__uut__DOT__reset_cnt 
        = (0xffffU & ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__reset_cnt) 
                      + (1U & (~ (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__reset)))));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__cycles 
        = (1ULL + vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__cycles);
    if (vlSelf->femtoRV32_bench__DOT__uut__DOT__io_wstrb) {
        if ((0x40U & vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_address)) {
            vlSelf->oled_DC = 0U;
        }
        if ((0x80U & vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_address)) {
            vlSelf->oled_DC = 1U;
        }
        if ((0x20U & vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_address)) {
            vlSelf->oled_RST = (1U & (vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_wdata 
                                      >> 1U));
            __Vdly__oled_CS = (1U & (~ vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_wdata));
        }
        if ((0x40U & vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_address)) {
            vlSelf->oled_RST = 1U;
            __Vdly__femtoRV32_bench__DOT__uut__DOT__oled_display__DOT__shifter 
                = (0xff00U & (vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_wdata 
                              << 8U));
            __Vdly__femtoRV32_bench__DOT__uut__DOT__oled_display__DOT__bitcount = 8U;
            __Vdly__oled_CS = 1U;
        }
        if ((0x80U & vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_address)) {
            vlSelf->oled_RST = 1U;
            __Vdly__femtoRV32_bench__DOT__uut__DOT__oled_display__DOT__shifter 
                = (0xff00U & (vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_wdata 
                              << 8U));
            __Vdly__femtoRV32_bench__DOT__uut__DOT__oled_display__DOT__bitcount = 8U;
            __Vdly__oled_CS = 1U;
        }
        if ((0x100U & vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_address)) {
            vlSelf->oled_DC = 1U;
            vlSelf->oled_RST = 1U;
            __Vdly__femtoRV32_bench__DOT__uut__DOT__oled_display__DOT__shifter 
                = (0xffffU & vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_wdata);
            __Vdly__femtoRV32_bench__DOT__uut__DOT__oled_display__DOT__bitcount = 0x10U;
            __Vdly__oled_CS = 1U;
        }
    } else if (vlSelf->femtoRV32_bench__DOT__uut__DOT__oled_display__DOT__genblk1__DOT__slow_clk__DOT__slow_cnt) {
        if (vlSelf->femtoRV32_bench__DOT__uut__DOT__oled_display__DOT__sending) {
            if (vlSelf->oled_CS) {
                __Vdly__oled_CS = 0U;
            } else {
                __Vdly__femtoRV32_bench__DOT__uut__DOT__oled_display__DOT__bitcount 
                    = (0x1fU & ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__oled_display__DOT__bitcount) 
                                - (IData)(1U)));
                __Vdly__femtoRV32_bench__DOT__uut__DOT__oled_display__DOT__shifter 
                    = (0xfffeU & ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__oled_display__DOT__shifter) 
                                  << 1U));
            }
        } else {
            __Vdly__oled_CS = 1U;
        }
    }
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__interrupt_request_sticky 
        = ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__interrupt_request_sticky) 
           & (~ ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__interrupt) 
                 & ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__state) 
                    >> 3U))));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__ram_rdata 
        = vlSelf->femtoRV32_bench__DOT__uut__DOT__RAM
        [(0x3fffU & (vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_address 
                     >> 2U))];
    vlSelf->femtoRV32_bench__DOT__uut__DOT__io_rdata 
        = (((0x80000U & vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_address)
             ? 0x10000U : ((0x100000U & vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_address)
                            ? 0x3fU : ((0x200000U & vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_address)
                                        ? 0x10020U : 0U))) 
           | ((4U & vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_address)
               ? (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__leds__DOT__led_state)
               : 0U));
    if ((1U & (~ (vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_address 
                  >> 0x16U)))) {
        if ((1U & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_wmask))) {
            __Vdlyvval__femtoRV32_bench__DOT__uut__DOT__RAM__v0 
                = (0xffU & vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_wdata);
            __Vdlyvset__femtoRV32_bench__DOT__uut__DOT__RAM__v0 = 1U;
            __Vdlyvlsb__femtoRV32_bench__DOT__uut__DOT__RAM__v0 = 0U;
            __Vdlyvdim0__femtoRV32_bench__DOT__uut__DOT__RAM__v0 
                = (0x3fffU & (vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_address 
                              >> 2U));
        }
        if ((2U & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_wmask))) {
            __Vdlyvval__femtoRV32_bench__DOT__uut__DOT__RAM__v1 
                = (0xffU & (vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_wdata 
                            >> 8U));
            __Vdlyvset__femtoRV32_bench__DOT__uut__DOT__RAM__v1 = 1U;
            __Vdlyvlsb__femtoRV32_bench__DOT__uut__DOT__RAM__v1 = 8U;
            __Vdlyvdim0__femtoRV32_bench__DOT__uut__DOT__RAM__v1 
                = (0x3fffU & (vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_address 
                              >> 2U));
        }
        if ((4U & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_wmask))) {
            __Vdlyvval__femtoRV32_bench__DOT__uut__DOT__RAM__v2 
                = (0xffU & (vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_wdata 
                            >> 0x10U));
            __Vdlyvset__femtoRV32_bench__DOT__uut__DOT__RAM__v2 = 1U;
            __Vdlyvlsb__femtoRV32_bench__DOT__uut__DOT__RAM__v2 = 0x10U;
            __Vdlyvdim0__femtoRV32_bench__DOT__uut__DOT__RAM__v2 
                = (0x3fffU & (vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_address 
                              >> 2U));
        }
        if ((8U & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_wmask))) {
            __Vdlyvval__femtoRV32_bench__DOT__uut__DOT__RAM__v3 
                = (vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_wdata 
                   >> 0x18U);
            __Vdlyvset__femtoRV32_bench__DOT__uut__DOT__RAM__v3 = 1U;
            __Vdlyvlsb__femtoRV32_bench__DOT__uut__DOT__RAM__v3 = 0x18U;
            __Vdlyvdim0__femtoRV32_bench__DOT__uut__DOT__RAM__v3 
                = (0x3fffU & (vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_address 
                              >> 2U));
        }
    }
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__aluOut_mul 
        = ((1U & ((IData)(1U) << (7U & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                                        >> 0xaU))))
            ? (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__multiply)
            : (IData)((vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__multiply 
                       >> 0x20U)));
    if ((1U & (~ ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__state) 
                  >> 1U)))) {
        if ((1U & (~ ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__state) 
                      >> 2U)))) {
            if ((1U & ((((~ ((0x18U == (0x1fU & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)) 
                             | (4U == (0xfU & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                                               >> 1U))))) 
                         & ((0x1fU >= (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                             ? ((IData)(1U) << (0x3fU 
                                                & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                             : 0U)) & (IData)((0U != 
                                               (0x38U 
                                                & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__state))))) 
                       & ((0x1fU >= (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                           ? ((IData)(1U) << (0x3fU 
                                              & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                           : 0U)))) {
                if (((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rdIsFP) 
                     | (0U != (0x3e0U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)))) {
                    __Vdlyvval__femtoRV32_bench__DOT__uut__DOT__processor__DOT__registerFile__v0 
                        = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__writeBackData;
                    __Vdlyvset__femtoRV32_bench__DOT__uut__DOT__processor__DOT__registerFile__v0 = 1U;
                    __Vdlyvdim0__femtoRV32_bench__DOT__uut__DOT__processor__DOT__registerFile__v0 
                        = (((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rdIsFP) 
                            << 5U) | (0x1fU & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                                               >> 5U)));
                }
            }
        }
    }
    if (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__aluWr) {
        __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__dividend 
            = ((IData)(((~ (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                            >> 0xaU)) & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1 
                                         >> 0x1fU)))
                ? (- vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1)
                : vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1);
        __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__divisor 
            = ((QData)((IData)(((IData)(((~ (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                                             >> 0xaU)) 
                                         & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__aluIn2 
                                            >> 0x1fU)))
                                 ? (- vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__aluIn2)
                                 : vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__aluIn2))) 
               << 0x1fU);
        __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__quotient = 0U;
        __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__div_cnt 
            = ((IData)((0x80100cU == (0x80101fU & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)))
                ? 0x21U : 0U);
    } else if (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__aluBusy) {
        __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__div_cnt 
            = (0x3fU & ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__div_cnt) 
                        - (IData)(1U)));
    }
    if ((0U != (0x1fU & ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__div_cnt) 
                         >> 1U)))) {
        __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__divisor 
            = (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__divisor 
               >> 1U);
        if ((vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__divisor 
             <= (QData)((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__dividend)))) {
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__quotient 
                = (1U | (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__quotient 
                         << 1U));
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__dividend 
                = (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__dividend 
                   - (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__divisor));
        } else {
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__quotient 
                = (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__quotient 
                   << 1U);
        }
    }
    if (((vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
          >> 0xbU) & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__div_sign))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__aluOut_div 
            = (- vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__dividend);
    } else if ((1U & ((vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                       >> 0xbU) & (~ (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__div_sign))))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__aluOut_div 
            = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__dividend;
    } else if (((~ (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                    >> 0xbU)) & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__div_sign))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__aluOut_div 
            = (- vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__quotient);
    } else if ((1U & ((~ (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                          >> 0xbU)) & (~ (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__div_sign))))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__aluOut_div 
            = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__quotient;
    }
    if (vlSelf->femtoRV32_bench__DOT__uut__DOT____Vcellinp__processor__reset) {
        if ((((0x1cU == (0x1fU & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)) 
              & (0U != (7U & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                              >> 0xaU)))) & ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__state) 
                                             >> 3U))) {
            if ((0x300U == (0xfffU & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                                      >> 0x12U)))) {
                vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__mstatus 
                    = (1U & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__CSR_write 
                             >> 3U));
            }
        }
    } else {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__mstatus = 0U;
    }
    if (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT____Vcellinp__FPU__wr) {
        __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__active = 1U;
    }
    if (((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__active) 
         & ((0x1fU >= (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
             ? ((IData)(1U) << (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
             : 0U))) {
        __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__active = 0U;
        if (((((((((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFMUL) 
                   | (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFADD)) 
                  | (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFSUB)) 
                 | (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFDIV)) 
                | (0U == (7U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr))) 
               | (1U == (7U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr))) 
              | (3U == (7U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr))) 
             | (2U == (7U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)))) {
            if (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFMUL) {
                femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__z 
                    = 
                // $c function at RTL/PROCESSOR/petitbateau.v:795:13
CHECK_FMUL(                (((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign) 
                             << 0x1fU) | ((0x7f800000U 
                                           & ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp) 
                                              << 0x17U)) 
                                          | (0x7fffffU 
                                             & (IData)(
                                                       (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac 
                                                        >> 0x18U))))),vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1,vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs2)
                ;
            } else if (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFADD) {
                femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__z 
                    = 
                // $c function at RTL/PROCESSOR/petitbateau.v:796:13
CHECK_FADD(                (((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign) 
                             << 0x1fU) | ((0x7f800000U 
                                           & ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp) 
                                              << 0x17U)) 
                                          | (0x7fffffU 
                                             & (IData)(
                                                       (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac 
                                                        >> 0x18U))))),vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1,vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs2)
                ;
            } else if (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFSUB) {
                femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__z 
                    = 
                // $c function at RTL/PROCESSOR/petitbateau.v:797:13
CHECK_FSUB(                (((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign) 
                             << 0x1fU) | ((0x7f800000U 
                                           & ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp) 
                                              << 0x17U)) 
                                          | (0x7fffffU 
                                             & (IData)(
                                                       (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac 
                                                        >> 0x18U))))),vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1,vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs2)
                ;
            } else if (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFDIV) {
                femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__z 
                    = 
                // $c function at RTL/PROCESSOR/petitbateau.v:798:13
CHECK_FDIV(                (((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign) 
                             << 0x1fU) | ((0x7f800000U 
                                           & ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp) 
                                              << 0x17U)) 
                                          | (0x7fffffU 
                                             & (IData)(
                                                       (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac 
                                                        >> 0x18U))))),vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1,vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs2)
                ;
            } else if ((0U == (7U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr))) {
                femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__z 
                    = 
                // $c function at RTL/PROCESSOR/petitbateau.v:800:13
CHECK_FMADD(                (((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign) 
                              << 0x1fU) | ((0x7f800000U 
                                            & ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp) 
                                               << 0x17U)) 
                                           | (0x7fffffU 
                                              & (IData)(
                                                        (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac 
                                                         >> 0x18U))))),vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1,vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs2,vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs3)
                ;
            } else if ((1U == (7U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr))) {
                femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__z 
                    = 
                // $c function at RTL/PROCESSOR/petitbateau.v:801:13
CHECK_FMSUB(                (((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign) 
                              << 0x1fU) | ((0x7f800000U 
                                            & ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp) 
                                               << 0x17U)) 
                                           | (0x7fffffU 
                                              & (IData)(
                                                        (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac 
                                                         >> 0x18U))))),vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1,vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs2,vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs3)
                ;
            } else if ((3U == (7U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr))) {
                femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__z 
                    = 
                // $c function at RTL/PROCESSOR/petitbateau.v:802:13
CHECK_FNMADD(                (((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign) 
                               << 0x1fU) | ((0x7f800000U 
                                             & ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp) 
                                                << 0x17U)) 
                                            | (0x7fffffU 
                                               & (IData)(
                                                         (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac 
                                                          >> 0x18U))))),vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1,vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs2,vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs3)
                ;
            } else {
                femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__z 
                    = 
                // $c function at RTL/PROCESSOR/petitbateau.v:803:13
CHECK_FNMSUB(                (((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign) 
                               << 0x1fU) | ((0x7f800000U 
                                             & ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp) 
                                                << 0x17U)) 
                                            | (0x7fffffU 
                                               & (IData)(
                                                         (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac 
                                                          >> 0x18U))))),vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1,vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs2,vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs3)
                ;
            }
        } else if (((((((((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFEQ) 
                          | (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFLT)) 
                         | (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFLE)) 
                        | (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFCVTWS)) 
                       | (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFCVTWUS)) 
                      | (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFCVTSW)) 
                     | (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFCVTSWU)) 
                    | (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFMIN))) {
            if (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFEQ) {
                femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__z 
                    = 
                // $c function at RTL/PROCESSOR/petitbateau.v:804:13
CHECK_FEQ(                (((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign) 
                            << 0x1fU) | ((0x7f800000U 
                                          & ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp) 
                                             << 0x17U)) 
                                         | (0x7fffffU 
                                            & (IData)(
                                                      (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac 
                                                       >> 0x18U))))),vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1,vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs2)
                ;
            } else if (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFLT) {
                femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__z 
                    = 
                // $c function at RTL/PROCESSOR/petitbateau.v:805:13
CHECK_FLT(                (((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign) 
                            << 0x1fU) | ((0x7f800000U 
                                          & ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp) 
                                             << 0x17U)) 
                                         | (0x7fffffU 
                                            & (IData)(
                                                      (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac 
                                                       >> 0x18U))))),vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1,vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs2)
                ;
            } else if (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFLE) {
                femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__z 
                    = 
                // $c function at RTL/PROCESSOR/petitbateau.v:806:13
CHECK_FLE(                (((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign) 
                            << 0x1fU) | ((0x7f800000U 
                                          & ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp) 
                                             << 0x17U)) 
                                         | (0x7fffffU 
                                            & (IData)(
                                                      (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac 
                                                       >> 0x18U))))),vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1,vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs2)
                ;
            } else if (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFCVTWS) {
                femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__z 
                    = 
                // $c function at RTL/PROCESSOR/petitbateau.v:807:13
CHECK_FCVTWS(                (((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign) 
                               << 0x1fU) | ((0x7f800000U 
                                             & ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp) 
                                                << 0x17U)) 
                                            | (0x7fffffU 
                                               & (IData)(
                                                         (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac 
                                                          >> 0x18U))))),vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1)
                ;
            } else if (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFCVTWUS) {
                femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__z 
                    = 
                // $c function at RTL/PROCESSOR/petitbateau.v:808:13
CHECK_FCVTWUS(                (((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign) 
                                << 0x1fU) | ((0x7f800000U 
                                              & ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp) 
                                                 << 0x17U)) 
                                             | (0x7fffffU 
                                                & (IData)(
                                                          (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac 
                                                           >> 0x18U))))),vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1)
                ;
            } else if (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFCVTSW) {
                femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__z 
                    = 
                // $c function at RTL/PROCESSOR/petitbateau.v:809:13
CHECK_FCVTSW(                (((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign) 
                               << 0x1fU) | ((0x7f800000U 
                                             & ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp) 
                                                << 0x17U)) 
                                            | (0x7fffffU 
                                               & (IData)(
                                                         (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac 
                                                          >> 0x18U))))),vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1)
                ;
            } else if (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFCVTSWU) {
                femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__z 
                    = 
                // $c function at RTL/PROCESSOR/petitbateau.v:810:13
CHECK_FCVTSWU(                (((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign) 
                                << 0x1fU) | ((0x7f800000U 
                                              & ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp) 
                                                 << 0x17U)) 
                                             | (0x7fffffU 
                                                & (IData)(
                                                          (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac 
                                                           >> 0x18U))))),vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1)
                ;
            } else {
                femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__z 
                    = 
                // $c function at RTL/PROCESSOR/petitbateau.v:811:13
CHECK_FMIN(                (((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign) 
                             << 0x1fU) | ((0x7f800000U 
                                           & ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp) 
                                              << 0x17U)) 
                                          | (0x7fffffU 
                                             & (IData)(
                                                       (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac 
                                                        >> 0x18U))))),vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1,vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs2)
                ;
            }
        } else if (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFMAX) {
            femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__z 
                = 
            // $c function at RTL/PROCESSOR/petitbateau.v:812:13
CHECK_FMAX(            (((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign) 
                         << 0x1fU) | ((0x7f800000U 
                                       & ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp) 
                                          << 0x17U)) 
                                      | (0x7fffffU 
                                         & (IData)(
                                                   (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac 
                                                    >> 0x18U))))),vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1,vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs2)
            ;
        }
    }
    if (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT____Vcellinp__FPU__wr) {
        __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_sign 
            = (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1 
               >> 0x1fU);
        __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_exp 
            = (0xffU & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1 
                        >> 0x17U));
        __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_frac 
            = ((0U != (0xffU & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1 
                                >> 0x17U))) ? (0x800000U 
                                               | (0x7fffffU 
                                                  & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1))
                : 0U);
        __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_sign 
            = (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs2 
               >> 0x1fU);
        __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_exp 
            = (0xffU & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs2 
                        >> 0x17U));
        __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_frac 
            = ((0U != (0xffU & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs2 
                                >> 0x17U))) ? (0x800000U 
                                               | (0x7fffffU 
                                                  & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs2))
                : 0U);
        __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__C_sign 
            = (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs3 
               >> 0x1fU);
        __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__C_exp 
            = (0xffU & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs3 
                        >> 0x17U));
        __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__C_frac 
            = ((0U != (0xffU & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs3 
                                >> 0x17U))) ? (0x800000U 
                                               | (0x7fffffU 
                                                  & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs3))
                : 0U);
        __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__E_sign 
            = (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1 
               >> 0x1fU);
        __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__E_exp 
            = (0xffU & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1 
                        >> 0x17U));
        __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__E_frac 
            = (0x800000U | (0x7fffffU & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1));
        if ((IData)((0x8000004U == (0x3e000c04U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)))) {
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign 
                = (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs2 
                   >> 0x1fU);
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp 
                = ((0x100U & (IData)(__Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp)) 
                   | (0xffU & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1 
                               >> 0x17U)));
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac 
                = ((0x3800000ffffffULL & __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac) 
                   | ((QData)((IData)((0x7fffffU & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1))) 
                      << 0x18U));
        } else if ((IData)((0x8000404U == (0x3e000c04U 
                                           & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)))) {
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign 
                = (1U & (~ (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs2 
                            >> 0x1fU)));
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp 
                = ((0x100U & (IData)(__Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp)) 
                   | (0xffU & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1 
                               >> 0x17U)));
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac 
                = ((0x3800000ffffffULL & __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac) 
                   | ((QData)((IData)((0x7fffffU & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1))) 
                      << 0x18U));
        } else if ((IData)((0x8000804U == (0x3e000c04U 
                                           & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)))) {
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign 
                = ((vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1 
                    ^ vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs2) 
                   >> 0x1fU);
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp 
                = ((0x100U & (IData)(__Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp)) 
                   | (0xffU & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1 
                               >> 0x17U)));
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac 
                = ((0x3800000ffffffULL & __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac) 
                   | ((QData)((IData)((0x7fffffU & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1))) 
                      << 0x18U));
        } else if ((IData)((0x38000404U == (0x3e000404U 
                                            & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)))) {
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign 
                = (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fclass 
                   >> 0x1fU);
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp 
                = ((0x100U & (IData)(__Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp)) 
                   | (0xffU & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fclass 
                               >> 0x17U)));
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac 
                = ((0x3800000ffffffULL & __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac) 
                   | ((QData)((IData)((0x7fffffU & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fclass))) 
                      << 0x18U));
        } else if (((IData)((0x38000004U == (0x3e000404U 
                                             & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr))) 
                    | (IData)((0x3c000004U == (0x3e000004U 
                                               & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr))))) {
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign 
                = (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1 
                   >> 0x1fU);
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp 
                = ((0x100U & (IData)(__Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp)) 
                   | (0xffU & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1 
                               >> 0x17U)));
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac 
                = ((0x3800000ffffffULL & __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac) 
                   | ((QData)((IData)((0x7fffffU & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1))) 
                      << 0x18U));
        }
    } else if ((1U & (~ ((0x1fU >= (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                          ? ((IData)(1U) << (0x3fU 
                                             & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                          : 0U)))) {
        if ((1U & ((((((((((0x1fU >= (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                            ? ((IData)(1U) << (0x3fU 
                                               & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                            : 0U) >> 1U) | (((0x1fU 
                                              >= (0x3fU 
                                                  & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                                              ? ((IData)(1U) 
                                                 << 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                                              : 0U) 
                                            >> 2U)) 
                        | (((0x1fU >= (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                             ? ((IData)(1U) << (0x3fU 
                                                & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                             : 0U) >> 3U)) | (((0x1fU 
                                                >= 
                                                (0x3fU 
                                                 & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                                                ? ((IData)(1U) 
                                                   << 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                                                : 0U) 
                                              >> 4U)) 
                      | (((0x1fU >= (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                           ? ((IData)(1U) << (0x3fU 
                                              & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                           : 0U) >> 5U)) | (((0x1fU 
                                              >= (0x3fU 
                                                  & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                                              ? ((IData)(1U) 
                                                 << 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                                              : 0U) 
                                            >> 6U)) 
                    | (((0x1fU >= (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                         ? ((IData)(1U) << (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                         : 0U) >> 0x17U)) | (((0x1fU 
                                               >= (0x3fU 
                                                   & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                                               ? ((IData)(1U) 
                                                  << 
                                                  (0x3fU 
                                                   & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                                               : 0U) 
                                             >> 7U)))) {
            if (((0x1fU >= (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                  ? (2U & ((IData)(1U) << (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr))))
                  : 0U)) {
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign 
                    = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_sign;
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac 
                    = ((QData)((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_frac)) 
                       << 0x18U);
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp 
                    = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_exp;
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_sign 
                    = ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_sign) 
                       ^ (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFSUB));
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_frac 
                    = ((QData)((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_frac)) 
                       << 0x18U);
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_exp 
                    = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_exp;
            } else if (((0x1fU >= (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                         ? (4U & ((IData)(1U) << (0x3fU 
                                                  & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr))))
                         : 0U)) {
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign 
                    = (((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_sign) 
                        ^ (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_sign)) 
                       ^ ((2U == (7U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)) 
                          | (3U == (7U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr))));
                if (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__prod_Z) {
                    __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac = 0ULL;
                    __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp = 0U;
                } else {
                    __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac 
                        = ((1U & (IData)((vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__prod_frac 
                                          >> 0x2fU)))
                            ? vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__prod_frac
                            : (0x3fffffffffffeULL & 
                               (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__prod_frac 
                                << 1U)));
                    __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp 
                        = (0x1ffU & VL_EXTENDS_II(32,9, (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__prod_exp_norm)));
                }
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_sign 
                    = ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__C_sign) 
                       ^ ((1U == (7U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)) 
                          | (3U == (7U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr))));
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_frac 
                    = ((QData)((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__C_frac)) 
                       << 0x18U);
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_exp 
                    = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__C_exp;
            } else if (((0x1fU >= (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                         ? (8U & ((IData)(1U) << (0x3fU 
                                                  & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr))))
                         : 0U)) {
                if (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fabsY_LT_fabsX) {
                    __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac 
                        = (0x3ffffffffffffULL & (((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign) 
                                                  ^ (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_sign))
                                                  ? 
                                                 (- vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_frac)
                                                  : vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_frac));
                    __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_exp 
                        = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp;
                    __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign 
                        = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_sign;
                    __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_frac 
                        = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac;
                    __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp 
                        = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_exp;
                    __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_sign 
                        = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign;
                } else if (((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign) 
                            ^ (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_sign))) {
                    __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac 
                        = (0x3ffffffffffffULL & (- vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac));
                }
            } else if (((0x1fU >= (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                         ? (0x10U & ((IData)(1U) << 
                                     (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr))))
                         : 0U)) {
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac 
                    = (0x3ffffffffffffULL & ((0x31U 
                                              >= (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__exp_diff))
                                              ? VL_SHIFTRS_QQI(50,50,9, vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac, (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__exp_diff))
                                              : (- 
                                                 (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac 
                                                  >> 0x31U))));
                if (VL_UNLIKELY(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fabsY_LT_fabsX)) {
                    VL_WRITEF("ADD_SHIFT: incorrect order\n");
                }
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp 
                    = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_exp;
            } else if (((0x1fU >= (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                         ? (0x20U & ((IData)(1U) << 
                                     (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr))))
                         : 0U)) {
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac 
                    = (0x3ffffffffffffULL & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__frac_sum);
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign 
                    = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_sign;
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__norm_lshamt 
                    = (0x3fU & ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__frac_sum_clz) 
                                - (IData)(0x10U)));
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp_norm 
                    = (0x1ffU & (((IData)(0x10U) + (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp)) 
                                 - (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__frac_sum_clz)));
            } else if (((0x1fU >= (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                         ? (0x40U & ((IData)(1U) << 
                                     (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr))))
                         : 0U)) {
                if ((VL_GTES_III(32, 0U, VL_EXTENDS_II(32,9, (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp_norm))) 
                     | (0ULL == vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac))) {
                    __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac = 0ULL;
                    __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp = 0U;
                } else {
                    __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac 
                        = (0x3ffffffffffffULL & ((1U 
                                                  & (IData)(
                                                            (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac 
                                                             >> 0x30U)))
                                                  ? 
                                                 (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac 
                                                  >> 1U)
                                                  : 
                                                 (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac 
                                                  << (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__norm_lshamt))));
                    __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp 
                        = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp_norm;
                }
            } else if (((0x1fU >= (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                         ? (0x800000U & ((IData)(1U) 
                                         << (0x3fU 
                                             & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr))))
                         : 0U)) {
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_sign 
                    = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign;
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_exp 
                    = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp;
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_frac 
                    = ((1U & (IData)((vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac 
                                      >> 0x17U))) ? 0x1000000ULL
                        : 0ULL);
            } else {
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign 
                    = (((((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFLT) 
                          & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_LT_Y)) 
                         | ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFLE) 
                            & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_LE_Y))) 
                        | ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFEQ) 
                           & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_EQ_Y))) 
                       >> 0x1fU);
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp 
                    = ((0x100U & (IData)(__Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp)) 
                       | (0xffU & (((((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFLT) 
                                      & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_LT_Y)) 
                                     | ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFLE) 
                                        & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_LE_Y))) 
                                    | ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFEQ) 
                                       & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_EQ_Y))) 
                                   >> 0x17U)));
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac 
                    = ((0x3800000ffffffULL & __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac) 
                       | ((QData)((IData)((0x7fffffU 
                                           & ((((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFLT) 
                                                & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_LT_Y)) 
                                               | ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFLE) 
                                                  & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_LE_Y))) 
                                              | ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFEQ) 
                                                 & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_EQ_Y)))))) 
                          << 0x18U));
            }
        } else if ((1U & ((((((((((0x1fU >= (0x3fU 
                                             & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                                   ? ((IData)(1U) << 
                                      (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                                   : 0U) >> 9U) | (
                                                   ((0x1fU 
                                                     >= 
                                                     (0x3fU 
                                                      & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                                                     ? 
                                                    ((IData)(1U) 
                                                     << 
                                                     (0x3fU 
                                                      & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                                                     : 0U) 
                                                   >> 0xbU)) 
                               | (((0x1fU >= (0x3fU 
                                              & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                                    ? ((IData)(1U) 
                                       << (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                                    : 0U) >> 8U)) | 
                              (((0x1fU >= (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                                 ? ((IData)(1U) << 
                                    (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                                 : 0U) >> 0xcU)) | 
                             (((0x1fU >= (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                                ? ((IData)(1U) << (0x3fU 
                                                   & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                                : 0U) >> 0xdU)) | (
                                                   ((0x1fU 
                                                     >= 
                                                     (0x3fU 
                                                      & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                                                     ? 
                                                    ((IData)(1U) 
                                                     << 
                                                     (0x3fU 
                                                      & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                                                     : 0U) 
                                                   >> 0xaU)) 
                           | (((0x1fU >= (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                                ? ((IData)(1U) << (0x3fU 
                                                   & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                                : 0U) >> 0xeU)) | (
                                                   ((0x1fU 
                                                     >= 
                                                     (0x3fU 
                                                      & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                                                     ? 
                                                    ((IData)(1U) 
                                                     << 
                                                     (0x3fU 
                                                      & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                                                     : 0U) 
                                                   >> 0xfU)))) {
            if (((0x1fU >= (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                  ? (0x200U & ((IData)(1U) << (0x3fU 
                                               & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr))))
                  : 0U)) {
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_sign 
                    = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__D_sign;
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_exp 
                    = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__D_exp;
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_frac 
                    = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__D_frac;
            } else if (((0x1fU >= (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                         ? (0x800U & ((IData)(1U) << 
                                      (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr))))
                         : 0U)) {
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_sign 
                    = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__E_sign;
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_exp 
                    = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__E_exp;
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_frac 
                    = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__E_frac;
            } else if (((0x1fU >= (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                         ? (0x100U & ((IData)(1U) << 
                                      (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr))))
                         : 0U)) {
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_sign 
                    = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign;
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_exp 
                    = (0xffU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp));
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_frac 
                    = (0xffffffU & (IData)((vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac 
                                            >> 0x18U)));
            } else if (((0x1fU >= (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                         ? (0x1000U & ((IData)(1U) 
                                       << (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr))))
                         : 0U)) {
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__C_sign 
                    = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_sign;
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__C_exp 
                    = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_exp;
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__C_frac 
                    = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_frac;
            } else if (((0x1fU >= (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                         ? (0x2000U & ((IData)(1U) 
                                       << (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr))))
                         : 0U)) {
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__E_sign 
                    = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign;
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__E_exp 
                    = (0xffU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp));
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__E_frac 
                    = (0xffffffU & (IData)((vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac 
                                            >> 0x18U)));
            } else if (((0x1fU >= (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                         ? (0x400U & ((IData)(1U) << 
                                      (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr))))
                         : 0U)) {
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_sign = 1U;
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_exp 
                    = (0xffU & ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__D_exp) 
                                - (IData)(1U)));
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_frac 
                    = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__D_frac;
            } else if (((0x1fU >= (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                         ? (0x4000U & ((IData)(1U) 
                                       << (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr))))
                         : 0U)) {
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__D_sign 
                    = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_sign;
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__D_exp 
                    = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_exp;
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__D_frac 
                    = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_frac;
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__E_sign 
                    = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_sign;
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__E_exp 
                    = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_exp;
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__E_frac 
                    = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_frac;
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__C_sign = 0U;
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__C_exp = 0x80U;
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__C_frac = 0xb4b4b5U;
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_sign = 1U;
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_exp = 0x7eU;
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_frac 
                    = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_frac;
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_sign = 0U;
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_exp = 0x7fU;
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_frac = 0xf0f0f1U;
            } else {
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_sign = 1U;
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_exp = 0x7eU;
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_frac 
                    = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__E_frac;
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_sign 
                    = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign;
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_exp 
                    = (0xffU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp));
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_frac 
                    = (0xffffffU & (IData)((vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac 
                                            >> 0x18U)));
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__C_sign = 0U;
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__C_exp = 0x7fU;
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__C_frac = 0x800000U;
            }
        } else if (((0x1fU >= (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                     ? (0x10000U & ((IData)(1U) << 
                                    (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr))))
                     : 0U)) {
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_sign 
                = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign;
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_exp 
                = (0xffU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp));
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_frac 
                = (0xffffffU & (IData)((vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac 
                                        >> 0x18U)));
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__C_sign 
                = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_sign;
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__C_exp 
                = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_exp;
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__C_frac 
                = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_frac;
        } else if (((0x1fU >= (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                     ? (0x20000U & ((IData)(1U) << 
                                    (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr))))
                     : 0U)) {
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_sign 
                = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__E_sign;
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_exp 
                = (0xffU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__frcp_exp));
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_frac 
                = (0xffffffU & (IData)((vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac 
                                        >> 0x18U)));
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_sign 
                = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__D_sign;
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_exp 
                = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__D_exp;
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_frac 
                = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__D_frac;
        } else if (((0x1fU >= (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                     ? (0x40000U & ((IData)(1U) << 
                                    (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr))))
                     : 0U)) {
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_sign 
                = (1U & (~ (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__E_sign)));
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_exp 
                = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__E_exp;
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_frac 
                = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__E_frac;
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__C_sign 
                = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__D_sign;
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__C_exp 
                = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__D_exp;
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__C_frac 
                = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__D_frac;
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__D_sign 
                = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_sign;
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__D_exp 
                = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_exp;
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__D_frac 
                = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_frac;
        } else if (((0x1fU >= (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                     ? (0x80000U & ((IData)(1U) << 
                                    (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr))))
                     : 0U)) {
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__D_sign 
                = (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1 
                   >> 0x1fU);
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__D_exp 
                = (0xffU & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1 
                            >> 0x17U));
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__D_frac 
                = (0x800000U | (0x7fffffU & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1));
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__E_sign 
                = (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__rsqrt_doom_magic 
                   >> 0x1fU);
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__E_exp 
                = (0xffU & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__rsqrt_doom_magic 
                            >> 0x17U));
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__E_frac 
                = (0x800000U | (0x7fffffU & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__rsqrt_doom_magic));
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_sign 
                = (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__rsqrt_doom_magic 
                   >> 0x1fU);
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_exp 
                = (0xffU & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__rsqrt_doom_magic 
                            >> 0x17U));
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_frac 
                = (0x800000U | (0x7fffffU & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__rsqrt_doom_magic));
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_sign 
                = (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__rsqrt_doom_magic 
                   >> 0x1fU);
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_exp 
                = (0xffU & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__rsqrt_doom_magic 
                            >> 0x17U));
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_frac 
                = (0x800000U | (0x7fffffU & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__rsqrt_doom_magic));
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__C_sign = 0U;
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__C_exp = 0x7fU;
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__C_frac = 0xc00000U;
        } else if (((0x1fU >= (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                     ? (0x100000U & ((IData)(1U) << 
                                     (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr))))
                     : 0U)) {
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign 
                = (((1U & ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFCVTWUS) 
                           | (~ (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign))))
                     ? vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_fcvt_ftoi_shifted
                     : (- vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_fcvt_ftoi_shifted)) 
                   >> 0x1fU);
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp 
                = ((0x100U & (IData)(__Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp)) 
                   | (0xffU & (((1U & ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFCVTWUS) 
                                       | (~ (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign))))
                                 ? vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_fcvt_ftoi_shifted
                                 : (- vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_fcvt_ftoi_shifted)) 
                               >> 0x17U)));
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac 
                = ((0x3800000ffffffULL & __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac) 
                   | ((QData)((IData)((0x7fffffU & 
                                       ((1U & ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFCVTWUS) 
                                               | (~ (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign))))
                                         ? vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_fcvt_ftoi_shifted
                                         : (- vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_fcvt_ftoi_shifted))))) 
                      << 0x18U));
        } else if (((0x1fU >= (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                     ? (0x200000U & ((IData)(1U) << 
                                     (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr))))
                     : 0U)) {
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac = 0ULL;
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp = 0x9cU;
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_frac 
                = ((1U & ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFCVTSWU) 
                          | (~ (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__E_sign))))
                    ? ((QData)((IData)((((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__E_sign) 
                                         << 0x1fU) 
                                        | (((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__E_exp) 
                                            << 0x17U) 
                                           | (0x7fffffU 
                                              & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__E_frac))))) 
                       << 0x12U) : ((QData)((IData)(
                                                    (- 
                                                     (((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__E_sign) 
                                                       << 0x1fU) 
                                                      | (((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__E_exp) 
                                                          << 0x17U) 
                                                         | (0x7fffffU 
                                                            & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__E_frac)))))) 
                                    << 0x12U));
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_sign 
                = ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFCVTSW) 
                   & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__E_sign));
        } else if (((0x1fU >= (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                     ? (0x400000U & ((IData)(1U) << 
                                     (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr))))
                     : 0U)) {
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign 
                = ((((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_LT_Y) 
                     ^ (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFMAX))
                     ? (((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign) 
                         << 0x1fU) | ((0x7f800000U 
                                       & ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp) 
                                          << 0x17U)) 
                                      | (0x7fffffU 
                                         & (IData)(
                                                   (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac 
                                                    >> 0x18U)))))
                     : (((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_sign) 
                         << 0x1fU) | ((0x7f800000U 
                                       & ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_exp) 
                                          << 0x17U)) 
                                      | (0x7fffffU 
                                         & (IData)(
                                                   (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_frac 
                                                    >> 0x18U)))))) 
                   >> 0x1fU);
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp 
                = ((0x100U & (IData)(__Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp)) 
                   | (0xffU & ((((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_LT_Y) 
                                 ^ (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFMAX))
                                 ? (((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign) 
                                     << 0x1fU) | ((0x7f800000U 
                                                   & ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp) 
                                                      << 0x17U)) 
                                                  | (0x7fffffU 
                                                     & (IData)(
                                                               (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac 
                                                                >> 0x18U)))))
                                 : (((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_sign) 
                                     << 0x1fU) | ((0x7f800000U 
                                                   & ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_exp) 
                                                      << 0x17U)) 
                                                  | (0x7fffffU 
                                                     & (IData)(
                                                               (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_frac 
                                                                >> 0x18U)))))) 
                               >> 0x17U)));
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac 
                = ((0x3800000ffffffULL & __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac) 
                   | ((QData)((IData)((0x7fffffU & 
                                       (((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_LT_Y) 
                                         ^ (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFMAX))
                                         ? (((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign) 
                                             << 0x1fU) 
                                            | ((0x7f800000U 
                                                & ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp) 
                                                   << 0x17U)) 
                                               | (0x7fffffU 
                                                  & (IData)(
                                                            (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac 
                                                             >> 0x18U)))))
                                         : (((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_sign) 
                                             << 0x1fU) 
                                            | ((0x7f800000U 
                                                & ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_exp) 
                                                   << 0x17U)) 
                                               | (0x7fffffU 
                                                  & (IData)(
                                                            (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_frac 
                                                             >> 0x18U))))))))) 
                      << 0x18U));
        }
    }
    if (vlSelf->femtoRV32_bench__DOT__uut__DOT____Vcellinp__processor__reset) {
        if ((2U & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__state))) {
            if ((1U & ((~ (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__current_cache_hit)) 
                       | (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__fetch_second_half)))) {
                vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__cached_addr 
                    = (0x3fffffU & (vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_address 
                                    >> 2U));
                vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__cached_data 
                    = vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_rdata;
            }
            if ((3U == (3U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))) {
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                    = (0x3fffffffU & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                      >> 2U));
                vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__long_instr = 1U;
            } else {
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                    = (0x3fffffffU & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__decompressed 
                                      >> 2U));
                vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__long_instr = 0U;
            }
            if (((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__current_unaligned_long) 
                 & (~ (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__fetch_second_half)))) {
                vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__fetch_second_half = 1U;
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__state = 1U;
            } else {
                vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__fetch_second_half = 0U;
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__state 
                    = ((3U == (3U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr))
                        ? 8U : 4U);
            }
        } else if ((4U & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__state))) {
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__state = 8U;
        } else if ((8U & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__state))) {
            if (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__interrupt) {
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__PC 
                    = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__mtvec;
                vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__mepc 
                    = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__PC_new;
                vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__mcause = 1U;
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__state 
                    = ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__needToWait)
                        ? 0x10U : 1U);
            } else {
                if (VL_UNLIKELY(((((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__isLoad) 
                                   | (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__isStore)) 
                                  & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr) 
                                 & (0U != (3U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__loadstore_addr))))) {
                    VL_WRITEF("PC=%x UNALIGNED FLW/FSW\n",
                              24,vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__PC);
                }
                vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__fetch_second_half 
                    = ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__next_cache_hit) 
                       & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__next_unaligned_long));
                if (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__interrupt_return) {
                    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__mcause = 0U;
                }
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__state 
                    = (0x3fU & (((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__next_cache_hit) 
                                 & (~ (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__next_unaligned_long)))
                                 ? ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__needToWait)
                                     ? 0x20U : 2U) : 
                                ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__needToWait)
                                  ? 0x10U : 1U)));
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__PC 
                    = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__PC_new;
            }
        } else if ((0x10U & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__state))) {
            if ((((~ (IData)((0U != (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__div_cnt)))) 
                  & ((0x1fU >= (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                      ? ((IData)(1U) << (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                      : 0U)) & (0U == (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__oled_display__DOT__bitcount)))) {
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__state = 1U;
            }
        } else if ((0x20U & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__state))) {
            if ((((~ (IData)((0U != (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__div_cnt)))) 
                  & ((0x1fU >= (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                      ? ((IData)(1U) << (0x3fU & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr)))
                      : 0U)) & (0U == (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__oled_display__DOT__bitcount)))) {
                __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__state = 2U;
            }
        } else {
            __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__state = 2U;
        }
    } else {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__fetch_second_half = 0U;
        __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__state = 0x10U;
        __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__PC = 0U;
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__mcause = 0U;
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__cached_addr = 0x3fffffU;
    }
    vlSelf->femtoRV32_bench__DOT__uut__DOT__oled_display__DOT__genblk1__DOT__slow_clk__DOT__slow_cnt 
        = __Vdly__femtoRV32_bench__DOT__uut__DOT__oled_display__DOT__genblk1__DOT__slow_clk__DOT__slow_cnt;
    vlSelf->oled_CS = __Vdly__oled_CS;
    vlSelf->femtoRV32_bench__DOT__uut__DOT__oled_display__DOT__shifter 
        = __Vdly__femtoRV32_bench__DOT__uut__DOT__oled_display__DOT__shifter;
    if (__Vdlyvset__femtoRV32_bench__DOT__uut__DOT__RAM__v0) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__RAM[__Vdlyvdim0__femtoRV32_bench__DOT__uut__DOT__RAM__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__femtoRV32_bench__DOT__uut__DOT__RAM__v0))) 
                & vlSelf->femtoRV32_bench__DOT__uut__DOT__RAM
                [__Vdlyvdim0__femtoRV32_bench__DOT__uut__DOT__RAM__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__femtoRV32_bench__DOT__uut__DOT__RAM__v0) 
                                   << (IData)(__Vdlyvlsb__femtoRV32_bench__DOT__uut__DOT__RAM__v0))));
    }
    if (__Vdlyvset__femtoRV32_bench__DOT__uut__DOT__RAM__v1) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__RAM[__Vdlyvdim0__femtoRV32_bench__DOT__uut__DOT__RAM__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__femtoRV32_bench__DOT__uut__DOT__RAM__v1))) 
                & vlSelf->femtoRV32_bench__DOT__uut__DOT__RAM
                [__Vdlyvdim0__femtoRV32_bench__DOT__uut__DOT__RAM__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__femtoRV32_bench__DOT__uut__DOT__RAM__v1) 
                                   << (IData)(__Vdlyvlsb__femtoRV32_bench__DOT__uut__DOT__RAM__v1))));
    }
    if (__Vdlyvset__femtoRV32_bench__DOT__uut__DOT__RAM__v2) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__RAM[__Vdlyvdim0__femtoRV32_bench__DOT__uut__DOT__RAM__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__femtoRV32_bench__DOT__uut__DOT__RAM__v2))) 
                & vlSelf->femtoRV32_bench__DOT__uut__DOT__RAM
                [__Vdlyvdim0__femtoRV32_bench__DOT__uut__DOT__RAM__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__femtoRV32_bench__DOT__uut__DOT__RAM__v2) 
                                   << (IData)(__Vdlyvlsb__femtoRV32_bench__DOT__uut__DOT__RAM__v2))));
    }
    if (__Vdlyvset__femtoRV32_bench__DOT__uut__DOT__RAM__v3) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__RAM[__Vdlyvdim0__femtoRV32_bench__DOT__uut__DOT__RAM__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__femtoRV32_bench__DOT__uut__DOT__RAM__v3))) 
                & vlSelf->femtoRV32_bench__DOT__uut__DOT__RAM
                [__Vdlyvdim0__femtoRV32_bench__DOT__uut__DOT__RAM__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__femtoRV32_bench__DOT__uut__DOT__RAM__v3) 
                                   << (IData)(__Vdlyvlsb__femtoRV32_bench__DOT__uut__DOT__RAM__v3))));
    }
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__divisor 
        = __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__divisor;
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__dividend 
        = __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__dividend;
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__quotient 
        = __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__quotient;
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__active 
        = __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__active;
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_sign 
        = __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_sign;
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_sign 
        = __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_sign;
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__C_sign 
        = __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__C_sign;
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__C_exp 
        = __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__C_exp;
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__C_frac 
        = __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__C_frac;
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__E_sign 
        = __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__E_sign;
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__E_frac 
        = __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__E_frac;
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__norm_lshamt 
        = __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__norm_lshamt;
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp_norm 
        = __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp_norm;
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__D_sign 
        = __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__D_sign;
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__D_exp 
        = __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__D_exp;
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__D_frac 
        = __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__D_frac;
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__E_exp 
        = __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__E_exp;
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_exp 
        = __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_exp;
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_sign 
        = __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_sign;
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_exp 
        = __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_exp;
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign 
        = __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign;
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_frac 
        = __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_frac;
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_frac 
        = __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_frac;
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_exp 
        = __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_exp;
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp 
        = __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp;
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_frac 
        = __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_frac;
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac 
        = __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac;
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__div_cnt 
        = __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__div_cnt;
    vlSelf->femtoRV32_bench__DOT__uut__DOT__oled_display__DOT__bitcount 
        = __Vdly__femtoRV32_bench__DOT__uut__DOT__oled_display__DOT__bitcount;
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__PC 
        = __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__PC;
    vlSelf->femtoRV32_bench__DOT__uut__DOT__reset = 
        (0xffffU == (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__reset_cnt));
    vlSelf->oled_CLK = vlSelf->femtoRV32_bench__DOT__uut__DOT__oled_display__DOT__genblk1__DOT__slow_clk__DOT__slow_cnt;
    vlSelf->oled_DIN = (1U & ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__oled_display__DOT__shifter) 
                              >> 0xfU));
    if (VL_UNLIKELY(((vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_address 
                      >> 2U) & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__io_wstrb)))) {
        VL_WRITEF("****************** LEDs = %b\n",
                  4,(0xfU & vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_wdata));
        vlSelf->femtoRV32_bench__DOT__uut__DOT__leds__DOT__led_state 
            = (0xfU & vlSelf->femtoRV32_bench__DOT__uut__DOT__mem_wdata);
    }
    if (vlSelf->femtoRV32_bench__DOT__uut__DOT____Vcellinp__processor__reset) {
        if ((((0x1cU == (0x1fU & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)) 
              & (0U != (7U & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                              >> 0xaU)))) & ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__state) 
                                             >> 3U))) {
            if ((0x305U == (0xfffU & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                                      >> 0x12U)))) {
                vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__mtvec 
                    = (0xffffffU & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__CSR_write);
            }
        }
    }
    if (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__aluWr) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__div_sign 
            = (1U & ((~ (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                         >> 0xaU)) & ((0x800U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)
                                       ? (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1 
                                          >> 0x1fU)
                                       : (((vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1 
                                            >> 0x1fU) 
                                           != (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__aluIn2 
                                               >> 0x1fU)) 
                                          & (0U != vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__aluIn2)))));
    }
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__rsqrt_doom_magic 
        = ((IData)(0x5f3759dfU) - (((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_exp) 
                                    << 0x16U) | (0x3fffffU 
                                                 & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_frac 
                                                    >> 1U))));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__prod_frac 
        = (0x3ffffffffffffULL & ((QData)((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_frac)) 
                                 * (QData)((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_frac))));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__frcp_exp 
        = (0x1ffU & (((IData)(0x7eU) + (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp)) 
                     - (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__E_exp)));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__exp_diff 
        = (0x1ffU & ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_exp) 
                     - (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp)));
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
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__frac_diff 
        = (0x7ffffffffffffULL & (VL_EXTENDS_QQ(51,50, vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_frac) 
                                 - VL_EXTENDS_QQ(51,50, vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac)));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__frac_sum 
        = (0x7ffffffffffffULL & (VL_EXTENDS_QQ(51,50, vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_frac) 
                                 + VL_EXTENDS_QQ(51,50, vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac)));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__aluBusy 
        = (0U != (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__div_cnt));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__oled_display__DOT__sending 
        = (0U != (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__oled_display__DOT__bitcount));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__interrupt 
        = (((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__interrupt_request_sticky) 
            & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__mstatus)) 
           & (~ (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__mcause)));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr 
        = ((0x6fU >= (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_PC_next))
            ? vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM
           [vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_PC_next]
            : 0U);
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__PCinc 
        = (0xffffffU & ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__long_instr)
                         ? ((IData)(4U) + vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__PC)
                         : ((IData)(2U) + vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__PC)));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__current_cache_hit 
        = (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__cached_addr 
           == (0x3fffffU & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__PC 
                            >> 2U)));
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
    vlSelf->femtoRV32_bench__DOT__uut__DOT____Vcellinp__processor__reset 
        = ((0xffffU == (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__reset_cnt)) 
           & (~ (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__uart_brk)));
    if ((2U & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__state))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1 
            = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__registerFile
            [(((IData)(((0x40U == (0x60U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)) 
                        & (~ (IData)(((0x10U == (0x1cU 
                                                 & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr)) 
                                      & ((0xdU == (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                   >> 0x1cU)) 
                                         | (0xfU == 
                                            (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                             >> 0x1cU)))))))) 
               << 5U) | (0x1fU & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                  >> 0xfU)))];
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs2 
            = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__registerFile
            [((((2U == (3U & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                              >> 5U))) | (9U == (0x1fU 
                                                 & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                                    >> 2U)))) 
               << 5U) | (0x1fU & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                                  >> 0x14U)))];
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs3 
            = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__registerFile
            [(0x20U | (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr 
                       >> 0x1bU))];
    } else if ((4U & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__state))) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1 
            = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__registerFile
            [(((IData)(((0x10U == (0x18U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)) 
                        & (~ ((4U == (7U & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr)) 
                              & ((0xdU == (0xfU & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                                                   >> 0x1aU))) 
                                 | (0xfU == (0xfU & 
                                             (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                                              >> 0x1aU)))))))) 
               << 5U) | (0x1fU & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                                  >> 0xdU)))];
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs2 
            = vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__registerFile
            [((((2U == (3U & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                              >> 3U))) | (9U == (0x1fU 
                                                 & vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr))) 
               << 5U) | (0x1fU & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                                  >> 0x12U)))];
    }
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
    if (__Vdlyvset__femtoRV32_bench__DOT__uut__DOT__processor__DOT__registerFile__v0) {
        vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__registerFile[__Vdlyvdim0__femtoRV32_bench__DOT__uut__DOT__processor__DOT__registerFile__v0] 
            = __Vdlyvval__femtoRV32_bench__DOT__uut__DOT__processor__DOT__registerFile__v0;
    }
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__state 
        = __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__state;
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
        = __Vdly__femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr;
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__clz2__DOT__genblk1__DOT__inner__DOT__genblk1__DOT__inner__DOT____Vcellinp__genblk1__DOT__inner__in 
        = (0xffU & ((0U != (0xffU & ((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__clz2__DOT__genblk1__DOT__inner__DOT____Vcellinp__genblk1__DOT__inner__in) 
                                     >> 8U))) ? ((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__clz2__DOT__genblk1__DOT__inner__DOT____Vcellinp__genblk1__DOT__inner__in) 
                                                 >> 8U)
                     : (IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__clz2__DOT__genblk1__DOT__inner__DOT____Vcellinp__genblk1__DOT__inner__in)));
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
    femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__clz2__DOT__genblk1__DOT__inner__DOT__genblk1__DOT__inner__DOT__genblk1__DOT__inner__DOT____Vcellinp__genblk1__DOT__inner__in 
        = (0xfU & ((0U != (0xfU & ((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__clz2__DOT__genblk1__DOT__inner__DOT__genblk1__DOT__inner__DOT____Vcellinp__genblk1__DOT__inner__in) 
                                   >> 4U))) ? ((IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__clz2__DOT__genblk1__DOT__inner__DOT__genblk1__DOT__inner__DOT____Vcellinp__genblk1__DOT__inner__in) 
                                               >> 4U)
                    : (IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__clz2__DOT__genblk1__DOT__inner__DOT__genblk1__DOT__inner__DOT____Vcellinp__genblk1__DOT__inner__in)));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__aluWr 
        = (((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__state) 
            >> 3U) & (IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT__isALU));
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__CSR_write 
        = ((2U == (3U & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                         >> 0xaU))) ? (femtoRV32_bench__DOT__uut__DOT__processor__DOT__CSR_modifier 
                                       | femtoRV32_bench__DOT__uut__DOT__processor__DOT__CSR_read)
            : ((3U == (3U & (vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr 
                             >> 0xaU))) ? ((~ femtoRV32_bench__DOT__uut__DOT__processor__DOT__CSR_modifier) 
                                           & femtoRV32_bench__DOT__uut__DOT__processor__DOT__CSR_read)
                : femtoRV32_bench__DOT__uut__DOT__processor__DOT__CSR_modifier));
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
    vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_PC_next 
        = (0x7fU & ((IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT____Vcellinp__FPU__wr)
                     ? (IData)(femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmprog)
                     : ((0x40U & (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr))
                         ? 0U : ((IData)(1U) + (IData)(vlSelf->femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_PC)))));
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

void VfemtoRV32_bench___024root___eval(VfemtoRV32_bench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VfemtoRV32_bench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfemtoRV32_bench___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->pclk) & (~ (IData)(vlSelf->__Vclklast__TOP__pclk)))) {
        VfemtoRV32_bench___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__pclk = vlSelf->pclk;
}

#ifdef VL_DEBUG
void VfemtoRV32_bench___024root___eval_debug_assertions(VfemtoRV32_bench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VfemtoRV32_bench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfemtoRV32_bench___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->pclk & 0xfeU))) {
        Verilated::overWidthError("pclk");}
}
#endif  // VL_DEBUG
