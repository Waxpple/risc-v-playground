// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VBAREBONES_WB_TOP_H_
#define _VBAREBONES_WB_TOP_H_  // guard

#include "verilated_heavy.h"
#include "Vbarebones_wb_top__Dpi.h"

//==========

class Vbarebones_wb_top__Syms;
class Vbarebones_wb_top_VerilatedVcd;
class Vbarebones_wb_top_barebones_wb_top;


//----------

VL_MODULE(Vbarebones_wb_top) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    Vbarebones_wb_top_barebones_wb_top* barebones_wb_top;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk_i,0,0);
    VL_IN8(reset_i,0,0);
    VL_IN8(meip_i,0,0);
    VL_OUT8(irq_ack_o,0,0);
    VL_IN16(fast_irq_i,15,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __VinpClk__TOP__barebones_wb_top____Vcellinp__debug_if__wb_rst_i;
    CData/*0:0*/ __VinpClk__TOP__barebones_wb_top____Vcellinp__memory__port1_wb_rst_i;
    CData/*0:0*/ __VinpClk__TOP__barebones_wb_top____Vcellinp__memory__port0_wb_rst_i;
    CData/*0:0*/ __VinpClk__TOP__barebones_wb_top____PVT__mtime_regs__DOT__rst;
    CData/*0:0*/ __Vclklast__TOP__clk_i;
    CData/*0:0*/ __Vclklast__TOP__reset_i;
    CData/*0:0*/ __Vclklast__TOP__barebones_wb_top____Vcellinp__debug_if__wb_clk_i;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__barebones_wb_top____Vcellinp__debug_if__wb_rst_i;
    CData/*0:0*/ __Vclklast__TOP__barebones_wb_top____Vcellinp__memory__port1_wb_clk_i;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__barebones_wb_top____Vcellinp__memory__port1_wb_rst_i;
    CData/*0:0*/ __Vclklast__TOP__barebones_wb_top____Vcellinp__memory__port0_wb_clk_i;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__barebones_wb_top____Vcellinp__memory__port0_wb_rst_i;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__barebones_wb_top____PVT__mtime_regs__DOT__rst;
    CData/*0:0*/ __Vclklast__TOP__barebones_wb_top____Vcellinp__mtime_regs__wb_clk_i;
    CData/*0:0*/ __Vchglast__TOP__barebones_wb_top____Vcellinp__memory__port1_wb_rst_i;
    CData/*0:0*/ __Vchglast__TOP__barebones_wb_top____Vcellinp__memory__port0_wb_rst_i;
    CData/*0:0*/ __Vchglast__TOP__barebones_wb_top____Vcellinp__debug_if__wb_rst_i;
    CData/*0:0*/ __Vchglast__TOP__barebones_wb_top__mtime_regs__DOT__rst;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vbarebones_wb_top__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vbarebones_wb_top);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vbarebones_wb_top(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vbarebones_wb_top();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vbarebones_wb_top__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vbarebones_wb_top__Syms* symsp, bool first);
  private:
    static QData _change_request(Vbarebones_wb_top__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vbarebones_wb_top__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vbarebones_wb_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vbarebones_wb_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__1(Vbarebones_wb_top__Syms* __restrict vlSymsp);
    static void traceChgThis(Vbarebones_wb_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__10(Vbarebones_wb_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__11(Vbarebones_wb_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__12(Vbarebones_wb_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__13(Vbarebones_wb_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__14(Vbarebones_wb_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__15(Vbarebones_wb_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__16(Vbarebones_wb_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__17(Vbarebones_wb_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__18(Vbarebones_wb_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__19(Vbarebones_wb_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(Vbarebones_wb_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__20(Vbarebones_wb_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__21(Vbarebones_wb_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__22(Vbarebones_wb_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__23(Vbarebones_wb_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(Vbarebones_wb_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(Vbarebones_wb_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(Vbarebones_wb_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(Vbarebones_wb_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(Vbarebones_wb_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__8(Vbarebones_wb_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__9(Vbarebones_wb_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(Vbarebones_wb_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(Vbarebones_wb_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(Vbarebones_wb_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(Vbarebones_wb_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
