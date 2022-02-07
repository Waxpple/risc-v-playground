// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbarebones_wb_top.h for the primary calling header

#include "Vbarebones_wb_top.h"
#include "Vbarebones_wb_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vbarebones_wb_top) {
    Vbarebones_wb_top__Syms* __restrict vlSymsp = __VlSymsp = new Vbarebones_wb_top__Syms(this, name());
    Vbarebones_wb_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(barebones_wb_top, Vbarebones_wb_top_barebones_wb_top);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vbarebones_wb_top::__Vconfigure(Vbarebones_wb_top__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vbarebones_wb_top::~Vbarebones_wb_top() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void Vbarebones_wb_top::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vbarebones_wb_top::eval\n"); );
    Vbarebones_wb_top__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vbarebones_wb_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("../../core/muldiv/../../processor/barebones/barebones_wb_top.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vbarebones_wb_top::_eval_initial_loop(Vbarebones_wb_top__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("../../core/muldiv/../../processor/barebones/barebones_wb_top.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vbarebones_wb_top::_settle__TOP__1(Vbarebones_wb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarebones_wb_top::_settle__TOP__1\n"); );
    Vbarebones_wb_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->irq_ack_o = vlSymsp->TOP__barebones_wb_top.irq_ack_o;
}

void Vbarebones_wb_top::_eval(Vbarebones_wb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarebones_wb_top::_eval\n"); );
    Vbarebones_wb_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->reset_i)) & (IData)(vlTOPp->__Vclklast__TOP__reset_i)))) {
        vlSymsp->TOP__barebones_wb_top._sequent__TOP__barebones_wb_top__2(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_settle__TOP__1(vlSymsp);
    }
    vlSymsp->TOP__barebones_wb_top._combo__TOP__barebones_wb_top__3(vlSymsp);
    vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    if ((((~ (IData)(vlTOPp->clk_i)) & (IData)(vlTOPp->__Vclklast__TOP__clk_i)) 
         | ((~ (IData)(vlTOPp->reset_i)) & (IData)(vlTOPp->__Vclklast__TOP__reset_i)))) {
        vlSymsp->TOP__barebones_wb_top._sequent__TOP__barebones_wb_top__4(vlSymsp);
        vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlSymsp->TOP__barebones_wb_top.__Vcellinp__debug_if__wb_clk_i) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__barebones_wb_top____Vcellinp__debug_if__wb_clk_i))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__barebones_wb_top____Vcellinp__debug_if__wb_rst_i) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__barebones_wb_top____Vcellinp__debug_if__wb_rst_i))))) {
        vlSymsp->TOP__barebones_wb_top._sequent__TOP__barebones_wb_top__5(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlSymsp->TOP__barebones_wb_top.__Vcellinp__memory__port1_wb_clk_i) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__barebones_wb_top____Vcellinp__memory__port1_wb_clk_i)))) {
        vlSymsp->TOP__barebones_wb_top__memory._sequent__TOP__barebones_wb_top__memory__1(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x20U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlSymsp->TOP__barebones_wb_top.__Vcellinp__memory__port1_wb_clk_i) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__barebones_wb_top____Vcellinp__memory__port1_wb_clk_i))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__barebones_wb_top____Vcellinp__memory__port1_wb_rst_i) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__barebones_wb_top____Vcellinp__memory__port1_wb_rst_i))))) {
        vlSymsp->TOP__barebones_wb_top__memory._sequent__TOP__barebones_wb_top__memory__2(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x40U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlSymsp->TOP__barebones_wb_top.__Vcellinp__memory__port0_wb_clk_i) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__barebones_wb_top____Vcellinp__memory__port0_wb_clk_i))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__barebones_wb_top____Vcellinp__memory__port0_wb_rst_i) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__barebones_wb_top____Vcellinp__memory__port0_wb_rst_i))))) {
        vlSymsp->TOP__barebones_wb_top._sequent__TOP__barebones_wb_top__6(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x80U | vlTOPp->__Vm_traceActivity);
        vlSymsp->TOP__barebones_wb_top__memory._sequent__TOP__barebones_wb_top__memory__3(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__barebones_wb_top.__Vcellinp__memory__port0_wb_clk_i) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__barebones_wb_top____Vcellinp__memory__port0_wb_clk_i)))) {
        vlSymsp->TOP__barebones_wb_top__memory._sequent__TOP__barebones_wb_top__memory__4(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x100U | vlTOPp->__Vm_traceActivity);
    }
    if ((((~ (IData)(vlTOPp->__VinpClk__TOP__barebones_wb_top____PVT__mtime_regs__DOT__rst)) 
          & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__barebones_wb_top____PVT__mtime_regs__DOT__rst)) 
         | ((IData)(vlSymsp->TOP__barebones_wb_top.__Vcellinp__mtime_regs__wb_clk_i) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__barebones_wb_top____Vcellinp__mtime_regs__wb_clk_i))))) {
        vlSymsp->TOP__barebones_wb_top._sequent__TOP__barebones_wb_top__7(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x200U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->reset_i)) & (IData)(vlTOPp->__Vclklast__TOP__reset_i)))) {
        vlSymsp->TOP__barebones_wb_top._sequent__TOP__barebones_wb_top__8(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x400U | vlTOPp->__Vm_traceActivity);
    }
    vlSymsp->TOP__barebones_wb_top._combo__TOP__barebones_wb_top__9(vlSymsp);
    if ((((((IData)(vlSymsp->TOP__barebones_wb_top.__Vcellinp__memory__port0_wb_clk_i) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__barebones_wb_top____Vcellinp__memory__port0_wb_clk_i))) 
           | ((IData)(vlTOPp->__VinpClk__TOP__barebones_wb_top____Vcellinp__memory__port0_wb_rst_i) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__barebones_wb_top____Vcellinp__memory__port0_wb_rst_i)))) 
          | ((IData)(vlSymsp->TOP__barebones_wb_top.__Vcellinp__memory__port1_wb_clk_i) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__barebones_wb_top____Vcellinp__memory__port1_wb_clk_i)))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__barebones_wb_top____Vcellinp__memory__port1_wb_rst_i) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__barebones_wb_top____Vcellinp__memory__port1_wb_rst_i))))) {
        vlSymsp->TOP__barebones_wb_top._multiclk__TOP__barebones_wb_top__10(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x800U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlSymsp->TOP__barebones_wb_top.__Vcellinp__memory__port1_wb_clk_i) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__barebones_wb_top____Vcellinp__memory__port1_wb_clk_i)))) {
        vlSymsp->TOP__barebones_wb_top._sequent__TOP__barebones_wb_top__11(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x1000U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlSymsp->TOP__barebones_wb_top.__Vcellinp__memory__port0_wb_clk_i) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__barebones_wb_top____Vcellinp__memory__port0_wb_clk_i)))) {
        vlSymsp->TOP__barebones_wb_top._sequent__TOP__barebones_wb_top__12(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x2000U | vlTOPp->__Vm_traceActivity);
    }
    if ((((~ (IData)(vlTOPp->__VinpClk__TOP__barebones_wb_top____PVT__mtime_regs__DOT__rst)) 
          & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__barebones_wb_top____PVT__mtime_regs__DOT__rst)) 
         | ((IData)(vlSymsp->TOP__barebones_wb_top.__Vcellinp__mtime_regs__wb_clk_i) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__barebones_wb_top____Vcellinp__mtime_regs__wb_clk_i))))) {
        vlSymsp->TOP__barebones_wb_top._sequent__TOP__barebones_wb_top__13(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x4000U | vlTOPp->__Vm_traceActivity);
    }
    if ((((((~ (IData)(vlTOPp->__VinpClk__TOP__barebones_wb_top____PVT__mtime_regs__DOT__rst)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__barebones_wb_top____PVT__mtime_regs__DOT__rst)) 
           | ((IData)(vlSymsp->TOP__barebones_wb_top.__Vcellinp__mtime_regs__wb_clk_i) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP__barebones_wb_top____Vcellinp__mtime_regs__wb_clk_i)))) 
          | ((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i)))) 
         | ((~ (IData)(vlTOPp->reset_i)) & (IData)(vlTOPp->__Vclklast__TOP__reset_i)))) {
        vlSymsp->TOP__barebones_wb_top._multiclk__TOP__barebones_wb_top__14(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x8000U | vlTOPp->__Vm_traceActivity);
    }
    if ((((((((((((~ (IData)(vlTOPp->__VinpClk__TOP__barebones_wb_top____PVT__mtime_regs__DOT__rst)) 
                  & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__barebones_wb_top____PVT__mtime_regs__DOT__rst)) 
                 | ((IData)(vlSymsp->TOP__barebones_wb_top.__Vcellinp__debug_if__wb_clk_i) 
                    & (~ (IData)(vlTOPp->__Vclklast__TOP__barebones_wb_top____Vcellinp__debug_if__wb_clk_i)))) 
                | ((IData)(vlTOPp->__VinpClk__TOP__barebones_wb_top____Vcellinp__debug_if__wb_rst_i) 
                   & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__barebones_wb_top____Vcellinp__debug_if__wb_rst_i)))) 
               | ((IData)(vlSymsp->TOP__barebones_wb_top.__Vcellinp__memory__port0_wb_clk_i) 
                  & (~ (IData)(vlTOPp->__Vclklast__TOP__barebones_wb_top____Vcellinp__memory__port0_wb_clk_i)))) 
              | ((IData)(vlTOPp->__VinpClk__TOP__barebones_wb_top____Vcellinp__memory__port0_wb_rst_i) 
                 & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__barebones_wb_top____Vcellinp__memory__port0_wb_rst_i)))) 
             | ((IData)(vlSymsp->TOP__barebones_wb_top.__Vcellinp__memory__port1_wb_clk_i) 
                & (~ (IData)(vlTOPp->__Vclklast__TOP__barebones_wb_top____Vcellinp__memory__port1_wb_clk_i)))) 
            | ((IData)(vlTOPp->__VinpClk__TOP__barebones_wb_top____Vcellinp__memory__port1_wb_rst_i) 
               & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__barebones_wb_top____Vcellinp__memory__port1_wb_rst_i)))) 
           | ((IData)(vlSymsp->TOP__barebones_wb_top.__Vcellinp__mtime_regs__wb_clk_i) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP__barebones_wb_top____Vcellinp__mtime_regs__wb_clk_i)))) 
          | ((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i)))) 
         | ((~ (IData)(vlTOPp->reset_i)) & (IData)(vlTOPp->__Vclklast__TOP__reset_i)))) {
        vlSymsp->TOP__barebones_wb_top._multiclk__TOP__barebones_wb_top__15(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x10000U | vlTOPp->__Vm_traceActivity);
    }
    vlSymsp->TOP__barebones_wb_top._combo__TOP__barebones_wb_top__16(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk_i = vlTOPp->clk_i;
    vlTOPp->__Vclklast__TOP__reset_i = vlTOPp->reset_i;
    vlTOPp->__Vclklast__TOP__barebones_wb_top____Vcellinp__debug_if__wb_clk_i 
        = vlSymsp->TOP__barebones_wb_top.__Vcellinp__debug_if__wb_clk_i;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__barebones_wb_top____Vcellinp__debug_if__wb_rst_i 
        = vlTOPp->__VinpClk__TOP__barebones_wb_top____Vcellinp__debug_if__wb_rst_i;
    vlTOPp->__Vclklast__TOP__barebones_wb_top____Vcellinp__memory__port1_wb_clk_i 
        = vlSymsp->TOP__barebones_wb_top.__Vcellinp__memory__port1_wb_clk_i;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__barebones_wb_top____Vcellinp__memory__port1_wb_rst_i 
        = vlTOPp->__VinpClk__TOP__barebones_wb_top____Vcellinp__memory__port1_wb_rst_i;
    vlTOPp->__Vclklast__TOP__barebones_wb_top____Vcellinp__memory__port0_wb_clk_i 
        = vlSymsp->TOP__barebones_wb_top.__Vcellinp__memory__port0_wb_clk_i;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__barebones_wb_top____Vcellinp__memory__port0_wb_rst_i 
        = vlTOPp->__VinpClk__TOP__barebones_wb_top____Vcellinp__memory__port0_wb_rst_i;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__barebones_wb_top____PVT__mtime_regs__DOT__rst 
        = vlTOPp->__VinpClk__TOP__barebones_wb_top____PVT__mtime_regs__DOT__rst;
    vlTOPp->__Vclklast__TOP__barebones_wb_top____Vcellinp__mtime_regs__wb_clk_i 
        = vlSymsp->TOP__barebones_wb_top.__Vcellinp__mtime_regs__wb_clk_i;
    vlTOPp->__VinpClk__TOP__barebones_wb_top____Vcellinp__debug_if__wb_rst_i 
        = vlSymsp->TOP__barebones_wb_top.__Vcellinp__debug_if__wb_rst_i;
    vlTOPp->__VinpClk__TOP__barebones_wb_top____Vcellinp__memory__port1_wb_rst_i 
        = vlSymsp->TOP__barebones_wb_top.__Vcellinp__memory__port1_wb_rst_i;
    vlTOPp->__VinpClk__TOP__barebones_wb_top____Vcellinp__memory__port0_wb_rst_i 
        = vlSymsp->TOP__barebones_wb_top.__Vcellinp__memory__port0_wb_rst_i;
    vlTOPp->__VinpClk__TOP__barebones_wb_top____PVT__mtime_regs__DOT__rst 
        = vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__rst;
}

