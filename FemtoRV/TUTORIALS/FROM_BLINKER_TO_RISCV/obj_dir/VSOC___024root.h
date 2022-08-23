// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSOC.h for the primary calling header

#ifndef VERILATED_VSOC___024ROOT_H_
#define VERILATED_VSOC___024ROOT_H_  // guard

#include "verilated.h"

class VSOC__Syms;
VL_MODULE(VSOC___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(CLK,0,0);
    VL_IN8(RESET,0,0);
    VL_OUT8(LEDS,4,0);
    VL_IN8(RXD,0,0);
    VL_OUT8(TXD,0,0);
    CData/*0:0*/ SOC__DOT__resetn;
    CData/*3:0*/ SOC__DOT__mem_wmask;
    CData/*3:0*/ SOC__DOT____Vcellinp__RAM__mem_wmask;
    CData/*0:0*/ SOC__DOT__uart_valid;
    CData/*0:0*/ SOC__DOT__uart_ready;
    CData/*0:0*/ SOC__DOT__CPU__DOT__isLoad;
    CData/*0:0*/ SOC__DOT__CPU__DOT__isStore;
    CData/*0:0*/ SOC__DOT__CPU__DOT__isSYSTEM;
    CData/*4:0*/ SOC__DOT__CPU__DOT__rs1Id;
    CData/*4:0*/ SOC__DOT__CPU__DOT__rs2Id;
    CData/*4:0*/ SOC__DOT__CPU__DOT__rdId;
    CData/*0:0*/ SOC__DOT__CPU__DOT__writeBackEn;
    CData/*2:0*/ SOC__DOT__CPU__DOT__state;
    CData/*7:0*/ SOC__DOT__RAM__DOT____Vlvbound_h8baf4682__0;
    CData/*7:0*/ SOC__DOT__RAM__DOT____Vlvbound_h8baec87f__0;
    CData/*7:0*/ SOC__DOT__RAM__DOT____Vlvbound_h8b826fe1__0;
    CData/*7:0*/ SOC__DOT__RAM__DOT____Vlvbound_h8b81ede2__0;
    CData/*4:0*/ SOC__DOT__UART__DOT__cnt;
    CData/*0:0*/ __Vclklast__TOP__CLK;
    CData/*0:0*/ __Vclklast__TOP__RESET;
    SData/*9:0*/ SOC__DOT__UART__DOT__data;
    SData/*15:0*/ SOC__DOT__CW__DOT__genblk1__DOT__reset_cnt;
    SData/*15:0*/ __Vdly__SOC__DOT__CW__DOT__genblk1__DOT__reset_cnt;
    IData/*31:0*/ SOC__DOT__mem_addr;
    IData/*31:0*/ SOC__DOT__mem_rdata;
    IData/*31:0*/ SOC__DOT__mem_wdata;
    IData/*31:0*/ SOC__DOT__RAM_rdata;
    IData/*31:0*/ SOC__DOT__CPU__DOT__PC;
    IData/*31:0*/ SOC__DOT__CPU__DOT__instr;
    IData/*31:0*/ SOC__DOT__CPU__DOT__rs1;
    IData/*31:0*/ SOC__DOT__CPU__DOT__rs2;
    IData/*31:0*/ SOC__DOT__CPU__DOT__writeBackData;
    IData/*31:0*/ SOC__DOT__CPU__DOT__nextPC;
    VlUnpacked<IData/*31:0*/, 32> SOC__DOT__CPU__DOT__RegisterBank;
    VlUnpacked<IData/*31:0*/, 1536> SOC__DOT__RAM__DOT__MEM;

    // INTERNAL VARIABLES
    VSOC__Syms* const vlSymsp;

    // CONSTRUCTORS
    VSOC___024root(VSOC__Syms* symsp, const char* name);
    ~VSOC___024root();
    VL_UNCOPYABLE(VSOC___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
