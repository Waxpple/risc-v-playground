// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbarebones_wb_top.h for the primary calling header

#ifndef _VBAREBONES_WB_TOP_MEMORY_2RW_WB__AB_H_
#define _VBAREBONES_WB_TOP_MEMORY_2RW_WB__AB_H_  // guard

#include "verilated_heavy.h"
#include "Vbarebones_wb_top__Dpi.h"

//==========

class Vbarebones_wb_top__Syms;
class Vbarebones_wb_top_VerilatedVcd;


//----------

VL_MODULE(Vbarebones_wb_top_memory_2rw_wb__Ab) {
  public:
    
    // PORTS
    VL_IN8(__PVT__port0_wb_rst_i,0,0);
    VL_IN8(__PVT__port0_wb_clk_i,0,0);
    VL_IN8(__PVT__port1_wb_rst_i,0,0);
    VL_IN8(__PVT__port1_wb_clk_i,0,0);
    VL_IN8(__PVT__port0_wb_cyc_i,0,0);
    VL_IN8(__PVT__port0_wb_stb_i,0,0);
    VL_IN8(__PVT__port0_wb_we_i,0,0);
    VL_IN8(__PVT__port0_wb_sel_i,3,0);
    VL_OUT8(__PVT__port0_wb_stall_o,0,0);
    VL_OUT8(__PVT__port0_wb_ack_o,0,0);
    VL_OUT8(__PVT__port0_wb_err_o,0,0);
    VL_IN8(__PVT__port1_wb_cyc_i,0,0);
    VL_IN8(__PVT__port1_wb_stb_i,0,0);
    VL_IN8(__PVT__port1_wb_we_i,0,0);
    VL_IN8(__PVT__port1_wb_sel_i,3,0);
    VL_OUT8(__PVT__port1_wb_stall_o,0,0);
    VL_OUT8(__PVT__port1_wb_ack_o,0,0);
    VL_OUT8(__PVT__port1_wb_err_o,0,0);
    VL_IN(__PVT__port0_wb_adr_i,31,0);
    VL_IN(__PVT__port0_wb_dat_i,31,0);
    VL_OUT(__PVT__port0_wb_dat_o,31,0);
    VL_IN(__PVT__port1_wb_adr_i,31,0);
    VL_IN(__PVT__port1_wb_dat_i,31,0);
    VL_OUT(__PVT__port1_wb_dat_o,31,0);
    
    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__port0_ack;
    CData/*0:0*/ __PVT__port1_ack;
    IData/*31:0*/ __PVT__dout0;
    IData/*31:0*/ __PVT__dout1;
    IData/*31:0*/ mem[2048];
    
    // INTERNAL VARIABLES
  private:
    Vbarebones_wb_top__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vbarebones_wb_top_memory_2rw_wb__Ab);  ///< Copying not allowed
  public:
    Vbarebones_wb_top_memory_2rw_wb__Ab(const char* name = "TOP");
    ~Vbarebones_wb_top_memory_2rw_wb__Ab();
    
    // INTERNAL METHODS
    void __Vconfigure(Vbarebones_wb_top__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _sequent__TOP__barebones_wb_top__memory__1(Vbarebones_wb_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__barebones_wb_top__memory__2(Vbarebones_wb_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__barebones_wb_top__memory__3(Vbarebones_wb_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__barebones_wb_top__memory__4(Vbarebones_wb_top__Syms* __restrict vlSymsp);
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
