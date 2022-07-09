// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VfemtoRV32_bench.h for the primary calling header

#ifndef VERILATED_VFEMTORV32_BENCH___024ROOT_H_
#define VERILATED_VFEMTORV32_BENCH___024ROOT_H_  // guard

#include "FPU_funcs.h"
#include "verilated.h"

class VfemtoRV32_bench__Syms;
VL_MODULE(VfemtoRV32_bench___024root) {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(pclk,0,0);
        VL_OUT8(oled_DIN,0,0);
        VL_OUT8(oled_CLK,0,0);
        VL_OUT8(oled_CS,0,0);
        VL_OUT8(oled_DC,0,0);
        VL_OUT8(oled_RST,0,0);
        CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__reset;
        CData/*3:0*/ femtoRV32_bench__DOT__uut__DOT__mem_wmask;
        CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__io_wstrb;
        CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__uart_brk;
        CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT____Vcellinp__processor__reset;
        CData/*3:0*/ femtoRV32_bench__DOT__uut__DOT__leds__DOT__led_state;
        CData/*4:0*/ femtoRV32_bench__DOT__uut__DOT__oled_display__DOT__bitcount;
        CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__oled_display__DOT__sending;
        CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__oled_display__DOT__genblk1__DOT__slow_clk__DOT__slow_cnt;
        CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__isLoad;
        CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__isStore;
        CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__aluWr;
        CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__aluBusy;
        CData/*5:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__div_cnt;
        CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__div_sign;
        CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT____Vcellinp__FPU__wr;
        CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__rdIsFP;
        CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__interrupt_request_sticky;
        CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__interrupt;
        CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__interrupt_return;
        CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__mstatus;
        CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__mcause;
        CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__current_cache_hit;
        CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__next_cache_hit;
        CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__current_unaligned_long;
        CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__next_unaligned_long;
        CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__fetch_second_half;
        CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__long_instr;
        CData/*5:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__state;
        CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__needToWait;
        CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_sign;
        CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_sign;
        CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_sign;
        CData/*7:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_exp;
        CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_sign;
        CData/*7:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_exp;
        CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__C_sign;
        CData/*7:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__C_exp;
        CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__D_sign;
        CData/*7:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__D_exp;
        CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__E_sign;
        CData/*7:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__E_exp;
        CData/*6:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_PC;
        CData/*6:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_instr;
        CData/*6:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_PC_next;
        CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fabsY_LT_fabsX;
        CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_LT_Y;
        CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_LE_Y;
        CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_EQ_Y;
        CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__prod_Z;
        CData/*5:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__frac_sum_clz;
        CData/*5:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__norm_lshamt;
        CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFADD;
        CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFSUB;
        CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFMUL;
        CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFDIV;
        CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFMIN;
        CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFMAX;
    };
    struct {
        CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFEQ;
        CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFLT;
        CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFLE;
        CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFCVTWS;
        CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFCVTWUS;
        CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFCVTSW;
        CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__isFCVTSWU;
        CData/*0:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__active;
        CData/*0:0*/ __Vclklast__TOP__pclk;
        SData/*15:0*/ femtoRV32_bench__DOT__uut__DOT__reset_cnt;
        SData/*15:0*/ femtoRV32_bench__DOT__uut__DOT__oled_display__DOT__shifter;
        SData/*8:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp;
        SData/*8:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_exp;
        SData/*8:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__exp_diff;
        SData/*8:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__prod_exp_norm;
        SData/*8:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_exp_norm;
        SData/*8:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__frcp_exp;
        IData/*31:0*/ femtoRV32_bench__DOT__uut__DOT__mem_address;
        IData/*31:0*/ femtoRV32_bench__DOT__uut__DOT__mem_rdata;
        IData/*31:0*/ femtoRV32_bench__DOT__uut__DOT__mem_wdata;
        IData/*31:0*/ femtoRV32_bench__DOT__uut__DOT__io_rdata;
        IData/*31:0*/ femtoRV32_bench__DOT__uut__DOT__ram_rdata;
        IData/*31:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs1;
        IData/*31:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs2;
        IData/*31:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__rs3;
        IData/*31:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__aluIn2;
        IData/*31:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__aluOut_mul;
        IData/*31:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__aluOut_div;
        IData/*31:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__dividend;
        IData/*31:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__quotient;
        IData/*23:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__PC;
        IData/*29:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__instr;
        IData/*23:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__loadstore_addr;
        IData/*23:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__mepc;
        IData/*23:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__mtvec;
        IData/*31:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__CSR_write;
        IData/*31:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__writeBackData;
        IData/*21:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__cached_addr;
        IData/*31:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__cached_data;
        IData/*31:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__raw_instr;
        IData/*31:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__decompressed;
        IData/*23:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__PC_new;
        IData/*23:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__A_frac;
        IData/*23:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__B_frac;
        IData/*23:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__C_frac;
        IData/*23:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__D_frac;
        IData/*23:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__E_frac;
        IData/*31:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__FPMPROG_CMP;
        IData/*31:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__FPMPROG_ADD;
        IData/*31:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__FPMPROG_MUL;
        IData/*31:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__FPMPROG_MADD;
        IData/*31:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__FPMPROG_DIV;
        IData/*31:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__FPMPROG_FP_TO_INT;
        IData/*31:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__FPMPROG_INT_TO_FP;
        IData/*31:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__FPMPROG_SQRT;
        IData/*31:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__FPMPROG_MIN_MAX;
        IData/*31:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__rsqrt_doom_magic;
        IData/*31:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_fcvt_ftoi_shifted;
        IData/*31:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fclass;
        QData/*63:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__multiply;
        QData/*62:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__divisor;
        QData/*63:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__cycles;
        QData/*49:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__X_frac;
        QData/*49:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__Y_frac;
    };
    struct {
        QData/*50:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__frac_sum;
        QData/*49:0*/ femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__prod_frac;
        VlUnpacked<IData/*31:0*/, 16384> femtoRV32_bench__DOT__uut__DOT__RAM;
        VlUnpacked<IData/*31:0*/, 64> femtoRV32_bench__DOT__uut__DOT__processor__DOT__registerFile;
        VlUnpacked<CData/*6:0*/, 112> femtoRV32_bench__DOT__uut__DOT__processor__DOT__FPU__DOT__fpmi_ROM;
    };

    // INTERNAL VARIABLES
    VfemtoRV32_bench__Syms* const vlSymsp;

    // CONSTRUCTORS
    VfemtoRV32_bench___024root(VfemtoRV32_bench__Syms* symsp, const char* name);
    ~VfemtoRV32_bench___024root();
    VL_UNCOPYABLE(VfemtoRV32_bench___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