void Vbarebones_wb_top::_eval_initial(Vbarebones_wb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarebones_wb_top::_eval_initial\n"); );
    Vbarebones_wb_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk_i = vlTOPp->clk_i;
    vlTOPp->__Vclklast__TOP__reset_i = vlTOPp->reset_i;
    vlTOPp->__Vclklast__TOP__barebones_wb_top____Vcellinp__debug_if__wb_clk_i 
        = vlSymsp->TOP__barebones_wb_top.__Vcellinp__debug_if__wb_clk_i;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__barebones_wb_top____Vcellinp__debug_if__wb_rst_i 
        = vlTOPp->__VinpClk__TOP__barebones_wb_top____Vcellinp__debug_if__wb_rst_i;
    vlTOPp->__Vclklast__TOP__barebones_wb_top____Vcellinp__memory__port1_wb_clk_i 
        = vlSymsp->TOP__barebones_wb_top.__Vcellinp__memory__port1_wb_clk_i;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__barebones_wb_top____Vcellinp__memory__port1_wb_rst_i 
        = vlTOPp->__VinpClk__TOP__barebones_wb_top____Vcellinp__memory__port1_wb_rst_i;
    vlTOPp->__Vclklast__TOP__barebones_wb_top____Vcellinp__memory__port0_wb_clk_i 
        = vlSymsp->TOP__barebones_wb_top.__Vcellinp__memory__port0_wb_clk_i;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__barebones_wb_top____Vcellinp__memory__port0_wb_rst_i 
        = vlTOPp->__VinpClk__TOP__barebones_wb_top____Vcellinp__memory__port0_wb_rst_i;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__barebones_wb_top____PVT__mtime_regs__DOT__rst 
        = vlTOPp->__VinpClk__TOP__barebones_wb_top____PVT__mtime_regs__DOT__rst;
    vlTOPp->__Vclklast__TOP__barebones_wb_top____Vcellinp__mtime_regs__wb_clk_i 
        = vlSymsp->TOP__barebones_wb_top.__Vcellinp__mtime_regs__wb_clk_i;
}

void Vbarebones_wb_top::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarebones_wb_top::final\n"); );
    // Variables
    Vbarebones_wb_top__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vbarebones_wb_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vbarebones_wb_top::_eval_settle(Vbarebones_wb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarebones_wb_top::_eval_settle\n"); );
    Vbarebones_wb_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__barebones_wb_top._settle__TOP__barebones_wb_top__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_settle__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData Vbarebones_wb_top::_change_request(Vbarebones_wb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarebones_wb_top::_change_request\n"); );
    Vbarebones_wb_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSymsp->TOP__barebones_wb_top.__Vcellinp__memory__port1_wb_rst_i ^ vlTOPp->__Vchglast__TOP__barebones_wb_top____Vcellinp__memory__port1_wb_rst_i)
         | (vlSymsp->TOP__barebones_wb_top.__Vcellinp__memory__port0_wb_rst_i ^ vlTOPp->__Vchglast__TOP__barebones_wb_top____Vcellinp__memory__port0_wb_rst_i)
         | (vlSymsp->TOP__barebones_wb_top.__Vcellinp__debug_if__wb_rst_i ^ vlTOPp->__Vchglast__TOP__barebones_wb_top____Vcellinp__debug_if__wb_rst_i)
         | (vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__rst ^ vlTOPp->__Vchglast__TOP__barebones_wb_top__mtime_regs__DOT__rst));
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__barebones_wb_top.__Vcellinp__memory__port1_wb_rst_i ^ vlTOPp->__Vchglast__TOP__barebones_wb_top____Vcellinp__memory__port1_wb_rst_i))) VL_DBG_MSGF("        CHANGE: ../../peripherals//memory_2rw_wb.v:26: __Vcellinp__memory__port1_wb_rst_i\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__barebones_wb_top.__Vcellinp__memory__port0_wb_rst_i ^ vlTOPp->__Vchglast__TOP__barebones_wb_top____Vcellinp__memory__port0_wb_rst_i))) VL_DBG_MSGF("        CHANGE: ../../peripherals//memory_2rw_wb.v:13: __Vcellinp__memory__port0_wb_rst_i\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__barebones_wb_top.__Vcellinp__debug_if__wb_rst_i ^ vlTOPp->__Vchglast__TOP__barebones_wb_top____Vcellinp__debug_if__wb_rst_i))) VL_DBG_MSGF("        CHANGE: ../../peripherals//debug_interface_wb.v:11: __Vcellinp__debug_if__wb_rst_i\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__rst ^ vlTOPp->__Vchglast__TOP__barebones_wb_top__mtime_regs__DOT__rst))) VL_DBG_MSGF("        CHANGE: ../../peripherals//mtime_registers_wb.v:26: mtime_regs.rst\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__barebones_wb_top____Vcellinp__memory__port1_wb_rst_i 
        = vlSymsp->TOP__barebones_wb_top.__Vcellinp__memory__port1_wb_rst_i;
    vlTOPp->__Vchglast__TOP__barebones_wb_top____Vcellinp__memory__port0_wb_rst_i 
        = vlSymsp->TOP__barebones_wb_top.__Vcellinp__memory__port0_wb_rst_i;
    vlTOPp->__Vchglast__TOP__barebones_wb_top____Vcellinp__debug_if__wb_rst_i 
        = vlSymsp->TOP__barebones_wb_top.__Vcellinp__debug_if__wb_rst_i;
    vlTOPp->__Vchglast__TOP__barebones_wb_top__mtime_regs__DOT__rst 
        = vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__rst;
    return __req;
}

#ifdef VL_DEBUG
void Vbarebones_wb_top::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarebones_wb_top::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((reset_i & 0xfeU))) {
        Verilated::overWidthError("reset_i");}
    if (VL_UNLIKELY((meip_i & 0xfeU))) {
        Verilated::overWidthError("meip_i");}
}
#endif  // VL_DEBUG

void Vbarebones_wb_top::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarebones_wb_top::_ctor_var_reset\n"); );
    // Body
    clk_i = VL_RAND_RESET_I(1);
    reset_i = VL_RAND_RESET_I(1);
    meip_i = VL_RAND_RESET_I(1);
    fast_irq_i = VL_RAND_RESET_I(16);
    irq_ack_o = VL_RAND_RESET_I(1);
    __VinpClk__TOP__barebones_wb_top____Vcellinp__debug_if__wb_rst_i = VL_RAND_RESET_I(1);
    __VinpClk__TOP__barebones_wb_top____Vcellinp__memory__port1_wb_rst_i = VL_RAND_RESET_I(1);
    __VinpClk__TOP__barebones_wb_top____Vcellinp__memory__port0_wb_rst_i = VL_RAND_RESET_I(1);
    __VinpClk__TOP__barebones_wb_top____PVT__mtime_regs__DOT__rst = VL_RAND_RESET_I(1);
    __Vchglast__TOP__barebones_wb_top____Vcellinp__memory__port1_wb_rst_i = VL_RAND_RESET_I(1);
    __Vchglast__TOP__barebones_wb_top____Vcellinp__memory__port0_wb_rst_i = VL_RAND_RESET_I(1);
    __Vchglast__TOP__barebones_wb_top____Vcellinp__debug_if__wb_rst_i = VL_RAND_RESET_I(1);
    __Vchglast__TOP__barebones_wb_top__mtime_regs__DOT__rst = VL_RAND_RESET_I(1);
    __Vm_traceActivity = 0;
}
