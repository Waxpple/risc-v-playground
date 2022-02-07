// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbarebones_wb_top.h for the primary calling header

#include "Vbarebones_wb_top_barebones_wb_top.h"
#include "Vbarebones_wb_top__Syms.h"

#include "verilated_dpi.h"

//==========
CData/*0:0*/ Vbarebones_wb_top_barebones_wb_top::__Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[128];
CData/*0:0*/ Vbarebones_wb_top_barebones_wb_top::__Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[128];
CData/*0:0*/ Vbarebones_wb_top_barebones_wb_top::__Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[128];
CData/*0:0*/ Vbarebones_wb_top_barebones_wb_top::__Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[128];
CData/*0:0*/ Vbarebones_wb_top_barebones_wb_top::__Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[128];
CData/*0:0*/ Vbarebones_wb_top_barebones_wb_top::__Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[128];
CData/*2:0*/ Vbarebones_wb_top_barebones_wb_top::__Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[128];

VL_CTOR_IMP(Vbarebones_wb_top_barebones_wb_top) {
    VL_CELL(memory, Vbarebones_wb_top_memory_2rw_wb__Ab);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vbarebones_wb_top_barebones_wb_top::__Vconfigure(Vbarebones_wb_top__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vbarebones_wb_top_barebones_wb_top::~Vbarebones_wb_top_barebones_wb_top() {
}

void Vbarebones_wb_top_barebones_wb_top::_settle__TOP__barebones_wb_top__1(Vbarebones_wb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vbarebones_wb_top_barebones_wb_top::_settle__TOP__barebones_wb_top__1\n"); );
    Vbarebones_wb_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__barebones_wb_top.__PVT__slave_adr_begin[0U] = 0U;
    vlSymsp->TOP__barebones_wb_top.__PVT__slave_adr_end[0U] = 0x1dffU;
    vlSymsp->TOP__barebones_wb_top.__PVT__slave_adr_begin[1U] = 0U;
    vlSymsp->TOP__barebones_wb_top.__PVT__slave_adr_end[1U] = 0x1fffU;
    vlSymsp->TOP__barebones_wb_top.__PVT__slave_adr_begin[2U] = 0x2000U;
    vlSymsp->TOP__barebones_wb_top.__PVT__slave_adr_end[2U] = 0x200fU;
    vlSymsp->TOP__barebones_wb_top.__PVT__slave_adr_begin[3U] = 0x2010U;
    vlSymsp->TOP__barebones_wb_top.__PVT__slave_adr_end[3U] = 0x2010U;
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_stall_o 
        = (0xcU & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_stall_o));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_stall_o 
        = (0xbU & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_stall_o));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_stall_o 
        = (7U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_stall_o));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_clk_i 
        = ((0xeU & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_clk_i)) 
           | (IData)(vlTOPp->clk_i));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_clk_i 
        = ((0xdU & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_clk_i)) 
           | ((IData)(vlTOPp->clk_i) << 1U));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_clk_i 
        = ((0xbU & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_clk_i)) 
           | ((IData)(vlTOPp->clk_i) << 2U));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_clk_i 
        = ((7U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_clk_i)) 
           | ((IData)(vlTOPp->clk_i) << 3U));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__rdy_b4_delay 
        = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__current_state) 
           & (0x1fU == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__round_count)));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__mux_Rin_sel 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__current_state;
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__mux_A_sel 
        = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__current_state)
            ? ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__current_state)
                ? (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__round_count)
                : 0U) : 0U);
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A[3U] 
        = (0xffU & (IData)((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB 
                            >> 0x38U)));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A[2U] 
        = (0xffU & (IData)((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB 
                            >> 0x30U)));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A[1U] 
        = (0xffU & (IData)((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB 
                            >> 0x28U)));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A[0U] 
        = (0xffU & (IData)((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB 
                            >> 0x20U)));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B[3U] 
        = (0xffU & (IData)((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB 
                            >> 0x18U)));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B[2U] 
        = (0xffU & (IData)((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB 
                            >> 0x10U)));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B[1U] 
        = (0xffU & (IData)((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB 
                            >> 8U)));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B[0U] 
        = (0xffU & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_rst_i 
        = ((0xeU & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_rst_i)) 
           | (1U & (~ (IData)(vlTOPp->reset_i))));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_rst_i 
        = ((0xdU & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_rst_i)) 
           | (2U & ((~ (IData)(vlTOPp->reset_i)) << 1U)));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_rst_i 
        = ((0xbU & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_rst_i)) 
           | (4U & ((~ (IData)(vlTOPp->reset_i)) << 2U)));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_rst_i 
        = ((7U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_rst_i)) 
           | (8U & ((~ (IData)(vlTOPp->reset_i)) << 3U)));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_cyc_i 
        = (1U | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_cyc_i));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_err_o 
        = (0xcU & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_err_o));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_err_o 
        = (0xbU & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_err_o));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_err_o 
        = (7U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_err_o));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_ack_o 
        = ((7U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_ack_o)) 
           | ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__debug_if__DOT__ack) 
              << 3U));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_ack_o 
        = ((0xcU & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_ack_o)) 
           | (((IData)(vlSymsp->TOP__barebones_wb_top__memory.__PVT__port1_ack) 
               << 1U) | (IData)(vlSymsp->TOP__barebones_wb_top__memory.__PVT__port0_ack)));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_stb_i 
        = (1U | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_stb_i));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_we_i = 
        (0xeU & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_we_i));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_dat_i[0U] = 0U;
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_sel_i[0U] = 0xfU;
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHHs2[0U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg
        [0U];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHHs2[1U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg
        [1U];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHHs2[2U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg
        [2U];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHHs2[3U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg
        [3U];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHLs2[0U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg
        [0U];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHLs2[1U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg
        [1U];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHLs2[2U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg
        [2U];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHLs2[3U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg
        [3U];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLHs2[0U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg
        [0U];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLHs2[1U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg
        [1U];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLHs2[2U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg
        [2U];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLHs2[3U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg
        [3U];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLLs2[0U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg
        [0U];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLLs2[1U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg
        [1U];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLLs2[2U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg
        [2U];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLLs2[3U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg
        [3U];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__masked_irq 
        = ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mie 
            & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
           & VL_NEGATE_I((IData)((1U & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus 
                                        >> 3U)))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux_o_WB 
        = ((0U == (3U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_wb) 
                         >> 5U))) ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_aluout
            : ((1U == (3U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_wb) 
                             >> 5U))) ? ((0U == (3U 
                                                 & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_wb)))
                                          ? ((0x10U 
                                              & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_wb))
                                              ? ((0xffffff00U 
                                                  & (VL_NEGATE_I((IData)(
                                                                         (1U 
                                                                          & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_memout 
                                                                             >> 7U)))) 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_memout))
                                              : (0xffU 
                                                 & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_memout))
                                          : ((1U == 
                                              (3U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_wb)))
                                              ? ((0x10U 
                                                  & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_wb))
                                                  ? 
                                                 ((0xffff0000U 
                                                   & (VL_NEGATE_I((IData)(
                                                                          (1U 
                                                                           & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_memout 
                                                                              >> 0xfU)))) 
                                                      << 0x10U)) 
                                                  | (0xffffU 
                                                     & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_memout))
                                                  : 
                                                 (0xffffU 
                                                  & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_memout))
                                              : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_memout))
                : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_imm));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_ctrl_EX 
        = ((8U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_wb))
            ? ((8U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_wb))
                ? 2U : ((((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs2) 
                          == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_rd)) 
                         & (0U != (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs2)))
                         ? 1U : 2U)) : ((((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs2) 
                                          == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_rd)) 
                                         & (0U != (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs2)))
                                         ? 0U : ((8U 
                                                  & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_wb))
                                                  ? 2U
                                                  : 
                                                 ((((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs2) 
                                                    == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_rd)) 
                                                   & (0U 
                                                      != (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs2)))
                                                   ? 1U
                                                   : 2U))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_ctrl_EX 
        = ((8U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_wb))
            ? ((8U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_wb))
                ? 0U : ((((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs1) 
                          == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_rd)) 
                         & (0U != (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs1)))
                         ? 1U : 0U)) : ((((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs1) 
                                          == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_rd)) 
                                         & (0U != (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs1)))
                                         ? 2U : ((8U 
                                                  & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_wb))
                                                  ? 0U
                                                  : 
                                                 ((((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs1) 
                                                    == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_rd)) 
                                                   & (0U 
                                                      != (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs1)))
                                                   ? 1U
                                                   : 0U))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__L 
        = ((~ ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_wb) 
               >> 3U)) & (1U == (3U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_wb) 
                                       >> 5U))));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_dat_o[3U] = 0U;
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_dat_o[1U] 
        = vlSymsp->TOP__barebones_wb_top__memory.__PVT__port1_wb_dat_o;
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_dat_o[0U] 
        = vlSymsp->TOP__barebones_wb_top__memory.__PVT__port0_wb_dat_o;
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_dat_o[2U] 
        = ((0x2000U == vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__adr)
            ? (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtime)
            : ((0x2004U == vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__adr)
                ? (IData)((vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtime 
                           >> 0x20U)) : (((QData)((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__adr)) 
                                          == vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtimecmp)
                                          ? (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtimecmp)
                                          : (IData)(
                                                    (vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtimecmp 
                                                     >> 0x20U)))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__imm_dec_o 
        = ((0x40U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
            ? ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                ? ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                    ? ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                        ? 0U : ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                 ? 0U : (0x1fU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                  >> 0xfU))))
                    : ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                        ? ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                            ? ((0xfff00000U & (VL_NEGATE_I((IData)(
                                                                   (1U 
                                                                    & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                       >> 0x1fU)))) 
                                               << 0x14U)) 
                               | ((0xff000U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr) 
                                  | ((0x800U & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                >> 9U)) 
                                     | ((0x7e0U & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                   >> 0x14U)) 
                                        | (0x1eU & 
                                           (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                            >> 0x14U))))))
                            : 0U) : ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                      ? ((0xfffff800U 
                                          & (VL_NEGATE_I((IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                     >> 0x1fU)))) 
                                             << 0xbU)) 
                                         | (0x7ffU 
                                            & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                               >> 0x14U)))
                                      : ((0xfffff000U 
                                          & (VL_NEGATE_I((IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                     >> 0x1fU)))) 
                                             << 0xcU)) 
                                         | ((0x800U 
                                             & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                << 4U)) 
                                            | ((0x7e0U 
                                                & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                     >> 7U))))))))
                : 0U) : ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                          ? ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                              ? ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                  ? 0U : ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                           ? (0xfffff000U 
                                              & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                           : 0U)) : 
                             ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                               ? 0U : ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                        ? 0U : ((0xfffff800U 
                                                 & (VL_NEGATE_I((IData)(
                                                                        (1U 
                                                                         & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                            >> 0x1fU)))) 
                                                    << 0xbU)) 
                                                | ((0x7e0U 
                                                    & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                       >> 0x14U)) 
                                                   | (0x1fU 
                                                      & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                         >> 7U)))))))
                          : ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                              ? ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                  ? 0U : ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                           ? (0xfffff000U 
                                              & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                           : ((0xfffff800U 
                                               & (VL_NEGATE_I((IData)(
                                                                      (1U 
                                                                       & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                          >> 0x1fU)))) 
                                                  << 0xbU)) 
                                              | (0x7ffU 
                                                 & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                    >> 0x14U)))))
                              : ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                  ? 0U : ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                           ? 0U : (
                                                   (0xfffff800U 
                                                    & (VL_NEGATE_I((IData)(
                                                                           (1U 
                                                                            & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                               >> 0x1fU)))) 
                                                       << 0xbU)) 
                                                   | (0x7ffU 
                                                      & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                         >> 0x14U))))))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_mem_len 
        = ((0x40U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
            ? 0U : ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                     ? ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                         ? 0U : ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                  ? 0U : ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                           ? 0U : (
                                                   (2U 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                     ? 
                                                    ((0U 
                                                      == 
                                                      (7U 
                                                       & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                          >> 0xcU)))
                                                      ? 0U
                                                      : 
                                                     ((1U 
                                                       == 
                                                       (7U 
                                                        & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                           >> 0xcU)))
                                                       ? 1U
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (7U 
                                                         & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                            >> 0xcU)))
                                                        ? 2U
                                                        : 0U)))
                                                     : 0U)
                                                    : 0U))))
                     : ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                         ? 0U : ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                  ? 0U : ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                           ? 0U : (
                                                   (2U 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                     ? 
                                                    ((0x4000U 
                                                      & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                      ? 
                                                     ((0x2000U 
                                                       & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                       ? 0U
                                                       : 
                                                      ((0x1000U 
                                                        & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                        ? 1U
                                                        : 0U))
                                                      : 
                                                     ((0x2000U 
                                                       & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                       ? 
                                                      ((0x1000U 
                                                        & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                        ? 0U
                                                        : 2U)
                                                       : 
                                                      ((0x1000U 
                                                        & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                        ? 1U
                                                        : 0U)))
                                                     : 0U)
                                                    : 0U))))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_wb_rf_wen 
        = (1U & ((0x40U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                  ? ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                         >> 5U)) | ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                     ? ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                         >> 3U) | (
                                                   (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                    >> 2U) 
                                                   | ((~ 
                                                       (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                        >> 1U)) 
                                                      | (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr))))
                                     : ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                         ? ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                >> 2U)) 
                                            | ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                   >> 1U)) 
                                               | (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)))
                                         : ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                >> 2U)) 
                                            | ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                   >> 1U)) 
                                               | (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr))))))
                  : ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                      ? ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                             >> 4U)) | ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                         >> 3U) | (
                                                   (4U 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                    ? 
                                                   ((~ 
                                                     (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                      >> 1U)) 
                                                    | (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr))
                                                    : 
                                                   ((~ 
                                                     (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                      >> 1U)) 
                                                    | (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)))))
                      : ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                          ? ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                              >> 3U) | ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                         ? ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                >> 1U)) 
                                            | (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr))
                                         : ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                >> 1U)) 
                                            | (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr))))
                          : ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                              >> 3U) | ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                         >> 2U) | (
                                                   (~ 
                                                    (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                     >> 1U)) 
                                                   | (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr))))))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_alu_func 
        = ((0x40U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
            ? ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                ? ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                    ? 0U : ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                             ? ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                 ? ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                     ? ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                         ? 0xeU : 0U)
                                     : 0U) : 0U) : 
                            ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                              ? ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                  ? ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                      ? 0xeU : 0U) : 0U)
                              : ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                  ? ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                      ? ((0x4000U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                          ? ((0x2000U 
                                              & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                              ? ((0x1000U 
                                                  & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                  ? 0xcU
                                                  : 5U)
                                              : ((0x1000U 
                                                  & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                  ? 0xdU
                                                  : 6U))
                                          : ((0x2000U 
                                              & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                              ? 0U : 
                                             ((0x1000U 
                                               & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                               ? 0xbU
                                               : 0xaU)))
                                      : 0U) : 0U))))
                : 0U) : ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                          ? ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                              ? ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                  ? 0U : ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                           ? ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                               ? ((1U 
                                                   & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                   ? 0xfU
                                                   : 0U)
                                               : 0U)
                                           : ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                               ? ((1U 
                                                   & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                   ? 
                                                  ((0x4000U 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                    ? 
                                                   ((0x2000U 
                                                     & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                      ? 4U
                                                      : 3U)
                                                     : 
                                                    ((0x1000U 
                                                      & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                      ? 
                                                     ((0x40000000U 
                                                       & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                       ? 9U
                                                       : 8U)
                                                      : 2U))
                                                    : 
                                                   ((0x2000U 
                                                     & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                      ? 5U
                                                      : 6U)
                                                     : 
                                                    ((0x1000U 
                                                      & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                      ? 7U
                                                      : 
                                                     ((0x20U 
                                                       & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                       ? 
                                                      (1U 
                                                       & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                          >> 0x1eU))
                                                       : 0U))))
                                                   : 0U)
                                               : 0U)))
                              : 0U) : ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                        ? ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                            ? 0U : 
                                           ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                             ? 0U : 
                                            ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                              ? ((1U 
                                                  & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                  ? 
                                                 ((0x4000U 
                                                   & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                   ? 
                                                  ((0x2000U 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                     ? 4U
                                                     : 3U)
                                                    : 
                                                   ((0x1000U 
                                                     & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                     ? 
                                                    ((0x40000000U 
                                                      & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                      ? 9U
                                                      : 8U)
                                                     : 2U))
                                                   : 
                                                  ((0x2000U 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                     ? 5U
                                                     : 6U)
                                                    : 
                                                   ((0x1000U 
                                                     & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                     ? 7U
                                                     : 
                                                    ((0x20U 
                                                      & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                      ? 
                                                     (1U 
                                                      & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                         >> 0x1eU))
                                                      : 0U))))
                                                  : 0U)
                                              : 0U)))
                                        : 0U)));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux6 
        = ((0x40U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
            ? ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                ? ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                    ? ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                        ? 0U : ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                 ? 0U : ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                          ? ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                              ? 1U : 0U)
                                          : 0U))) : 0U)
                : 0U) : ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                          ? ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                              ? ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                  ? 0U : ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                           ? 0U : (
                                                   (2U 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                     ? 
                                                    (((1U 
                                                       == 
                                                       (0x7fU 
                                                        & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                           >> 0x19U))) 
                                                      & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                         >> 5U))
                                                      ? 2U
                                                      : 0U)
                                                     : 0U)
                                                    : 0U)))
                              : 0U) : ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                        ? ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                            ? 0U : 
                                           ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                             ? 0U : 
                                            ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                              ? ((1U 
                                                  & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                  ? 
                                                 (((1U 
                                                    == 
                                                    (0x7fU 
                                                     & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                        >> 0x19U))) 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                      >> 5U))
                                                   ? 2U
                                                   : 0U)
                                                  : 0U)
                                              : 0U)))
                                        : 0U)));
    if ((0x40U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
        if ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
            if ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux5 = 0U;
            } else {
                if ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                    if ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                        if ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                            if ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                                if ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux5 = 1U;
                                } else {
                                    if ((1U & (~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                  >> 3U)))) {
                                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux5 = 0U;
                                    }
                                }
                            } else {
                                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux5 = 0U;
                            }
                        } else {
                            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux5 = 0U;
                        }
                    } else {
                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux5 = 0U;
                    }
                } else {
                    if ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                        if ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                            if ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                                if ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux5 = 1U;
                                } else {
                                    if ((1U & (~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                  >> 3U)))) {
                                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux5 = 0U;
                                    }
                                }
                            } else {
                                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux5 = 0U;
                            }
                        } else {
                            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux5 = 0U;
                        }
                    } else {
                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux5 
                            = (1U & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                      >> 1U) & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr));
                    }
                }
            }
        } else {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux5 = 0U;
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux5 = 0U;
    }
    if ((0x40U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux3 = 0U;
    } else {
        if ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
            if ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                if ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux3 = 0U;
                } else {
                    if ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux3 
                            = (1U & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                      >> 1U) & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr));
                    } else {
                        if ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                            if ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                                if ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                                    if ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux3 = 0U;
                                    }
                                } else {
                                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux3 = 1U;
                                }
                            } else {
                                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux3 = 0U;
                            }
                        } else {
                            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux3 = 0U;
                        }
                    }
                }
            } else {
                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux3 
                    = (1U & ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                 >> 3U)) & ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                >> 2U)) 
                                            & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                >> 1U) 
                                               & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr))));
            }
        } else {
            if ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                if ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux3 = 0U;
                } else {
                    if ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux3 
                            = (1U & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                      >> 1U) & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr));
                    } else {
                        if ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                            if ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                                if ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                                    if ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux3 = 0U;
                                    }
                                } else {
                                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux3 = 1U;
                                }
                            } else {
                                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux3 = 0U;
                            }
                        } else {
                            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux3 = 0U;
                        }
                    }
                }
            } else {
                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux3 
                    = (1U & ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                 >> 3U)) & ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                >> 2U)) 
                                            & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                >> 1U) 
                                               & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr))));
            }
        }
    }
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux7 
        = (1U & ((0x40U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                  ? ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                      >> 5U) & ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                    >> 4U)) & ((8U 
                                                & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                ? (
                                                   (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                    >> 2U) 
                                                   & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                       >> 1U) 
                                                      & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr))
                                                : (
                                                   (4U 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                    ? 
                                                   ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                     >> 1U) 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                    : 
                                                   ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                     >> 1U) 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)))))
                  : ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                      ? ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                          ? ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                 >> 3U)) & ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                             ? ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                 >> 1U) 
                                                & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                             : ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                 >> 1U) 
                                                & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)))
                          : ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                 >> 3U)) & ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                >> 2U)) 
                                            & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                >> 1U) 
                                               & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr))))
                      : ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                          ? ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                 >> 3U)) & ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                             ? ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                 >> 1U) 
                                                & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                             : ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                 >> 1U) 
                                                & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)))
                          : ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                 >> 3U)) & ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                >> 2U)) 
                                            & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                >> 1U) 
                                               & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)))))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux1 
        = (1U & ((0x40U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                  ? ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                      >> 5U) & ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                    >> 4U)) & ((8U 
                                                & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                ? (
                                                   (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                    >> 2U) 
                                                   & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                       >> 1U) 
                                                      & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr))
                                                : (
                                                   (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                    >> 2U) 
                                                   & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                       >> 1U) 
                                                      & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)))))
                  : ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                      ? ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                          >> 4U) & ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                        >> 3U)) & (
                                                   (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                    >> 2U) 
                                                   & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                       >> 1U) 
                                                      & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr))))
                      : ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                          >> 4U) & ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                        >> 3U)) & (
                                                   (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                    >> 2U) 
                                                   & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                       >> 1U) 
                                                      & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)))))));
    if ((0x40U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
        if ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
            if ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr 
                    = (1U & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                              >> 3U) | ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                         >> 2U) | (
                                                   (~ 
                                                    (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                     >> 1U)) 
                                                   | ((~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr) 
                                                      | ((~ 
                                                          (((0x73U 
                                                             == vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr) 
                                                            | (0x100073U 
                                                               == vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) 
                                                           | (0x30200073U 
                                                              == vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr))) 
                                                         & (4U 
                                                            == 
                                                            (7U 
                                                             & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                >> 0xcU)))))))));
            } else {
                if ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                    if ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                        if ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                            if ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                                if ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr = 0U;
                                } else {
                                    if ((1U & (~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                  >> 3U)))) {
                                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr 
                                            = (0U != 
                                               (7U 
                                                & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                   >> 0xcU)));
                                    }
                                }
                            } else {
                                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr = 1U;
                            }
                        } else {
                            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr = 1U;
                        }
                    } else {
                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr = 1U;
                    }
                } else {
                    if ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                        if ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                            if ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                                if ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr = 0U;
                                } else {
                                    if ((1U & (~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                  >> 3U)))) {
                                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr 
                                            = (0U != 
                                               (7U 
                                                & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                   >> 0xcU)));
                                    }
                                }
                            } else {
                                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr = 1U;
                            }
                        } else {
                            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr = 1U;
                        }
                    } else {
                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr 
                            = (1U & ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                         >> 1U)) | 
                                     ((~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr) 
                                      | (1U == (3U 
                                                & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                   >> 0xdU))))));
                    }
                }
            }
        } else {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr = 1U;
        }
    } else {
        if ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
            if ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                if ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr = 1U;
                } else {
                    if ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr 
                            = (1U & ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                         >> 1U)) | 
                                     (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)));
                    } else {
                        if ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                            if ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                                if ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr 
                                        = ((1U != (0x7fU 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                      >> 0x19U))) 
                                           & (((0U 
                                                == 
                                                (7U 
                                                 & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                    >> 0xcU))) 
                                               | (5U 
                                                  == 
                                                  (7U 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                      >> 0xcU))))
                                               ? (0U 
                                                  != 
                                                  ((0x20U 
                                                    & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                       >> 0x1aU)) 
                                                   | (0x1fU 
                                                      & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                         >> 0x19U))))
                                               : (0U 
                                                  != 
                                                  (0x7fU 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                      >> 0x19U)))));
                                } else {
                                    if ((1U & (~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                  >> 5U)))) {
                                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr 
                                            = ((1U 
                                                == 
                                                (7U 
                                                 & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                    >> 0xcU)))
                                                ? (0U 
                                                   != 
                                                   (0x7fU 
                                                    & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                       >> 0x19U)))
                                                : (
                                                   (5U 
                                                    == 
                                                    (7U 
                                                     & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                        >> 0xcU))) 
                                                   & (0U 
                                                      != 
                                                      ((0x20U 
                                                        & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                           >> 0x1aU)) 
                                                       | (0x1fU 
                                                          & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                             >> 0x19U))))));
                                    }
                                }
                            } else {
                                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr = 1U;
                            }
                        } else {
                            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr = 1U;
                        }
                    }
                }
            } else {
                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr 
                    = (1U & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                              >> 3U) | ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                         >> 2U) | (
                                                   (~ 
                                                    (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                     >> 1U)) 
                                                   | ((~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr) 
                                                      | (~ 
                                                         (((0U 
                                                            == 
                                                            (7U 
                                                             & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                >> 0xcU))) 
                                                           | (1U 
                                                              == 
                                                              (7U 
                                                               & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                  >> 0xcU)))) 
                                                          | (2U 
                                                             == 
                                                             (7U 
                                                              & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                 >> 0xcU))))))))));
            }
        } else {
            if ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                if ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr = 1U;
                } else {
                    if ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr 
                            = (1U & ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                         >> 1U)) | 
                                     (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)));
                    } else {
                        if ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                            if ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                                if ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr 
                                        = ((1U != (0x7fU 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                      >> 0x19U))) 
                                           & (((0U 
                                                == 
                                                (7U 
                                                 & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                    >> 0xcU))) 
                                               | (5U 
                                                  == 
                                                  (7U 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                      >> 0xcU))))
                                               ? (0U 
                                                  != 
                                                  ((0x20U 
                                                    & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                       >> 0x1aU)) 
                                                   | (0x1fU 
                                                      & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                         >> 0x19U))))
                                               : (0U 
                                                  != 
                                                  (0x7fU 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                      >> 0x19U)))));
                                } else {
                                    if ((1U & (~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                  >> 5U)))) {
                                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr 
                                            = ((1U 
                                                == 
                                                (7U 
                                                 & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                    >> 0xcU)))
                                                ? (0U 
                                                   != 
                                                   (0x7fU 
                                                    & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                       >> 0x19U)))
                                                : (
                                                   (5U 
                                                    == 
                                                    (7U 
                                                     & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                        >> 0xcU))) 
                                                   & (0U 
                                                      != 
                                                      ((0x20U 
                                                        & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                           >> 0x1aU)) 
                                                       | (0x1fU 
                                                          & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                             >> 0x19U))))));
                                    }
                                }
                            } else {
                                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr = 1U;
                            }
                        } else {
                            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr = 1U;
                        }
                    }
                }
            } else {
                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr 
                    = (1U & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                              >> 3U) | ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                         >> 2U) | (
                                                   (~ 
                                                    (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                     >> 1U)) 
                                                   | ((~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr) 
                                                      | (((3U 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                               >> 0xcU))) 
                                                          | (6U 
                                                             == 
                                                             (7U 
                                                              & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                 >> 0xcU)))) 
                                                         | (7U 
                                                            == 
                                                            (7U 
                                                             & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                >> 0xcU)))))))));
            }
        }
    }
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_wb_csr_wen 
        = (1U & ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                     >> 6U)) | ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                    >> 5U)) | ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                   >> 4U)) 
                                               | ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                   >> 3U) 
                                                  | ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                      >> 2U) 
                                                     | ((~ 
                                                         (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                          >> 1U)) 
                                                        | (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr))))))));
    vlSymsp->TOP__barebones_wb_top.__Vcellinp__debug_if__wb_clk_i 
        = (1U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_clk_i) 
                 >> 3U));
    vlSymsp->TOP__barebones_wb_top.__Vcellinp__memory__port1_wb_clk_i 
        = (1U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_clk_i) 
                 >> 1U));
    vlSymsp->TOP__barebones_wb_top.__Vcellinp__memory__port0_wb_clk_i 
        = (1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_clk_i));
    vlSymsp->TOP__barebones_wb_top.__Vcellinp__mtime_regs__wb_clk_i 
        = (1U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_clk_i) 
                 >> 2U));
    vlSymsp->TOP__barebones_wb_top.core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_block__DOT____Vcellinp__row_0____pinNumber1 
        = ((((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__mux_Rin_sel)
              ? (0x7fffffffU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_R)
              : 0U) << 1U) | (1U & (IData)((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB 
                                            >> (0x3fU 
                                                & ((IData)(0x20U) 
                                                   + 
                                                   (0x1fU 
                                                    & ((IData)(0x1fU) 
                                                       - (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__mux_A_sel)))))))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH[3U] 
        = (0xffffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A
                      [3U] * vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B
                      [3U]));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH[2U] 
        = (0xffffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A
                      [3U] * vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B
                      [2U]));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH[1U] 
        = (0xffffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A
                      [2U] * vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B
                      [3U]));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH[0U] 
        = (0xffffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A
                      [2U] * vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B
                      [2U]));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL[3U] 
        = (0xffffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A
                      [3U] * vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B
                      [1U]));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL[2U] 
        = (0xffffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A
                      [3U] * vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B
                      [0U]));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL[1U] 
        = (0xffffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A
                      [2U] * vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B
                      [1U]));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL[0U] 
        = (0xffffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A
                      [2U] * vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B
                      [0U]));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH[3U] 
        = (0xffffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A
                      [1U] * vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B
                      [3U]));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH[2U] 
        = (0xffffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A
                      [1U] * vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B
                      [2U]));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH[1U] 
        = (0xffffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A
                      [0U] * vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B
                      [3U]));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH[0U] 
        = (0xffffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A
                      [0U] * vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B
                      [2U]));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL[3U] 
        = (0xffffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A
                      [1U] * vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B
                      [1U]));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL[2U] 
        = (0xffffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A
                      [1U] * vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B
                      [0U]));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL[1U] 
        = (0xffffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A
                      [0U] * vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B
                      [1U]));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL[0U] 
        = (0xffffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A
                      [0U] * vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B
                      [0U]));
    vlSymsp->TOP__barebones_wb_top.__Vcellinp__memory__port1_wb_rst_i 
        = (1U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_rst_i) 
                 >> 1U));
    vlSymsp->TOP__barebones_wb_top.__Vcellinp__memory__port0_wb_rst_i 
        = (1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_rst_i));
    vlSymsp->TOP__barebones_wb_top.__Vcellinp__debug_if__wb_rst_i 
        = (1U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_rst_i) 
                 >> 3U));
    vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__rst 
        = (1U & (~ ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_rst_i) 
                    >> 2U)));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__fast_irq_index = 0xfU;
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__PE_valid = 0U;
    while (((0x1fU != (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__fast_irq_index)) 
            & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__PE_valid)))) {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__fast_irq_index 
            = (0x1fU & ((IData)(1U) + (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__fast_irq_index)));
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__PE_valid 
            = (1U & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__masked_irq 
                     >> (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__fast_irq_index)));
    }
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_mem_flush 
        = (1U & (((((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus 
                     >> 3U) & (0U != vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__masked_irq)) 
                   & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_mem)) 
                  & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_dummy))) 
                 | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_err_o)));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX 
        = ((2U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_ctrl_EX))
            ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_data2
            : ((1U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_ctrl_EX))
                ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux_o_WB
                : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_aluout));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX 
        = ((2U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_ctrl_EX))
            ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_aluout
            : ((1U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_ctrl_EX))
                ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux_o_WB
                : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_data1));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__hazard_stall 
        = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__L) 
           & ((((0x1fU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                          >> 0xfU)) == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rd)) 
               & ((((((0xcU == (0xfU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                        >> 3U))) | 
                      (0U == (0x1fU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                       >> 2U)))) | 
                     (8U == (0x1fU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                      >> 2U)))) | (4U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                       >> 2U)))) 
                   | (0xcU == (0x1fU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                        >> 2U)))) | 
                  ((0x1cU == (0x1fU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                       >> 2U))) & (~ 
                                                   (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                    >> 0xeU))))) 
              | (((0x1fU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                            >> 0x14U)) == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rd)) 
                 & (((0x18U == (0x1fU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                         >> 2U))) | 
                     (8U == (0x1fU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                      >> 2U)))) | (0xcU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                       >> 2U)))))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__csr_stall 
        = ((~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_wb_csr_wen)) 
           & (((((0xfffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                            >> 0x14U)) == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_csr_addr)) 
                & (~ ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_wb) 
                      >> 2U))) | (((0xfffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                              >> 0x14U)) 
                                   == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_csr_addr)) 
                                  & (~ ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_wb) 
                                        >> 2U)))) | 
              (((0xfffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                           >> 0x14U)) == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_csr_addr)) 
               & (~ ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_wb) 
                     >> 2U)))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_block__DOT__row_0__DOT__r_temp 
        = (VL_ULL(0x1ffffffff) & ((QData)((IData)(vlSymsp->TOP__barebones_wb_top.core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_block__DOT____Vcellinp__row_0____pinNumber1)) 
                                  - (QData)((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_in__DOT__B_s 
        = ((0x80000000U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX)
            ? ((IData)(1U) + (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX))
            : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX);
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux3_o_EX 
        = ((0x80U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
            ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_imm
            : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX);
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_in__DOT__B1 
        = ((0U != vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX) 
           & (1U == vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_in__DOT__B0 
        = (0U == vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX);
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_in__DOT__A_s 
        = ((0x80000000U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX)
            ? ((IData)(1U) + (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX))
            : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX);
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIVout__DOT__signs 
        = ((2U & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX 
                  >> 0x1eU)) | (1U & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX 
                                      >> 0x1fU)));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux8_o_EX 
        = ((0x1000U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
            ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_imm
            : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX);
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULout__DOT__signs 
        = ((2U & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX 
                  >> 0x1eU)) | (1U & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX 
                                      >> 0x1fU)));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__branch_addr_calc 
        = (((0x100U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
             ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_pc
             : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX) 
           + vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_imm);
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux1_o_EX 
        = ((0x40U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
            ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_pc
            : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX);
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_in__DOT__A1 
        = ((0U != vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX) 
           & (1U == vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_in__DOT__A0 
        = (0U == vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX);
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux1_o_ID 
        = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__hazard_stall)
            ? 0xcU : ((((0x40U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                         ? 0U : ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                  ? ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                      ? ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                          ? 0U : ((4U 
                                                   & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                   ? 
                                                  ((2U 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                     ? 2U
                                                     : 0U)
                                                    : 0U)
                                                   : 0U))
                                      : 0U) : ((0x10U 
                                                & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                ? 0U
                                                : (
                                                   (8U 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                       ? 1U
                                                       : 0U)
                                                      : 0U)))))) 
                       << 5U) | ((0x10U & (((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                >> 6U)) 
                                            << 4U) 
                                           & (((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                   >> 5U)) 
                                               << 4U) 
                                              & (((~ 
                                                   (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                    >> 4U)) 
                                                  << 4U) 
                                                 & (((~ 
                                                      (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                       >> 3U)) 
                                                     << 4U) 
                                                    & (((~ 
                                                         (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                          >> 2U)) 
                                                        << 4U) 
                                                       & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                           << 3U) 
                                                          & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                              & ((~ 
                                                                  (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                   >> 0xeU)) 
                                                                 & ((~ 
                                                                     (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                      >> 0xdU)) 
                                                                    | (~ 
                                                                       (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                        >> 0xcU))))) 
                                                             << 4U)))))))) 
                                 | (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_wb_rf_wen) 
                                     << 3U) | (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_wb_csr_wen) 
                                                << 2U) 
                                               | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_mem_len))))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux3_o_ID 
        = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__hazard_stall)
            ? 0U : (((((0x33U == (0x7fU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) 
                       & (1U == (0x7fU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                          >> 0x19U))))
                       ? (3U & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                >> 0xcU)) : 0U) << 0x13U) 
                    | (((((0x33U == (0x7fU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) 
                          & (1U == (0x7fU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                             >> 0x19U))))
                          ? (3U & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                   >> 0xcU)) : 0U) 
                        << 0x11U) | ((0xffff0000U & 
                                      ((((0x33U == 
                                          (0x7fU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) 
                                         & (1U == (0x7fU 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                      >> 0x19U)))) 
                                        << 0x10U) & 
                                       (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                        << 2U))) | 
                                     ((((0x33U == (0x7fU 
                                                   & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) 
                                        & (1U == (0x7fU 
                                                  & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                     >> 0x19U)))) 
                                       << 0xfU) | (
                                                   (0x4000U 
                                                    & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                        << 8U) 
                                                       & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                           << 9U) 
                                                          & (((~ 
                                                               (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                >> 4U)) 
                                                              << 0xeU) 
                                                             & (((~ 
                                                                  (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                   >> 3U)) 
                                                                 << 0xeU) 
                                                                & (((~ 
                                                                     (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                      >> 2U)) 
                                                                    << 0xeU) 
                                                                   & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                       << 0xdU) 
                                                                      & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                         << 0xeU)))))))) 
                                                   | ((0x2000U 
                                                       & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                           << 7U) 
                                                          & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                              << 8U) 
                                                             & (((~ 
                                                                  (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                   >> 4U)) 
                                                                 & ((8U 
                                                                     & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                                     ? 
                                                                    ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                      >> 2U) 
                                                                     & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                         >> 1U) 
                                                                        & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr))
                                                                     : 
                                                                    ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                      >> 2U) 
                                                                     & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                         >> 1U) 
                                                                        & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)))) 
                                                                << 0xdU)))) 
                                                      | ((0x1000U 
                                                          & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                              << 6U) 
                                                             & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                 << 7U) 
                                                                & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                    << 8U) 
                                                                   & (((~ 
                                                                        (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                         >> 3U)) 
                                                                       << 0xcU) 
                                                                      & (((~ 
                                                                           (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                            >> 2U)) 
                                                                          << 0xcU) 
                                                                         & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                             << 0xbU) 
                                                                            & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                                << 0xcU) 
                                                                               & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                                >> 2U))))))))) 
                                                         | (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux7) 
                                                             << 0xbU) 
                                                            | (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux6) 
                                                                << 9U) 
                                                               | (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux5) 
                                                                   << 8U) 
                                                                  | (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux3) 
                                                                      << 7U) 
                                                                     | (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux1) 
                                                                         << 6U) 
                                                                        | ((((0x40U 
                                                                              & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                                              ? 
                                                                             ((0x20U 
                                                                               & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                                               ? 
                                                                              ((0x10U 
                                                                                & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                                                ? 
                                                                               ((8U 
                                                                                & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                                                 ? 0U
                                                                                 : 
                                                                                ((4U 
                                                                                & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                                                 ? 0U
                                                                                 : 
                                                                                ((2U 
                                                                                & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                                                 ? 
                                                                                ((1U 
                                                                                & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                                                 ? 
                                                                                ((1U 
                                                                                == 
                                                                                (3U 
                                                                                & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                                >> 0xcU)))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((2U 
                                                                                == 
                                                                                (3U 
                                                                                & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                                >> 0xcU)))
                                                                                 ? 1U
                                                                                 : 
                                                                                ((3U 
                                                                                == 
                                                                                (3U 
                                                                                & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                                >> 0xcU)))
                                                                                 ? 2U
                                                                                 : 0U)))
                                                                                 : 0U)
                                                                                 : 0U)))
                                                                                : 0U)
                                                                               : 0U)
                                                                              : 0U) 
                                                                            << 4U) 
                                                                           | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_alu_func)))))))))))))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULout__DOT__P_s 
        = ((2U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULout__DOT__signs))
            ? ((1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULout__DOT__signs))
                ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv
                : (VL_ULL(1) + (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv)))
            : ((1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULout__DOT__signs))
                ? (VL_ULL(1) + (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv))
                : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__branch_target_addr 
        = ((0xfffffffeU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__branch_addr_calc) 
           | (1U & ((~ ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                            >> 8U)) & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                                       >> 0xdU))) & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__branch_addr_calc)));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__aluout_EX 
        = ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
            ? ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                ? ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                    ? ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                        ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux3_o_EX
                        : ((IData)(4U) + vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux1_o_EX))
                    : ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                        ? (VL_GTES_III(1,32,32, vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux1_o_EX, vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux3_o_EX)
                            ? 1U : 0U) : ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux1_o_EX 
                                           >= vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux3_o_EX)
                                           ? 1U : 0U)))
                : ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                    ? ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                        ? ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux1_o_EX 
                            == vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux3_o_EX)
                            ? 0U : 1U) : ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux1_o_EX 
                                           == vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux3_o_EX)
                                           ? 1U : 0U))
                    : ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                        ? VL_SHIFTRS_III(32,32,5, vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux1_o_EX, 
                                         (0x1fU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux3_o_EX))
                        : (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux1_o_EX 
                           >> (0x1fU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux3_o_EX)))))
            : ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                ? ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                    ? ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                        ? (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux1_o_EX 
                           << (0x1fU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux3_o_EX))
                        : (VL_LTS_III(1,32,32, vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux1_o_EX, vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux3_o_EX)
                            ? 1U : 0U)) : ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                            ? ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux1_o_EX 
                                                < vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux3_o_EX)
                                                ? 1U
                                                : 0U)
                                            : (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux1_o_EX 
                                               & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux3_o_EX)))
                : ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                    ? ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                        ? (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux1_o_EX 
                           | vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux3_o_EX)
                        : (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux1_o_EX 
                           ^ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux3_o_EX))
                    : ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                        ? (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux1_o_EX 
                           - vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux3_o_EX)
                        : (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux1_o_EX 
                           + vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux3_o_EX)))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status 
        = ((((0U != vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX) 
             & ((1U != vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX) 
                & ((0xffffffffU == vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX) 
                   & ((0x10000U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                       ? (~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                             >> 0x13U)) : ((0U == (3U 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                                                      >> 0x11U))) 
                                           | (1U == 
                                              (3U & 
                                               (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                                                >> 0x11U)))))))) 
            << 5U) | (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_in__DOT__B1) 
                       << 4U) | (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_in__DOT__B0) 
                                  << 3U) | ((((0U != vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX) 
                                              & ((1U 
                                                  != vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX) 
                                                 & ((0xffffffffU 
                                                     == vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX) 
                                                    & ((0x10000U 
                                                        & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                        ? 
                                                       (~ 
                                                        (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                                                         >> 0x13U))
                                                        : 
                                                       (3U 
                                                        != 
                                                        (3U 
                                                         & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                                                            >> 0x11U))))))) 
                                             << 2U) 
                                            | (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_in__DOT__A1) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_in__DOT__A0))))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_wmask_o 
        = (0xfU & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_misaligned)
                    ? ((1U == (3U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_mem) 
                                     >> 1U))) ? 1U : 
                       (0xfU >> (7U & ((IData)(4U) 
                                       - (3U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__LS_UNIT__DOT__addr_i_reg)))))
                    : ((0U == (3U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_mem) 
                                     >> 1U))) ? ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__aluout_EX))
                        : ((1U == (3U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_mem) 
                                         >> 1U))) ? 
                           ((IData)(3U) << (3U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__aluout_EX))
                            : ((IData)(0xfU) << (3U 
                                                 & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__aluout_EX))))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_o 
        = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_misaligned)
            ? ((1U == (3U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_mem) 
                             >> 1U))) ? (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX 
                                         >> 8U) : (
                                                   (0x1fU 
                                                    >= 
                                                    (((IData)(4U) 
                                                      - 
                                                      (3U 
                                                       & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__LS_UNIT__DOT__addr_i_reg)) 
                                                     << 3U))
                                                    ? 
                                                   (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX 
                                                    >> 
                                                    (((IData)(4U) 
                                                      - 
                                                      (3U 
                                                       & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__LS_UNIT__DOT__addr_i_reg)) 
                                                     << 3U))
                                                    : 0U))
            : ((0x1fU >= (0x18U & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__aluout_EX 
                                   << 3U))) ? (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX 
                                               << (0x18U 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__aluout_EX 
                                                      << 3U)))
                : 0U));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_addr_o 
        = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_misaligned)
            ? ((IData)(4U) + (0xfffffffcU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__LS_UNIT__DOT__addr_i_reg))
            : (0xfffffffcU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__aluout_EX));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch 
        = (1U & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                  >> 0xdU) | ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                               >> 0xeU) & (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__aluout_EX))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__fastres 
        = ((0x20U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
            ? ((0x10U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                ? 0U : ((8U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                         ? 0U : ((4U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                                  ? ((2U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                                      ? 0U : ((1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                                               ? 0U
                                               : ((0x10000U 
                                                   & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                   ? 
                                                  ((0x100000U 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (3U 
                                                     & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                                                        >> 0x11U)))
                                                    ? 1U
                                                    : 0U))))
                                  : ((2U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                                      ? ((1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                                          ? 0U : ((0x10000U 
                                                   & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                   ? 
                                                  ((0x100000U 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                    ? 0U
                                                    : 0xffffffffU)
                                                   : 0xffffffffU))
                                      : ((1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                                          ? 0U : ((0x10000U 
                                                   & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                   ? 
                                                  ((0x100000U 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX)))
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (3U 
                                                     & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                                                        >> 0x11U)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX))
                                                    : 0xffffffffU)))))))
            : ((0x10U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                ? ((8U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                    ? 0U : ((4U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                             ? ((2U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                                 ? 0U : ((1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                                          ? 0U : ((0x10000U 
                                                   & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                   ? 
                                                  ((0x100000U 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                    ? 0U
                                                    : 0xffffffffU)
                                                   : 0xffffffffU)))
                             : ((2U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                                 ? ((1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                                     ? 0U : ((0x10000U 
                                              & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                              ? ((0x100000U 
                                                  & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                  ? 0U
                                                  : 1U)
                                              : ((0U 
                                                  == 
                                                  (3U 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                                                      >> 0x11U)))
                                                  ? 1U
                                                  : 0U)))
                                 : ((1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                                     ? 0U : ((0x10000U 
                                              & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                              ? ((0x100000U 
                                                  & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                  ? 0U
                                                  : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX)
                                              : ((0U 
                                                  == 
                                                  (3U 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                                                      >> 0x11U)))
                                                  ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX
                                                  : 0U))))))
                : ((8U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                    ? ((4U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                        ? ((1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                            ? 0U : ((3U != (3U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status) 
                                                  >> 1U)))
                                     ? ((0x10000U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                         ? ((0x100000U 
                                             & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                             ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX
                                             : 0xffffffffU)
                                         : 0U) : 0U))
                        : ((2U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                            ? ((1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                                ? 0U : ((3U != (3U 
                                                & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status) 
                                                   >> 1U)))
                                         ? ((0x10000U 
                                             & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                             ? ((0x100000U 
                                                 & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                 ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX
                                                 : 0xffffffffU)
                                             : 0U) : 0U))
                            : ((1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                                ? 0U : ((3U != (3U 
                                                & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status) 
                                                   >> 1U)))
                                         ? ((0x10000U 
                                             & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                             ? ((0x100000U 
                                                 & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                 ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX
                                                 : 0xffffffffU)
                                             : 0U) : 0U))))
                    : ((4U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                        ? ((2U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                            ? 0U : ((1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                                     ? 0U : ((0x10000U 
                                              & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                              ? ((0x100000U 
                                                  & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                  ? 0xffffffffU
                                                  : 0U)
                                              : ((0U 
                                                  == 
                                                  (3U 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                                                      >> 0x11U)))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + 
                                                  (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX))
                                                  : 0xffffffffU))))
                        : ((2U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                            ? ((1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                                ? 0U : ((0x10000U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                         ? ((0x100000U 
                                             & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                             ? 1U : 0U)
                                         : ((0U == 
                                             (3U & 
                                              (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                                               >> 0x11U)))
                                             ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX
                                             : 0U)))
                            : 0U)))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__mux_fastres_sel_temp 
        = (1U & (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status) 
                  >> 5U) | (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status) 
                             >> 4U) | ((8U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                                        ? ((4U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                                            ? ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status) 
                                               | (3U 
                                                  != 
                                                  (3U 
                                                   & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status) 
                                                      >> 1U))))
                                            : ((2U 
                                                & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                                                ? ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status) 
                                                   | (3U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status) 
                                                          >> 1U))))
                                                : ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status) 
                                                   | (3U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status) 
                                                          >> 1U))))))
                                        : (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status) 
                                            >> 2U) 
                                           | (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status) 
                                               >> 1U) 
                                              | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status)))))));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_sel_i[1U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_wmask_o;
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_sel_i[2U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_wmask_o;
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_sel_i[3U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_wmask_o;
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_dat_i[1U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_o;
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_dat_i[2U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_o;
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_dat_i[3U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_o;
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_adr_i[1U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_addr_o;
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_adr_i[2U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_addr_o;
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_adr_i[3U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_addr_o;
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__instr_addr_misaligned 
        = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch) 
           & (0U != (3U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__branch_target_addr)));
    vlSymsp->TOP__barebones_wb_top.__Vtableidx1 = (
                                                   (0x40U 
                                                    & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                                                       >> 0xaU)) 
                                                   | (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__mux_fastres_sel_temp) 
                                                       << 5U) 
                                                      | ((0x10U 
                                                          & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                                                             >> 0xbU)) 
                                                         | (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_rdy) 
                                                             << 3U) 
                                                            | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__current_state)))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start 
        = vlSymsp->TOP__barebones_wb_top.__Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start
        [vlSymsp->TOP__barebones_wb_top.__Vtableidx1];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en 
        = vlSymsp->TOP__barebones_wb_top.__Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en
        [vlSymsp->TOP__barebones_wb_top.__Vtableidx1];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en 
        = vlSymsp->TOP__barebones_wb_top.__Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en
        [vlSymsp->TOP__barebones_wb_top.__Vtableidx1];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel 
        = vlSymsp->TOP__barebones_wb_top.__Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel
        [vlSymsp->TOP__barebones_wb_top.__Vtableidx1];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel 
        = vlSymsp->TOP__barebones_wb_top.__Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel
        [vlSymsp->TOP__barebones_wb_top.__Vtableidx1];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__muldiv_done_EX 
        = vlSymsp->TOP__barebones_wb_top.__Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX
        [vlSymsp->TOP__barebones_wb_top.__Vtableidx1];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state 
        = vlSymsp->TOP__barebones_wb_top.__Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state
        [vlSymsp->TOP__barebones_wb_top.__Vtableidx1];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__pending_exception 
        = (((((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr) 
              | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__instr_addr_misaligned)) 
             | (0x73U == vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) 
            | (0x100073U == vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) 
           & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch)));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_ex_flush 
        = (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_mem_flush) 
            | ((((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus 
                  >> 3U) & (0U != vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__masked_irq)) 
                & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_dummy))) 
               & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_misaligned)))) 
           | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__instr_addr_misaligned));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_Rin_en 
        = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__current_state)
            ? (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__current_state)
            : (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_Q_en 
        = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__current_state)
            ? (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__current_state)
            : (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start));
    if (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__current_state) {
        if (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__current_state) {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__start_count 
                = (0x1fU != (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__round_count));
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__start_count 
            = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start;
    }
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__next_state 
        = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__current_state)
            ? ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__current_state) 
               & (0x1fU != (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__round_count)))
            : (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__muldiv_stall_EX 
        = (1U & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                  >> 0xfU) & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__muldiv_done_EX))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_if_flush 
        = (((((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus 
               >> 3U) & (0U != vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__masked_irq)) 
             | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__STATE)) 
            | ((0x30200073U == vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr) 
               & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch)))) 
           | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__pending_exception));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_id_flush 
        = (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_ex_flush) 
            | ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus 
                >> 3U) & (0U != vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__masked_irq))) 
           | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__pending_exception));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mem_wen_EX 
        = (1U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__muldiv_stall_EX) 
                 | ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_ex_flush) 
                    | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_mem))));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_we_i = 
        ((0xdU & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_we_i)) 
         | (2U & ((~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mem_wen_EX)) 
                  << 1U)));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_we_i = 
        ((0xbU & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_we_i)) 
         | (4U & ((~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mem_wen_EX)) 
                  << 2U)));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_we_i = 
        ((7U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_we_i)) 
         | (8U & ((~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mem_wen_EX)) 
                  << 3U)));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__misaligned_access 
        = ((((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__L) 
             | (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mem_wen_EX))) 
            & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_misaligned))) 
           & (((2U == (3U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_mem) 
                             >> 1U))) & (0U != (3U 
                                                & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__aluout_EX))) 
              | ((1U == (3U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_mem) 
                               >> 1U))) & (3U == (3U 
                                                  & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__aluout_EX)))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_req_o 
        = (1U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__L) 
                 | (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mem_wen_EX))));
    vlSymsp->TOP__barebones_wb_top.__PVT__data_wb_cyc_o 
        = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_req_o) 
           | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_cyc));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_cyc_i 
        = ((0xdU & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_cyc_i)) 
           | ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__data_wb_cyc_o) 
              << 1U));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_cyc_i 
        = ((0xbU & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_cyc_i)) 
           | ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__data_wb_cyc_o) 
              << 2U));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_cyc_i 
        = ((7U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_cyc_i)) 
           | ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__data_wb_cyc_o) 
              << 3U));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_ack_o 
        = ((0xbU & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_ack_o)) 
           | (0xfffffffcU & (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__stb) 
                              << 2U) & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_cyc_i))));
    vlSymsp->TOP__barebones_wb_top.__PVT__valid = 0U;
    vlSymsp->TOP__barebones_wb_top.__PVT__k = 1U;
    while ((VL_GTS_III(1,32,32, 4U, vlSymsp->TOP__barebones_wb_top.__PVT__k) 
            & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__valid)))) {
        if ((1U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__r_stb) 
                   >> (3U & vlSymsp->TOP__barebones_wb_top.__PVT__k)))) {
            vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_dat_i 
                = vlSymsp->TOP__barebones_wb_top.__PVT__wb_dat_o
                [(3U & vlSymsp->TOP__barebones_wb_top.__PVT__k)];
            vlSymsp->TOP__barebones_wb_top.__PVT__valid = 1U;
            vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_stall_i 
                = (1U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_stall_o) 
                         >> (3U & vlSymsp->TOP__barebones_wb_top.__PVT__k)));
            vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_err_i 
                = (1U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_err_o) 
                         >> (3U & vlSymsp->TOP__barebones_wb_top.__PVT__k)));
            vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_ack_i 
                = (1U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_ack_o) 
                         >> (3U & vlSymsp->TOP__barebones_wb_top.__PVT__k)));
        } else {
            vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_dat_i = 0U;
            vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_stall_i = 0U;
            vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_err_i = 0U;
            vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_ack_i = 0U;
        }
        vlSymsp->TOP__barebones_wb_top.__PVT__k = ((IData)(1U) 
                                                   + vlSymsp->TOP__barebones_wb_top.__PVT__k);
    }
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__memout 
        = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_misaligned)
            ? ((2U == (3U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_mem) 
                             >> 1U))) ? ((3U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_addr_bits))
                                          ? ((0xffffff00U 
                                              & (vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_dat_i 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_memout))
                                          : ((2U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_addr_bits))
                                              ? ((0xffff0000U 
                                                  & (vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_dat_i 
                                                     << 0x10U)) 
                                                 | (0xffffU 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_memout))
                                              : ((0xff000000U 
                                                  & (vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_dat_i 
                                                     << 0x18U)) 
                                                 | (0xffffffU 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_memout))))
                : ((0xff00U & (vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_dat_i 
                               << 8U)) | (0xffU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_memout)))
            : ((2U == (3U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_mem) 
                             >> 1U))) ? ((3U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_addr_bits))
                                          ? (0xffU 
                                             & (vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_dat_i 
                                                >> 0x18U))
                                          : ((2U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_addr_bits))
                                              ? (0xffffU 
                                                 & (vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_dat_i 
                                                    >> 0x10U))
                                              : ((1U 
                                                  == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_addr_bits))
                                                  ? 
                                                 (0xffffffU 
                                                  & (vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_dat_i 
                                                     >> 8U))
                                                  : vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_dat_i)))
                : ((1U == (3U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_mem) 
                                 >> 1U))) ? ((3U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_addr_bits))
                                              ? (0xffU 
                                                 & (vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_dat_i 
                                                    >> 0x18U))
                                              : ((2U 
                                                  == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_addr_bits))
                                                  ? 
                                                 (0xffffU 
                                                  & (vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_dat_i 
                                                     >> 0x10U))
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_addr_bits))
                                                   ? 
                                                  (0xffffU 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_dat_i 
                                                      >> 8U))
                                                   : 
                                                  (0xffffU 
                                                   & vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_dat_i))))
                    : ((3U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_addr_bits))
                        ? (0xffU & (vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_dat_i 
                                    >> 0x18U)) : ((2U 
                                                   == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_addr_bits))
                                                   ? 
                                                  (0xffU 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_dat_i 
                                                      >> 0x10U))
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_addr_bits))
                                                    ? 
                                                   (0xffU 
                                                    & (vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_dat_i 
                                                       >> 8U))
                                                    : 
                                                   (0xffU 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_dat_i)))))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_EX 
        = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__muldiv_stall_EX) 
           | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_stall_i));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_ID 
        = (((((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__hazard_stall) 
              | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__muldiv_stall_EX)) 
             | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__misaligned_access)) 
            | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_stall_i)) 
           | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__csr_stall));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__pc_i 
        = ((IData)(vlTOPp->reset_i) ? (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__STATE) 
                                        | ((0x30200073U 
                                            == vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr) 
                                           & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch))))
                                        ? (((0x30200073U 
                                             == vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr) 
                                            & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch)))
                                            ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mepc
                                            : ((1U 
                                                & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mtvec)
                                                ? (
                                                   (0x80000000U 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause)
                                                    ? 
                                                   ((0xfffffffeU 
                                                     & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mtvec) 
                                                    + 
                                                    (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause 
                                                     << 2U))
                                                    : 
                                                   (0xfffffffeU 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mtvec))
                                                : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mtvec))
                                        : ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch)
                                            ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__branch_target_addr
                                            : ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_ID)
                                                ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__pc_o
                                                : ((IData)(4U) 
                                                   + vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__pc_o))))
            : 0U);
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_adr_i[0U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__pc_i;
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_stb_i 
        = ((0xdU & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_stb_i)) 
           | (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_req_o) 
               & ((vlSymsp->TOP__barebones_wb_top.__PVT__slave_adr_begin
                   [1U] <= vlSymsp->TOP__barebones_wb_top.__PVT__wb_adr_i
                   [1U]) & (vlSymsp->TOP__barebones_wb_top.__PVT__wb_adr_i
                            [1U] <= vlSymsp->TOP__barebones_wb_top.__PVT__slave_adr_end
                            [1U]))) << 1U));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_stb_i 
        = ((0xbU & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_stb_i)) 
           | (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_req_o) 
               & ((vlSymsp->TOP__barebones_wb_top.__PVT__slave_adr_begin
                   [2U] <= vlSymsp->TOP__barebones_wb_top.__PVT__wb_adr_i
                   [2U]) & (vlSymsp->TOP__barebones_wb_top.__PVT__wb_adr_i
                            [2U] <= vlSymsp->TOP__barebones_wb_top.__PVT__slave_adr_end
                            [2U]))) << 2U));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_stb_i 
        = ((7U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_stb_i)) 
           | (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_req_o) 
               & ((vlSymsp->TOP__barebones_wb_top.__PVT__slave_adr_begin
                   [3U] <= vlSymsp->TOP__barebones_wb_top.__PVT__wb_adr_i
                   [3U]) & (vlSymsp->TOP__barebones_wb_top.__PVT__wb_adr_i
                            [3U] <= vlSymsp->TOP__barebones_wb_top.__PVT__slave_adr_end
                            [3U]))) << 3U));
}

VL_INLINE_OPT void Vbarebones_wb_top_barebones_wb_top::_sequent__TOP__barebones_wb_top__2(Vbarebones_wb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vbarebones_wb_top_barebones_wb_top::_sequent__TOP__barebones_wb_top__2\n"); );
    Vbarebones_wb_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg__v0;
    CData/*0:0*/ __Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg__v4;
    CData/*0:0*/ __Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg__v0;
    CData/*0:0*/ __Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg__v4;
    CData/*0:0*/ __Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg__v0;
    CData/*0:0*/ __Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg__v4;
    CData/*0:0*/ __Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg__v0;
    CData/*0:0*/ __Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg__v4;
    SData/*15:0*/ __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg__v0;
    SData/*15:0*/ __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg__v1;
    SData/*15:0*/ __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg__v2;
    SData/*15:0*/ __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg__v3;
    SData/*15:0*/ __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg__v0;
    SData/*15:0*/ __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg__v1;
    SData/*15:0*/ __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg__v2;
    SData/*15:0*/ __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg__v3;
    SData/*15:0*/ __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg__v0;
    SData/*15:0*/ __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg__v1;
    SData/*15:0*/ __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg__v2;
    SData/*15:0*/ __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg__v3;
    SData/*15:0*/ __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg__v0;
    SData/*15:0*/ __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg__v1;
    SData/*15:0*/ __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg__v2;
    SData/*15:0*/ __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg__v3;
    IData/*31:0*/ __Vdly__core0__DOT__core0__DOT__csr_reg_out;
    IData/*31:0*/ __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip;
    IData/*31:0*/ __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus;
    IData/*31:0*/ __Vdly__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_R;
    IData/*31:0*/ __Vdly__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_Q;
    // Body
    __Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg__v0 = 0U;
    __Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg__v4 = 0U;
    __Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg__v0 = 0U;
    __Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg__v4 = 0U;
    __Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg__v0 = 0U;
    __Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg__v4 = 0U;
    __Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg__v0 = 0U;
    __Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg__v4 = 0U;
    __Vdly__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_Q 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_Q;
    __Vdly__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_R 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_R;
    __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip;
    __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus;
    __Vdly__core0__DOT__core0__DOT__csr_reg_out = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__csr_reg_out;
    if (vlTOPp->reset_i) {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__i = 0x20U;
    }
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__round_count 
        = ((IData)(vlTOPp->reset_i) ? ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__start_count)
                                        ? (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__round_count)))
                                        : 0U) : 0U);
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__current_state 
        = ((IData)(vlTOPp->reset_i) & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__next_state));
    if (vlTOPp->reset_i) {
        __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg__v0 
            = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL
            [0U];
        __Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg__v0 = 1U;
        __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg__v1 
            = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL
            [1U];
        __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg__v2 
            = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL
            [2U];
        __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg__v3 
            = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL
            [3U];
    } else {
        __Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg__v4 = 1U;
    }
    if (vlTOPp->reset_i) {
        __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg__v0 
            = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH
            [0U];
        __Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg__v0 = 1U;
        __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg__v1 
            = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH
            [1U];
        __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg__v2 
            = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH
            [2U];
        __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg__v3 
            = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH
            [3U];
    } else {
        __Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg__v4 = 1U;
    }
    if (vlTOPp->reset_i) {
        __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg__v0 
            = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL
            [0U];
        __Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg__v0 = 1U;
        __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg__v1 
            = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL
            [1U];
        __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg__v2 
            = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL
            [2U];
        __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg__v3 
            = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL
            [3U];
    } else {
        __Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg__v4 = 1U;
    }
    if (vlTOPp->reset_i) {
        __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg__v0 
            = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH
            [0U];
        __Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg__v0 = 1U;
        __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg__v1 
            = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH
            [1U];
        __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg__v2 
            = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH
            [2U];
        __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg__v3 
            = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH
            [3U];
    } else {
        __Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg__v4 = 1U;
    }
    if (vlTOPp->reset_i) {
        if (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_req_o) {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_cyc = 1U;
        } else {
            if (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_ack_i) 
                 | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_err_i))) {
                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_cyc = 0U;
            }
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_cyc = 0U;
    }
    if (vlTOPp->reset_i) {
        if (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start) {
            if (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_Q_en) {
                __Vdly__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_Q 
                    = ((1U & __Vdly__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_Q) 
                       | (0xfffffffeU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_Q 
                                         << 1U)));
                __Vdly__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_Q 
                    = ((0xfffffffeU & __Vdly__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_Q) 
                       | (1U & (~ (IData)((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_block__DOT__row_0__DOT__r_temp 
                                           >> 0x20U)))));
            } else {
                __Vdly__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_Q 
                    = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_Q;
            }
        } else {
            __Vdly__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_Q = 0U;
        }
    } else {
        __Vdly__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_Q = 0U;
    }
    __Vdly__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_R 
        = ((IData)(vlTOPp->reset_i) ? ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start)
                                        ? ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_Rin_en)
                                            ? ((1U 
                                                & (IData)(
                                                          (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_block__DOT__row_0__DOT__r_temp 
                                                           >> 0x20U)))
                                                ? vlSymsp->TOP__barebones_wb_top.core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_block__DOT____Vcellinp__row_0____pinNumber1
                                                : (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_block__DOT__row_0__DOT__r_temp))
                                            : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_R)
                                        : 0U) : 0U);
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_rdy 
        = ((IData)(vlTOPp->reset_i) & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__rdy_b4_delay));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__LS_UNIT__DOT__addr_i_reg 
        = ((IData)(vlTOPp->reset_i) ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__aluout_EX
            : 0U);
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__current_state 
        = ((IData)(vlTOPp->reset_i) ? (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state)
            : 0U);
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_addr_bits 
        = ((IData)(vlTOPp->reset_i) ? (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_EX) 
                                        | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_ex_flush))
                                        ? 0U : (3U 
                                                & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__aluout_EX))
            : 0U);
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_misaligned 
        = ((IData)(vlTOPp->reset_i) & ((~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_mem_flush)) 
                                       & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_misaligned)));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_dummy 
        = ((IData)(vlTOPp->reset_i) & (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_EX) 
                                        | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_ex_flush)) 
                                       | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_dummy)));
    if (vlTOPp->reset_i) {
        __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
            = ((0xfffff7ffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
               | ((IData)(vlTOPp->meip_i) << 0xbU));
        __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
            = ((0xffffff7fU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
               | (0x80U & ((~ (((IData)((vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtime 
                                         >> 0x20U)) 
                                < (IData)((vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtimecmp 
                                           >> 0x20U))) 
                               | (((IData)((vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtime 
                                            >> 0x20U)) 
                                   == (IData)((vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtimecmp 
                                               >> 0x20U))) 
                                  & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtime) 
                                     < (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtimecmp))))) 
                           << 7U)));
        __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
            = (0xfffffff7U & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip);
        if (((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__masked_irq 
              >> 0x10U) & (0x10U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__fast_irq_index)))) {
            __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                = ((0xfffeffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                   | (0x10000U & ((IData)(vlTOPp->fast_irq_i) 
                                  << 0x10U)));
        } else {
            if ((1U & (~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                          >> 0x10U)))) {
                __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                    = ((0xfffeffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                       | (0x10000U & ((IData)(vlTOPp->fast_irq_i) 
                                      << 0x10U)));
            }
        }
        if (((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__masked_irq 
              >> 0x11U) & (0x11U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__fast_irq_index)))) {
            __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                = ((0xfffdffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                   | (0x20000U & ((IData)(vlTOPp->fast_irq_i) 
                                  << 0x10U)));
        } else {
            if ((1U & (~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                          >> 0x11U)))) {
                __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                    = ((0xfffdffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                       | (0x20000U & ((IData)(vlTOPp->fast_irq_i) 
                                      << 0x10U)));
            }
        }
        if (((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__masked_irq 
              >> 0x12U) & (0x12U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__fast_irq_index)))) {
            __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                = ((0xfffbffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                   | (0x40000U & ((IData)(vlTOPp->fast_irq_i) 
                                  << 0x10U)));
        } else {
            if ((1U & (~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                          >> 0x12U)))) {
                __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                    = ((0xfffbffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                       | (0x40000U & ((IData)(vlTOPp->fast_irq_i) 
                                      << 0x10U)));
            }
        }
        if (((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__masked_irq 
              >> 0x13U) & (0x13U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__fast_irq_index)))) {
            __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                = ((0xfff7ffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                   | (0x80000U & ((IData)(vlTOPp->fast_irq_i) 
                                  << 0x10U)));
        } else {
            if ((1U & (~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                          >> 0x13U)))) {
                __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                    = ((0xfff7ffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                       | (0x80000U & ((IData)(vlTOPp->fast_irq_i) 
                                      << 0x10U)));
            }
        }
        if (((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__masked_irq 
              >> 0x14U) & (0x14U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__fast_irq_index)))) {
            __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                = ((0xffefffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                   | (0x100000U & ((IData)(vlTOPp->fast_irq_i) 
                                   << 0x10U)));
        } else {
            if ((1U & (~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                          >> 0x14U)))) {
                __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                    = ((0xffefffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                       | (0x100000U & ((IData)(vlTOPp->fast_irq_i) 
                                       << 0x10U)));
            }
        }
        if (((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__masked_irq 
              >> 0x15U) & (0x15U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__fast_irq_index)))) {
            __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                = ((0xffdfffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                   | (0x200000U & ((IData)(vlTOPp->fast_irq_i) 
                                   << 0x10U)));
        } else {
            if ((1U & (~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                          >> 0x15U)))) {
                __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                    = ((0xffdfffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                       | (0x200000U & ((IData)(vlTOPp->fast_irq_i) 
                                       << 0x10U)));
            }
        }
        if (((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__masked_irq 
              >> 0x16U) & (0x16U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__fast_irq_index)))) {
            __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                = ((0xffbfffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                   | (0x400000U & ((IData)(vlTOPp->fast_irq_i) 
                                   << 0x10U)));
        } else {
            if ((1U & (~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                          >> 0x16U)))) {
                __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                    = ((0xffbfffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                       | (0x400000U & ((IData)(vlTOPp->fast_irq_i) 
                                       << 0x10U)));
            }
        }
        if (((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__masked_irq 
              >> 0x17U) & (0x17U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__fast_irq_index)))) {
            __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                = ((0xff7fffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                   | (0x800000U & ((IData)(vlTOPp->fast_irq_i) 
                                   << 0x10U)));
        } else {
            if ((1U & (~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                          >> 0x17U)))) {
                __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                    = ((0xff7fffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                       | (0x800000U & ((IData)(vlTOPp->fast_irq_i) 
                                       << 0x10U)));
            }
        }
        if (((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__masked_irq 
              >> 0x18U) & (0x18U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__fast_irq_index)))) {
            __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                = ((0xfeffffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                   | (0x1000000U & ((IData)(vlTOPp->fast_irq_i) 
                                    << 0x10U)));
        } else {
            if ((1U & (~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                          >> 0x18U)))) {
                __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                    = ((0xfeffffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                       | (0x1000000U & ((IData)(vlTOPp->fast_irq_i) 
                                        << 0x10U)));
            }
        }
        if (((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__masked_irq 
              >> 0x19U) & (0x19U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__fast_irq_index)))) {
            __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                = ((0xfdffffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                   | (0x2000000U & ((IData)(vlTOPp->fast_irq_i) 
                                    << 0x10U)));
        } else {
            if ((1U & (~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                          >> 0x19U)))) {
                __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                    = ((0xfdffffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                       | (0x2000000U & ((IData)(vlTOPp->fast_irq_i) 
                                        << 0x10U)));
            }
        }
        if (((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__masked_irq 
              >> 0x1aU) & (0x1aU == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__fast_irq_index)))) {
            __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                = ((0xfbffffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                   | (0x4000000U & ((IData)(vlTOPp->fast_irq_i) 
                                    << 0x10U)));
        } else {
            if ((1U & (~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                          >> 0x1aU)))) {
                __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                    = ((0xfbffffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                       | (0x4000000U & ((IData)(vlTOPp->fast_irq_i) 
                                        << 0x10U)));
            }
        }
        if (((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__masked_irq 
              >> 0x1bU) & (0x1bU == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__fast_irq_index)))) {
            __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                = ((0xf7ffffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                   | (0x8000000U & ((IData)(vlTOPp->fast_irq_i) 
                                    << 0x10U)));
        } else {
            if ((1U & (~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                          >> 0x1bU)))) {
                __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                    = ((0xf7ffffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                       | (0x8000000U & ((IData)(vlTOPp->fast_irq_i) 
                                        << 0x10U)));
            }
        }
        if (((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__masked_irq 
              >> 0x1cU) & (0x1cU == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__fast_irq_index)))) {
            __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                = ((0xefffffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                   | (0x10000000U & ((IData)(vlTOPp->fast_irq_i) 
                                     << 0x10U)));
        } else {
            if ((1U & (~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                          >> 0x1cU)))) {
                __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                    = ((0xefffffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                       | (0x10000000U & ((IData)(vlTOPp->fast_irq_i) 
                                         << 0x10U)));
            }
        }
        if (((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__masked_irq 
              >> 0x1dU) & (0x1dU == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__fast_irq_index)))) {
            __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                = ((0xdfffffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                   | (0x20000000U & ((IData)(vlTOPp->fast_irq_i) 
                                     << 0x10U)));
        } else {
            if ((1U & (~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                          >> 0x1dU)))) {
                __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                    = ((0xdfffffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                       | (0x20000000U & ((IData)(vlTOPp->fast_irq_i) 
                                         << 0x10U)));
            }
        }
        if (((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__masked_irq 
              >> 0x1eU) & (0x1eU == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__fast_irq_index)))) {
            __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                = ((0xbfffffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                   | (0x40000000U & ((IData)(vlTOPp->fast_irq_i) 
                                     << 0x10U)));
        } else {
            if ((1U & (~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                          >> 0x1eU)))) {
                __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                    = ((0xbfffffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                       | (0x40000000U & ((IData)(vlTOPp->fast_irq_i) 
                                         << 0x10U)));
            }
        }
        if (((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__masked_irq 
              >> 0x1fU) & (0x1fU == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__fast_irq_index)))) {
            __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                = ((0x7fffffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                   | (0x80000000U & ((IData)(vlTOPp->fast_irq_i) 
                                     << 0x10U)));
        } else {
            if ((1U & (~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                          >> 0x1fU)))) {
                __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                    = ((0x7fffffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                       | (0x80000000U & ((IData)(vlTOPp->fast_irq_i) 
                                         << 0x10U)));
            }
        }
    } else {
        __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip = 0U;
    }
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_data2 
        = ((IData)(vlTOPp->reset_i) ? (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_EX) 
                                        | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_ex_flush))
                                        ? 0U : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX)
            : 0U);
    if (vlTOPp->reset_i) {
        if (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en) {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB 
                = ((VL_ULL(0xffffffff00000000) & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB) 
                   | (IData)((IData)(((0x10000U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                       ? ((0x80000U 
                                           & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                           ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX
                                           : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_in__DOT__B_s)
                                       : ((0x40000U 
                                           & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                           ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX
                                           : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_in__DOT__B_s)))));
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB 
                = ((VL_ULL(0xffffffff) & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB) 
                   | ((QData)((IData)(((0x10000U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                        ? ((0x80000U 
                                            & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                            ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX
                                            : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_in__DOT__A_s)
                                        : ((0x40000U 
                                            & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                            ? ((0x20000U 
                                                & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX
                                                : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_in__DOT__A_s)
                                            : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_in__DOT__A_s)))) 
                      << 0x20U));
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB = VL_ULL(0);
    }
    if (vlTOPp->reset_i) {
        if (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch) 
             | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_id_flush))) {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_data2 = 0U;
        } else {
            if (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_EX) 
                 | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__misaligned_access))) {
                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_data2 
                    = ((0U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs2))
                        ? 0U : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank
                       [vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs2]);
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_ID)))) {
                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_data2 
                        = ((0U == (0x1fU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                            >> 0x14U)))
                            ? 0U : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank
                           [(0x1fU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                      >> 0x14U))]);
                }
            }
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_data2 = 0U;
    }
    if (vlTOPp->reset_i) {
        if (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch) 
             | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_id_flush))) {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_data1 = 0U;
        } else {
            if (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_EX) 
                 | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__misaligned_access))) {
                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_data1 
                    = ((0U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs1))
                        ? 0U : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank
                       [vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs1]);
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_ID)))) {
                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_data1 
                        = ((0U == (0x1fU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                            >> 0xfU)))
                            ? 0U : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank
                           [(0x1fU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                      >> 0xfU))]);
                }
            }
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_data1 = 0U;
    }
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_memout 
        = ((IData)(vlTOPp->reset_i) ? ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_mem_flush)
                                        ? 0U : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__memout)
            : 0U);
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_aluout 
        = ((IData)(vlTOPp->reset_i) ? ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_mem_flush)
                                        ? 0U : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_aluout)
            : 0U);
    if (vlTOPp->reset_i) {
        if ((4U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_wb))) {
            if (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__STATE) {
                __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus 
                    = ((0xffffff7fU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus) 
                       | (0x80U & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus 
                                   << 4U)));
                __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus 
                    = (0xfffffff7U & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus);
            }
        } else {
            if (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_mret) {
                __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus 
                    = ((0xfffffff7U & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus) 
                       | (8U & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus 
                                >> 4U)));
                __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus 
                    = (0x80U | __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus);
            } else {
                if ((0x300U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_csr_addr))) {
                    __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus 
                        = ((0xfffffff7U & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus) 
                           | (8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_imm));
                    __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus 
                        = ((0xffffff7fU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus) 
                           | (0x80U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_imm));
                }
            }
        }
    } else {
        __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus 
            = (0x1fffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus);
        __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus 
            = (0xfffff800U & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus);
        __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus 
            = (0x1800U | __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus);
    }
    __Vdly__core0__DOT__core0__DOT__csr_reg_out = ((IData)(vlTOPp->reset_i)
                                                    ? 
                                                   ((0x300U 
                                                     == 
                                                     (0xfffU 
                                                      & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                         >> 0x14U)))
                                                     ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus
                                                     : 
                                                    ((0x304U 
                                                      == 
                                                      (0xfffU 
                                                       & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                          >> 0x14U)))
                                                      ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mie
                                                      : 
                                                     ((0x305U 
                                                       == 
                                                       (0xfffU 
                                                        & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                           >> 0x14U)))
                                                       ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mtvec
                                                       : 
                                                      ((0x340U 
                                                        == 
                                                        (0xfffU 
                                                         & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                            >> 0x14U)))
                                                        ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mscratch
                                                        : 
                                                       ((0x341U 
                                                         == 
                                                         (0xfffU 
                                                          & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                             >> 0x14U)))
                                                         ? 
                                                        (0xfffffffcU 
                                                         & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mepc)
                                                         : 
                                                        ((0x342U 
                                                          == 
                                                          (0xfffU 
                                                           & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                              >> 0x14U)))
                                                          ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause
                                                          : 
                                                         ((0x344U 
                                                           == 
                                                           (0xfffU 
                                                            & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                               >> 0x14U)))
                                                           ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip
                                                           : 0U)))))))
                                                    : 0U);
    if (__Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg__v0) {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg[0U] 
            = __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg__v0;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg[1U] 
            = __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg__v1;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg[2U] 
            = __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg__v2;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg[3U] 
            = __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg__v3;
    }
    if (__Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg__v4) {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg[0U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg[1U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg[2U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg[3U] = 0U;
    }
    if (__Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg__v0) {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg[0U] 
            = __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg__v0;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg[1U] 
            = __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg__v1;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg[2U] 
            = __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg__v2;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg[3U] 
            = __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg__v3;
    }
    if (__Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg__v4) {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg[0U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg[1U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg[2U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg[3U] = 0U;
    }
    if (__Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg__v0) {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg[0U] 
            = __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg__v0;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg[1U] 
            = __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg__v1;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg[2U] 
            = __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg__v2;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg[3U] 
            = __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg__v3;
    }
    if (__Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg__v4) {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg[0U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg[1U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg[2U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg[3U] = 0U;
    }
    if (__Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg__v0) {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg[0U] 
            = __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg__v0;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg[1U] 
            = __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg__v1;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg[2U] 
            = __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg__v2;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg[3U] 
            = __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg__v3;
    }
    if (__Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg__v4) {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg[0U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg[1U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg[2U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg[3U] = 0U;
    }
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__rdy_b4_delay 
        = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__current_state) 
           & (0x1fU == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__round_count)));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__mux_Rin_sel 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__current_state;
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__mux_A_sel 
        = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__current_state)
            ? ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__current_state)
                ? (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__round_count)
                : 0U) : 0U);
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_misaligned 
        = ((IData)(vlTOPp->reset_i) & ((~ ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_EX) 
                                           | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_ex_flush))) 
                                       & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_misaligned)));
    if (vlTOPp->reset_i) {
        if (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch) 
             | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_id_flush))) {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_dummy = 1U;
        } else {
            if ((1U & (~ ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_EX) 
                          | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__misaligned_access))))) {
                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_dummy 
                    = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_ID) 
                       | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_dummy));
            }
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_dummy = 0U;
    }
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A[3U] 
        = (0xffU & (IData)((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB 
                            >> 0x38U)));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A[2U] 
        = (0xffU & (IData)((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB 
                            >> 0x30U)));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A[1U] 
        = (0xffU & (IData)((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB 
                            >> 0x28U)));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A[0U] 
        = (0xffU & (IData)((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB 
                            >> 0x20U)));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B[3U] 
        = (0xffU & (IData)((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB 
                            >> 0x18U)));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B[2U] 
        = (0xffU & (IData)((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB 
                            >> 0x10U)));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B[1U] 
        = (0xffU & (IData)((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB 
                            >> 8U)));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B[0U] 
        = (0xffU & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB));
    if (vlTOPp->reset_i) {
        if (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch) 
             | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_id_flush))) {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs2 = 0U;
        } else {
            if ((1U & (~ ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_EX) 
                          | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__misaligned_access))))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_ID)))) {
                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs2 
                        = (0x1fU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                    >> 0x14U));
                }
            }
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs2 = 0U;
    }
    if (vlTOPp->reset_i) {
        if (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch) 
             | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_id_flush))) {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs1 = 0U;
        } else {
            if ((1U & (~ ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_EX) 
                          | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__misaligned_access))))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_ID)))) {
                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs1 
                        = (0x1fU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                    >> 0xfU));
                }
            }
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs1 = 0U;
    }
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_aluout 
        = ((IData)(vlTOPp->reset_i) ? (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_EX) 
                                        | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_ex_flush))
                                        ? 0U : ((0x400U 
                                                 & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                 ? 
                                                ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__mux_fastres_sel_temp)
                                                  ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__fastres
                                                  : 
                                                 ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel)
                                                   ? 
                                                  ((0x100000U 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                    ? 
                                                   ((0x80000U 
                                                     & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                     ? (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIVout__DOT__signs))
                                                      ? 
                                                     ((IData)(1U) 
                                                      + 
                                                      (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv)))
                                                      : (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv)))
                                                    : 
                                                   ((0x80000U 
                                                     & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                     ? (IData)(
                                                               (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv 
                                                                >> 0x20U))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIVout__DOT__signs))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIVout__DOT__signs))
                                                       ? (IData)(
                                                                 (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv 
                                                                  >> 0x20U))
                                                       : 
                                                      ((IData)(1U) 
                                                       + 
                                                       (~ (IData)(
                                                                  (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv 
                                                                   >> 0x20U)))))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIVout__DOT__signs))
                                                       ? 
                                                      ((IData)(1U) 
                                                       + 
                                                       (~ (IData)(
                                                                  (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv 
                                                                   >> 0x20U))))
                                                       : (IData)(
                                                                 (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv 
                                                                  >> 0x20U))))))
                                                   : 
                                                  ((0x40000U 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                    ? 
                                                   ((0x20000U 
                                                     & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                     ? (IData)(
                                                               (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv 
                                                                >> 0x20U))
                                                     : (IData)(
                                                               (((2U 
                                                                  & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULout__DOT__signs))
                                                                  ? 
                                                                 (VL_ULL(1) 
                                                                  + 
                                                                  (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv))
                                                                  : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv) 
                                                                >> 0x20U)))
                                                    : 
                                                   ((0x20000U 
                                                     & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                     ? (IData)(
                                                               (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULout__DOT__P_s 
                                                                >> 0x20U))
                                                     : (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULout__DOT__P_s)))))
                                                 : 
                                                ((0x200U 
                                                  & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                  ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__csr_reg_out
                                                  : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__aluout_EX)))
            : 0U);
    if (vlTOPp->reset_i) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_wb) 
                      >> 2U)))) {
            if ((1U & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_mret)))) {
                if ((0x300U != (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_csr_addr))) {
                    if ((0x304U != (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_csr_addr))) {
                        if ((0x305U != (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_csr_addr))) {
                            if ((0x340U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_csr_addr))) {
                                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mscratch 
                                    = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_imm;
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mscratch = 0U;
    }
    if (vlTOPp->reset_i) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_wb) 
                      >> 2U)))) {
            if ((1U & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_mret)))) {
                if ((0x300U != (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_csr_addr))) {
                    if ((0x304U != (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_csr_addr))) {
                        if ((0x305U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_csr_addr))) {
                            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mtvec 
                                = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_imm;
                        }
                    }
                }
            }
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mtvec = 0U;
    }
    if (vlTOPp->reset_i) {
        if ((4U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_wb))) {
            if (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__STATE) {
                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mepc 
                    = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__csr_pc_input;
            }
        } else {
            if ((1U & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_mret)))) {
                if ((0x300U != (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_csr_addr))) {
                    if ((0x304U != (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_csr_addr))) {
                        if ((0x305U != (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_csr_addr))) {
                            if ((0x340U != (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_csr_addr))) {
                                if ((0x341U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_csr_addr))) {
                                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mepc 
                                        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_imm;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mepc = 0U;
    }
    if (vlTOPp->reset_i) {
        if (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__STATE) {
            if (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__STATE) {
                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__STATE = 0U;
                vlSymsp->TOP__barebones_wb_top.irq_ack_o = 0U;
            }
        } else {
            if ((1U & (~ ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_wb) 
                          >> 2U)))) {
                if ((0x342U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_csr_addr))) {
                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause 
                        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_imm;
                }
            }
            if ((0U != (0xffffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__masked_irq 
                                   >> 0x10U)))) {
                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__STATE = 1U;
                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause 
                    = (0x80000000U | vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause);
                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause 
                    = ((0x80000000U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause) 
                       | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__fast_irq_index));
            } else {
                if ((1U & (((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus 
                             >> 3U) & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mie 
                                       >> 0xbU)) & 
                           (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                            >> 0xbU)))) {
                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__STATE = 1U;
                    vlSymsp->TOP__barebones_wb_top.irq_ack_o = 1U;
                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause 
                        = (0x80000000U | vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause);
                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause 
                        = (0xbU | (0x80000000U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause));
                } else {
                    if ((8U & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus 
                                & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mie) 
                               & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip))) {
                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__STATE = 1U;
                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause 
                            = (0x80000000U | vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause);
                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause 
                            = (3U | (0x80000000U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause));
                    } else {
                        if ((1U & (((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus 
                                     >> 3U) & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mie 
                                               >> 7U)) 
                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                                      >> 7U)))) {
                            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__STATE = 1U;
                            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause 
                                = (0x80000000U | vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause);
                            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause 
                                = (7U | (0x80000000U 
                                         & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause));
                        } else {
                            if ((1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_err_o))) {
                                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__STATE = 1U;
                                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause 
                                    = (0x7fffffffU 
                                       & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause);
                                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause 
                                    = (1U | (0x80000000U 
                                             & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause));
                            } else {
                                if (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__instr_addr_misaligned) 
                                     & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch)))) {
                                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__STATE = 1U;
                                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause 
                                        = (0x7fffffffU 
                                           & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause);
                                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause 
                                        = (0x80000000U 
                                           & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause);
                                } else {
                                    if (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr) 
                                         & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch)))) {
                                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__STATE = 1U;
                                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause 
                                            = (0x7fffffffU 
                                               & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause);
                                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause 
                                            = (2U | 
                                               (0x80000000U 
                                                & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause));
                                    } else {
                                        if (((0x73U 
                                              == vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr) 
                                             & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch)))) {
                                            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__STATE = 1U;
                                            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause 
                                                = (0x7fffffffU 
                                                   & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause);
                                            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause 
                                                = (0xbU 
                                                   | (0x80000000U 
                                                      & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause));
                                        } else {
                                            if (((0x100073U 
                                                  == vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr) 
                                                 & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch)))) {
                                                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__STATE = 1U;
                                                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause 
                                                    = 
                                                    (0x7fffffffU 
                                                     & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause);
                                                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause 
                                                    = 
                                                    (3U 
                                                     | (0x80000000U 
                                                        & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause));
                                            } else {
                                                if (
                                                    ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_err_i) 
                                                     & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_mem)))) {
                                                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__STATE = 1U;
                                                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause 
                                                        = 
                                                        (0x7fffffffU 
                                                         & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause);
                                                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause 
                                                        = 
                                                        (7U 
                                                         | (0x80000000U 
                                                            & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause));
                                                } else {
                                                    if (
                                                        ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_err_i) 
                                                         & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_mem))) {
                                                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__STATE = 1U;
                                                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause 
                                                            = 
                                                            (0x7fffffffU 
                                                             & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause);
                                                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause 
                                                            = 
                                                            (5U 
                                                             | (0x80000000U 
                                                                & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__STATE = 0U;
        vlSymsp->TOP__barebones_wb_top.irq_ack_o = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause = 0U;
    }
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH[3U] 
        = (0xffffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A
                      [3U] * vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B
                      [3U]));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH[2U] 
        = (0xffffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A
                      [3U] * vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B
                      [2U]));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH[1U] 
        = (0xffffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A
                      [2U] * vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B
                      [3U]));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH[0U] 
        = (0xffffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A
                      [2U] * vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B
                      [2U]));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL[3U] 
        = (0xffffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A
                      [3U] * vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B
                      [1U]));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL[2U] 
        = (0xffffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A
                      [3U] * vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B
                      [0U]));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL[1U] 
        = (0xffffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A
                      [2U] * vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B
                      [1U]));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL[0U] 
        = (0xffffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A
                      [2U] * vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B
                      [0U]));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH[3U] 
        = (0xffffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A
                      [1U] * vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B
                      [3U]));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH[2U] 
        = (0xffffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A
                      [1U] * vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B
                      [2U]));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH[1U] 
        = (0xffffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A
                      [0U] * vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B
                      [3U]));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH[0U] 
        = (0xffffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A
                      [0U] * vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B
                      [2U]));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL[3U] 
        = (0xffffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A
                      [1U] * vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B
                      [1U]));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL[2U] 
        = (0xffffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A
                      [1U] * vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B
                      [0U]));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL[1U] 
        = (0xffffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A
                      [0U] * vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B
                      [1U]));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL[0U] 
        = (0xffffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A
                      [0U] * vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B
                      [0U]));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
        = __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip;
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus 
        = __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus;
    if (vlTOPp->reset_i) {
        if (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch) 
             | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_id_flush))) {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_misaligned = 0U;
        } else {
            if (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_EX) 
                 | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__misaligned_access))) {
                if (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__misaligned_access) {
                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_misaligned = 1U;
                }
            } else {
                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_misaligned = 0U;
            }
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_misaligned = 0U;
    }
    if (vlTOPp->reset_i) {
        if (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch) 
             | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_if_flush))) {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_dummy = 1U;
        } else {
            if ((1U & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_ID)))) {
                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_dummy 
                    = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_ID;
            }
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_dummy = 0U;
    }
    if (vlTOPp->reset_i) {
        if (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en) {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv 
                = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel)
                    ? (((QData)((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_Q)) 
                        << 0x20U) | (QData)((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_R)))
                    : ((((QData)((IData)((((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHHs2
                                            [3U] << 0x10U) 
                                           + ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHHs2
                                               [2U] 
                                               + vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHHs2
                                               [1U]) 
                                              << 8U)) 
                                          + vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHHs2
                                          [0U]))) << 0x20U) 
                        + (((QData)((IData)((((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHLs2
                                               [3U] 
                                               << 0x10U) 
                                              + ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHLs2
                                                  [2U] 
                                                  + 
                                                  vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHLs2
                                                  [1U]) 
                                                 << 8U)) 
                                             + vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHLs2
                                             [0U]))) 
                            + (QData)((IData)((((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLHs2
                                                 [3U] 
                                                 << 0x10U) 
                                                + (
                                                   (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLHs2
                                                    [2U] 
                                                    + 
                                                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLHs2
                                                    [1U]) 
                                                   << 8U)) 
                                               + vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLHs2
                                               [0U])))) 
                           << 0x10U)) + (QData)((IData)(
                                                        (((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLLs2
                                                           [3U] 
                                                           << 0x10U) 
                                                          + 
                                                          ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLLs2
                                                            [2U] 
                                                            + 
                                                            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLLs2
                                                            [1U]) 
                                                           << 8U)) 
                                                         + 
                                                         vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLLs2
                                                         [0U])))));
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv = VL_ULL(0);
    }
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__csr_pc_input 
        = ((IData)(vlTOPp->reset_i) ? ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_mem_flush)
                                        ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_pc
                                        : ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_ex_flush)
                                            ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_pc
                                            : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_pc))
            : 0U);
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_mem 
        = ((IData)(vlTOPp->reset_i) ? (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_EX) 
                                        | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_ex_flush))
                                        ? 1U : ((6U 
                                                 & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_mem)) 
                                                | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mem_wen_EX)))
            : 1U);
    if (vlTOPp->reset_i) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_wb) 
                      >> 2U)))) {
            if ((1U & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_mret)))) {
                if ((0x300U != (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_csr_addr))) {
                    if ((0x304U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_csr_addr))) {
                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mie 
                            = ((0xfffff7ffU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mie) 
                               | (0x800U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_imm));
                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mie 
                            = ((0xffffff7fU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mie) 
                               | (0x80U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_imm));
                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mie 
                            = ((0xfffffff7U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mie) 
                               | (8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_imm));
                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mie 
                            = ((0xffffU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mie) 
                               | (0xffff0000U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_imm));
                    }
                }
            }
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mie = 0U;
    }
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_Q 
        = __Vdly__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_Q;
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_R 
        = __Vdly__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_R;
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHHs2[0U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg
        [0U];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHHs2[1U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg
        [1U];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHHs2[2U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg
        [2U];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHHs2[3U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg
        [3U];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHLs2[0U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg
        [0U];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHLs2[1U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg
        [1U];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHLs2[2U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg
        [2U];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHLs2[3U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg
        [3U];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLHs2[0U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg
        [0U];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLHs2[1U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg
        [1U];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLHs2[2U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg
        [2U];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLHs2[3U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg
        [3U];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLLs2[0U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg
        [0U];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLLs2[1U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg
        [1U];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLLs2[2U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg
        [2U];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLLs2[3U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg
        [3U];
    vlSymsp->TOP__barebones_wb_top.core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_block__DOT____Vcellinp__row_0____pinNumber1 
        = ((((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__mux_Rin_sel)
              ? (0x7fffffffU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_R)
              : 0U) << 1U) | (1U & (IData)((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB 
                                            >> (0x3fU 
                                                & ((IData)(0x20U) 
                                                   + 
                                                   (0x1fU 
                                                    & ((IData)(0x1fU) 
                                                       - (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__mux_A_sel)))))))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_pc 
        = ((IData)(vlTOPp->reset_i) ? (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_EX) 
                                        | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_ex_flush))
                                        ? 0U : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_pc)
            : 0U);
    if (vlTOPp->reset_i) {
        if (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch) 
             | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_id_flush))) {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_mem = 1U;
        } else {
            if ((1U & (~ ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_EX) 
                          | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__misaligned_access))))) {
                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_mem 
                    = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_ID)
                        ? 1U : ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__hazard_stall)
                                 ? 1U : (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_mem_len) 
                                          << 1U) | 
                                         (1U & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                 >> 6U) 
                                                | ((~ 
                                                    (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                     >> 5U)) 
                                                   | ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                       >> 4U) 
                                                      | ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                          >> 3U) 
                                                         | ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                             >> 2U) 
                                                            | ((~ 
                                                                (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                 >> 1U)) 
                                                               | (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)))))))))));
            }
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_mem = 1U;
    }
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__masked_irq 
        = ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mie 
            & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
           & VL_NEGATE_I((IData)((1U & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus 
                                        >> 3U)))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_mret 
        = ((IData)(vlTOPp->reset_i) & ((~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_mem_flush)) 
                                       & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_mret)));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_csr_addr 
        = ((IData)(vlTOPp->reset_i) ? ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_mem_flush)
                                        ? 0U : (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_csr_addr))
            : 0U);
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_imm 
        = ((IData)(vlTOPp->reset_i) ? ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_mem_flush)
                                        ? 0U : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_imm)
            : 0U);
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_block__DOT__row_0__DOT__r_temp 
        = (VL_ULL(0x1ffffffff) & ((QData)((IData)(vlSymsp->TOP__barebones_wb_top.core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_block__DOT____Vcellinp__row_0____pinNumber1)) 
                                  - (QData)((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__fast_irq_index = 0xfU;
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__PE_valid = 0U;
    while (((0x1fU != (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__fast_irq_index)) 
            & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__PE_valid)))) {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__fast_irq_index 
            = (0x1fU & ((IData)(1U) + (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__fast_irq_index)));
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__PE_valid 
            = (1U & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__masked_irq 
                     >> (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__fast_irq_index)));
    }
    if (vlTOPp->reset_i) {
        if (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch) 
             | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_id_flush))) {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_pc = 0U;
        } else {
            if ((1U & (~ ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_EX) 
                          | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__misaligned_access))))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_ID)))) {
                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_pc 
                        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_pc;
                }
            }
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_pc = 0U;
    }
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_mret 
        = ((IData)(vlTOPp->reset_i) & ((~ ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_EX) 
                                           | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_ex_flush))) 
                                       & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_mret)));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_csr_addr 
        = ((IData)(vlTOPp->reset_i) ? (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_EX) 
                                        | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_ex_flush))
                                        ? 0U : (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_csr_addr))
            : 0U);
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_imm 
        = ((IData)(vlTOPp->reset_i) ? (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_EX) 
                                        | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_ex_flush))
                                        ? 0U : ((0x800U 
                                                 & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                 ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_imm
                                                 : 
                                                ((0U 
                                                  == 
                                                  (3U 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                                                      >> 4U)))
                                                  ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux8_o_EX
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                                                       >> 4U)))
                                                   ? 
                                                  (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__csr_reg_out 
                                                   | vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux8_o_EX)
                                                   : 
                                                  (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__csr_reg_out 
                                                   & (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux8_o_EX))))))
            : 0U);
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__csr_reg_out 
        = __Vdly__core0__DOT__core0__DOT__csr_reg_out;
    if (vlTOPp->reset_i) {
        if (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch) 
             | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_if_flush))) {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_pc = 0U;
        } else {
            if ((1U & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_ID)))) {
                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_pc 
                    = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_ID)
                        ? 0U : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__pc_o);
            }
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_pc = 0U;
    }
    if (vlTOPp->reset_i) {
        if (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch) 
             | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_id_flush))) {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_mret = 0U;
        } else {
            if ((1U & (~ ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_EX) 
                          | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__misaligned_access))))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_ID)))) {
                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_mret 
                        = (0x30200073U == vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr);
                }
            }
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_mret = 0U;
    }
    if (vlTOPp->reset_i) {
        if (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch) 
             | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_id_flush))) {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_csr_addr = 0U;
        } else {
            if ((1U & (~ ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_EX) 
                          | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__misaligned_access))))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_ID)))) {
                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_csr_addr 
                        = (0xfffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                     >> 0x14U));
                }
            }
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_csr_addr = 0U;
    }
    if (vlTOPp->reset_i) {
        if (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch) 
             | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_id_flush))) {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_imm = 0U;
        } else {
            if ((1U & (~ ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_EX) 
                          | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__misaligned_access))))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_ID)))) {
                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_imm 
                        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__imm_dec_o;
                }
            }
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_imm = 0U;
    }
    if (vlTOPp->reset_i) {
        if (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch) 
             | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_id_flush))) {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex = 0U;
        } else {
            if ((1U & (~ ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_EX) 
                          | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__misaligned_access))))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_ID)))) {
                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux3_o_ID;
                }
            }
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex = 0U;
    }
    if (vlTOPp->reset_i) {
        if (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch) 
             | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_if_flush))) {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__pc_o 
                = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__pc_i;
        } else {
            if ((1U & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_ID)))) {
                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__pc_o 
                    = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__pc_i;
            }
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__pc_o = 0U;
    }
}

VL_INLINE_OPT void Vbarebones_wb_top_barebones_wb_top::_combo__TOP__barebones_wb_top__3(Vbarebones_wb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vbarebones_wb_top_barebones_wb_top::_combo__TOP__barebones_wb_top__3\n"); );
    Vbarebones_wb_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_clk_i 
        = ((0xeU & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_clk_i)) 
           | (IData)(vlTOPp->clk_i));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_clk_i 
        = ((0xdU & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_clk_i)) 
           | ((IData)(vlTOPp->clk_i) << 1U));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_clk_i 
        = ((0xbU & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_clk_i)) 
           | ((IData)(vlTOPp->clk_i) << 2U));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_clk_i 
        = ((7U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_clk_i)) 
           | ((IData)(vlTOPp->clk_i) << 3U));
    vlSymsp->TOP__barebones_wb_top.__Vcellinp__debug_if__wb_clk_i 
        = (1U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_clk_i) 
                 >> 3U));
    vlSymsp->TOP__barebones_wb_top.__Vcellinp__memory__port1_wb_clk_i 
        = (1U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_clk_i) 
                 >> 1U));
    vlSymsp->TOP__barebones_wb_top.__Vcellinp__memory__port0_wb_clk_i 
        = (1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_clk_i));
    vlSymsp->TOP__barebones_wb_top.__Vcellinp__mtime_regs__wb_clk_i 
        = (1U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_clk_i) 
                 >> 2U));
}

VL_INLINE_OPT void Vbarebones_wb_top_barebones_wb_top::_sequent__TOP__barebones_wb_top__4(Vbarebones_wb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vbarebones_wb_top_barebones_wb_top::_sequent__TOP__barebones_wb_top__4\n"); );
    Vbarebones_wb_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vdlyvdim0__core0__DOT__core0__DOT__register_bank__v0;
    CData/*0:0*/ __Vdlyvset__core0__DOT__core0__DOT__register_bank__v0;
    CData/*0:0*/ __Vdlyvset__core0__DOT__core0__DOT__register_bank__v1;
    IData/*31:0*/ __Vdlyvval__core0__DOT__core0__DOT__register_bank__v0;
    // Body
    if ((1U & (~ (IData)(vlTOPp->reset_i)))) {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__i = 0x20U;
    }
    __Vdlyvset__core0__DOT__core0__DOT__register_bank__v0 = 0U;
    __Vdlyvset__core0__DOT__core0__DOT__register_bank__v1 = 0U;
    if (vlTOPp->reset_i) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_wb) 
                      >> 3U)))) {
            __Vdlyvval__core0__DOT__core0__DOT__register_bank__v0 
                = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux_o_WB;
            __Vdlyvset__core0__DOT__core0__DOT__register_bank__v0 = 1U;
            __Vdlyvdim0__core0__DOT__core0__DOT__register_bank__v0 
                = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_rd;
        }
    } else {
        __Vdlyvset__core0__DOT__core0__DOT__register_bank__v1 = 1U;
    }
    if (__Vdlyvset__core0__DOT__core0__DOT__register_bank__v0) {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[__Vdlyvdim0__core0__DOT__core0__DOT__register_bank__v0] 
            = __Vdlyvval__core0__DOT__core0__DOT__register_bank__v0;
    }
    if (__Vdlyvset__core0__DOT__core0__DOT__register_bank__v1) {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[0U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[1U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[2U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[3U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[4U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[5U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[6U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[7U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[8U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[9U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[0xaU] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[0xbU] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[0xcU] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[0xdU] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[0xeU] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[0xfU] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[0x10U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[0x11U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[0x12U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[0x13U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[0x14U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[0x15U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[0x16U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[0x17U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[0x18U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[0x19U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[0x1aU] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[0x1bU] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[0x1cU] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[0x1dU] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[0x1eU] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[0x1fU] = 0U;
    }
}

VL_INLINE_OPT void Vbarebones_wb_top_barebones_wb_top::_sequent__TOP__barebones_wb_top__5(Vbarebones_wb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vbarebones_wb_top_barebones_wb_top::_sequent__TOP__barebones_wb_top__5\n"); );
    Vbarebones_wb_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__Vcellinp__debug_if__wb_rst_i)))) {
        if ((8U & (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_cyc_i) 
                    & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_stb_i)) 
                   & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_we_i)))) {
            if ((1U == vlSymsp->TOP__barebones_wb_top.__PVT__wb_dat_i
                 [3U])) {
                VL_WRITEF("Success!\n");
                VL_FINISH_MT("../../peripherals//debug_interface_wb.v", 38, "");
            } else {
                VL_WRITEF("Failure!\n");
                VL_FINISH_MT("../../peripherals//debug_interface_wb.v", 44, "");
            }
        }
    }
    vlSymsp->TOP__barebones_wb_top.__PVT__debug_if__DOT__ack 
        = (1U & ((~ (IData)(vlSymsp->TOP__barebones_wb_top.__Vcellinp__debug_if__wb_rst_i)) 
                 & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_stb_i) 
                    >> 3U)));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_ack_o 
        = ((7U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_ack_o)) 
           | ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__debug_if__DOT__ack) 
              << 3U));
}

VL_INLINE_OPT void Vbarebones_wb_top_barebones_wb_top::_sequent__TOP__barebones_wb_top__6(Vbarebones_wb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vbarebones_wb_top_barebones_wb_top::_sequent__TOP__barebones_wb_top__6\n"); );
    Vbarebones_wb_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__barebones_wb_top.__PVT__r_stb = (
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_rst_i))
                                                    ? 0U
                                                    : (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_stb_i));
}

VL_INLINE_OPT void Vbarebones_wb_top_barebones_wb_top::_sequent__TOP__barebones_wb_top__7(Vbarebones_wb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vbarebones_wb_top_barebones_wb_top::_sequent__TOP__barebones_wb_top__7\n"); );
    Vbarebones_wb_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    QData/*63:0*/ __Vdly__mtime_regs__DOT__mtime;
    // Body
    __Vdly__mtime_regs__DOT__mtime = vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtime;
    if (vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__rst) {
        if (((((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_cyc_i) 
               >> 2U) & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__stb)) 
             & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__we))) {
            if ((0x2008U == vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__adr)) {
                if ((8U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__sel))) {
                    vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtimecmp 
                        = ((VL_ULL(0xffffffff00ffffff) 
                            & vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtimecmp) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__dat 
                                                  >> 0x18U)))) 
                              << 0x18U));
                }
                if ((4U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__sel))) {
                    vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtimecmp 
                        = ((VL_ULL(0xffffffffff00ffff) 
                            & vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtimecmp) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__dat 
                                                  >> 0x10U)))) 
                              << 0x10U));
                }
                if ((2U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__sel))) {
                    vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtimecmp 
                        = ((VL_ULL(0xffffffffffff00ff) 
                            & vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtimecmp) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__dat 
                                                  >> 8U)))) 
                              << 8U));
                }
                if ((1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__sel))) {
                    vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtimecmp 
                        = ((VL_ULL(0xffffffffffffff00) 
                            & vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtimecmp) 
                           | (IData)((IData)((0xffU 
                                              & vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__dat))));
                }
            } else {
                if ((0x200cU == vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__adr)) {
                    if ((8U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__sel))) {
                        vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtimecmp 
                            = ((VL_ULL(0xffffffffffffff) 
                                & vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtimecmp) 
                               | ((QData)((IData)((0xffU 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__dat 
                                                      >> 0x18U)))) 
                                  << 0x38U));
                    }
                    if ((4U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__sel))) {
                        vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtimecmp 
                            = ((VL_ULL(0xff00ffffffffffff) 
                                & vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtimecmp) 
                               | ((QData)((IData)((0xffU 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__dat 
                                                      >> 0x10U)))) 
                                  << 0x30U));
                    }
                    if ((2U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__sel))) {
                        vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtimecmp 
                            = ((VL_ULL(0xffff00ffffffffff) 
                                & vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtimecmp) 
                               | ((QData)((IData)((0xffU 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__dat 
                                                      >> 8U)))) 
                                  << 0x28U));
                    }
                    if ((1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__sel))) {
                        vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtimecmp 
                            = ((VL_ULL(0xffffff00ffffffff) 
                                & vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtimecmp) 
                               | ((QData)((IData)((0xffU 
                                                   & vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__dat))) 
                                  << 0x20U));
                    }
                }
            }
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtimecmp = VL_ULL(0);
    }
    if (vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__rst) {
        if (((((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_cyc_i) 
               >> 2U) & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__stb)) 
             & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__we))) {
            if ((0x2000U == vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__adr)) {
                if ((8U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__sel))) {
                    __Vdly__mtime_regs__DOT__mtime 
                        = ((VL_ULL(0xffffffff00ffffff) 
                            & __Vdly__mtime_regs__DOT__mtime) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__dat 
                                                  >> 0x18U)))) 
                              << 0x18U));
                }
                if ((4U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__sel))) {
                    __Vdly__mtime_regs__DOT__mtime 
                        = ((VL_ULL(0xffffffffff00ffff) 
                            & __Vdly__mtime_regs__DOT__mtime) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__dat 
                                                  >> 0x10U)))) 
                              << 0x10U));
                }
                if ((2U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__sel))) {
                    __Vdly__mtime_regs__DOT__mtime 
                        = ((VL_ULL(0xffffffffffff00ff) 
                            & __Vdly__mtime_regs__DOT__mtime) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__dat 
                                                  >> 8U)))) 
                              << 8U));
                }
                if ((1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__sel))) {
                    __Vdly__mtime_regs__DOT__mtime 
                        = ((VL_ULL(0xffffffffffffff00) 
                            & __Vdly__mtime_regs__DOT__mtime) 
                           | (IData)((IData)((0xffU 
                                              & vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__dat))));
                }
            } else {
                if ((0x2004U == vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__adr)) {
                    if ((8U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__sel))) {
                        __Vdly__mtime_regs__DOT__mtime 
                            = ((VL_ULL(0xffffffffffffff) 
                                & __Vdly__mtime_regs__DOT__mtime) 
                               | ((QData)((IData)((0xffU 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__dat 
                                                      >> 0x18U)))) 
                                  << 0x38U));
                    }
                    if ((4U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__sel))) {
                        __Vdly__mtime_regs__DOT__mtime 
                            = ((VL_ULL(0xff00ffffffffffff) 
                                & __Vdly__mtime_regs__DOT__mtime) 
                               | ((QData)((IData)((0xffU 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__dat 
                                                      >> 0x10U)))) 
                                  << 0x30U));
                    }
                    if ((2U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__sel))) {
                        __Vdly__mtime_regs__DOT__mtime 
                            = ((VL_ULL(0xffff00ffffffffff) 
                                & __Vdly__mtime_regs__DOT__mtime) 
                               | ((QData)((IData)((0xffU 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__dat 
                                                      >> 8U)))) 
                                  << 0x28U));
                    }
                    if ((1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__sel))) {
                        __Vdly__mtime_regs__DOT__mtime 
                            = ((VL_ULL(0xffffff00ffffffff) 
                                & __Vdly__mtime_regs__DOT__mtime) 
                               | ((QData)((IData)((0xffU 
                                                   & vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__dat))) 
                                  << 0x20U));
                    }
                }
            }
        } else {
            __Vdly__mtime_regs__DOT__mtime = ((VL_ULL(0xffffffff00000000) 
                                               & __Vdly__mtime_regs__DOT__mtime) 
                                              | (IData)((IData)(
                                                                ((IData)(1U) 
                                                                 + (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtime)))));
            if ((0xffffffffU == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtime))) {
                __Vdly__mtime_regs__DOT__mtime = ((VL_ULL(0xffffffff) 
                                                   & __Vdly__mtime_regs__DOT__mtime) 
                                                  | ((QData)((IData)(
                                                                     ((IData)(1U) 
                                                                      + (IData)(
                                                                                (vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtime 
                                                                                >> 0x20U))))) 
                                                     << 0x20U));
            }
        }
    } else {
        __Vdly__mtime_regs__DOT__mtime = VL_ULL(0);
    }
    vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtime 
        = __Vdly__mtime_regs__DOT__mtime;
    vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__sel 
        = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__rst)
            ? vlSymsp->TOP__barebones_wb_top.__PVT__wb_sel_i
           [2U] : 0U);
    vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__dat 
        = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__rst)
            ? vlSymsp->TOP__barebones_wb_top.__PVT__wb_dat_i
           [2U] : 0U);
    vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__we 
        = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__rst) 
           & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_we_i) 
              >> 2U));
    vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__stb 
        = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__rst) 
           & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_stb_i) 
              >> 2U));
    vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__adr 
        = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__rst)
            ? vlSymsp->TOP__barebones_wb_top.__PVT__wb_adr_i
           [2U] : 0U);
}

VL_INLINE_OPT void Vbarebones_wb_top_barebones_wb_top::_sequent__TOP__barebones_wb_top__8(Vbarebones_wb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vbarebones_wb_top_barebones_wb_top::_sequent__TOP__barebones_wb_top__8\n"); );
    Vbarebones_wb_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_rd 
        = ((IData)(vlTOPp->reset_i) ? ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_mem_flush)
                                        ? 0U : (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_rd))
            : 0U);
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_wb 
        = ((IData)(vlTOPp->reset_i) ? ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_mem_flush)
                                        ? 0xcU : (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_wb))
            : 0xcU);
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_mem_flush 
        = (1U & (((((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus 
                     >> 3U) & (0U != vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__masked_irq)) 
                   & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_mem)) 
                  & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_dummy))) 
                 | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_err_o)));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_rd 
        = ((IData)(vlTOPp->reset_i) ? (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_EX) 
                                        | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_ex_flush))
                                        ? 0U : (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rd))
            : 0U);
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux_o_WB 
        = ((0U == (3U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_wb) 
                         >> 5U))) ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_aluout
            : ((1U == (3U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_wb) 
                             >> 5U))) ? ((0U == (3U 
                                                 & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_wb)))
                                          ? ((0x10U 
                                              & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_wb))
                                              ? ((0xffffff00U 
                                                  & (VL_NEGATE_I((IData)(
                                                                         (1U 
                                                                          & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_memout 
                                                                             >> 7U)))) 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_memout))
                                              : (0xffU 
                                                 & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_memout))
                                          : ((1U == 
                                              (3U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_wb)))
                                              ? ((0x10U 
                                                  & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_wb))
                                                  ? 
                                                 ((0xffff0000U 
                                                   & (VL_NEGATE_I((IData)(
                                                                          (1U 
                                                                           & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_memout 
                                                                              >> 0xfU)))) 
                                                      << 0x10U)) 
                                                  | (0xffffU 
                                                     & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_memout))
                                                  : 
                                                 (0xffffU 
                                                  & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_memout))
                                              : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_memout))
                : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_imm));
    if (vlTOPp->reset_i) {
        if (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_EX) 
             | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_ex_flush))) {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_wb = 0xcU;
        } else {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_wb 
                = ((0xfU & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_wb)) 
                   | (0x70U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_wb)));
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_wb 
                = ((0x77U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_wb)) 
                   | (8U & (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__misaligned_access) 
                             << 3U) | (0xfffffff8U 
                                       & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_wb)))));
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_wb 
                = ((0x78U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_wb)) 
                   | (7U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_wb)));
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_wb = 0xcU;
    }
    if (vlTOPp->reset_i) {
        if (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch) 
             | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_id_flush))) {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rd = 0U;
        } else {
            if ((1U & (~ ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_EX) 
                          | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__misaligned_access))))) {
                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rd 
                    = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_ID)
                        ? 0U : (0x1fU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                         >> 7U)));
            }
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rd = 0U;
    }
    if (vlTOPp->reset_i) {
        if (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch) 
             | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_id_flush))) {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_wb = 0xcU;
        } else {
            if ((1U & (~ ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_EX) 
                          | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__misaligned_access))))) {
                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_wb 
                    = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_ID)
                        ? 0xcU : (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux1_o_ID));
            }
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_wb = 0xcU;
    }
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_ctrl_EX 
        = ((8U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_wb))
            ? ((8U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_wb))
                ? 2U : ((((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs2) 
                          == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_rd)) 
                         & (0U != (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs2)))
                         ? 1U : 2U)) : ((((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs2) 
                                          == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_rd)) 
                                         & (0U != (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs2)))
                                         ? 0U : ((8U 
                                                  & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_wb))
                                                  ? 2U
                                                  : 
                                                 ((((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs2) 
                                                    == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_rd)) 
                                                   & (0U 
                                                      != (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs2)))
                                                   ? 1U
                                                   : 2U))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_ctrl_EX 
        = ((8U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_wb))
            ? ((8U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_wb))
                ? 0U : ((((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs1) 
                          == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_rd)) 
                         & (0U != (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs1)))
                         ? 1U : 0U)) : ((((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs1) 
                                          == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_rd)) 
                                         & (0U != (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs1)))
                                         ? 2U : ((8U 
                                                  & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_wb))
                                                  ? 0U
                                                  : 
                                                 ((((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs1) 
                                                    == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_rd)) 
                                                   & (0U 
                                                      != (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs1)))
                                                   ? 1U
                                                   : 0U))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX 
        = ((2U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_ctrl_EX))
            ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_data2
            : ((1U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_ctrl_EX))
                ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux_o_WB
                : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_aluout));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX 
        = ((2U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_ctrl_EX))
            ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_aluout
            : ((1U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_ctrl_EX))
                ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux_o_WB
                : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_data1));
    if (vlTOPp->reset_i) {
        if (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch) 
             | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_if_flush))) {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr = 0x13U;
        } else {
            if ((1U & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_ID)))) {
                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                    = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_ID)
                        ? 0x13U : vlSymsp->TOP__barebones_wb_top.__PVT__wb_dat_o
                       [0U]);
            }
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr = 0x13U;
    }
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__L 
        = ((~ ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_wb) 
               >> 3U)) & (1U == (3U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_wb) 
                                       >> 5U))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_in__DOT__B_s 
        = ((0x80000000U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX)
            ? ((IData)(1U) + (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX))
            : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX);
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux3_o_EX 
        = ((0x80U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
            ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_imm
            : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX);
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_in__DOT__B1 
        = ((0U != vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX) 
           & (1U == vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_in__DOT__B0 
        = (0U == vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX);
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_in__DOT__A_s 
        = ((0x80000000U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX)
            ? ((IData)(1U) + (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX))
            : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX);
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIVout__DOT__signs 
        = ((2U & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX 
                  >> 0x1eU)) | (1U & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX 
                                      >> 0x1fU)));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux8_o_EX 
        = ((0x1000U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
            ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_imm
            : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX);
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULout__DOT__signs 
        = ((2U & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX 
                  >> 0x1eU)) | (1U & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX 
                                      >> 0x1fU)));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__branch_addr_calc 
        = (((0x100U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
             ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_pc
             : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX) 
           + vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_imm);
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux1_o_EX 
        = ((0x40U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
            ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_pc
            : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX);
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_in__DOT__A1 
        = ((0U != vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX) 
           & (1U == vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_in__DOT__A0 
        = (0U == vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX);
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULout__DOT__P_s 
        = ((2U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULout__DOT__signs))
            ? ((1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULout__DOT__signs))
                ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv
                : (VL_ULL(1) + (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv)))
            : ((1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULout__DOT__signs))
                ? (VL_ULL(1) + (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv))
                : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__branch_target_addr 
        = ((0xfffffffeU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__branch_addr_calc) 
           | (1U & ((~ ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                            >> 8U)) & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                                       >> 0xdU))) & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__branch_addr_calc)));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__aluout_EX 
        = ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
            ? ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                ? ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                    ? ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                        ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux3_o_EX
                        : ((IData)(4U) + vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux1_o_EX))
                    : ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                        ? (VL_GTES_III(1,32,32, vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux1_o_EX, vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux3_o_EX)
                            ? 1U : 0U) : ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux1_o_EX 
                                           >= vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux3_o_EX)
                                           ? 1U : 0U)))
                : ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                    ? ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                        ? ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux1_o_EX 
                            == vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux3_o_EX)
                            ? 0U : 1U) : ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux1_o_EX 
                                           == vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux3_o_EX)
                                           ? 1U : 0U))
                    : ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                        ? VL_SHIFTRS_III(32,32,5, vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux1_o_EX, 
                                         (0x1fU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux3_o_EX))
                        : (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux1_o_EX 
                           >> (0x1fU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux3_o_EX)))))
            : ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                ? ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                    ? ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                        ? (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux1_o_EX 
                           << (0x1fU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux3_o_EX))
                        : (VL_LTS_III(1,32,32, vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux1_o_EX, vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux3_o_EX)
                            ? 1U : 0U)) : ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                            ? ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux1_o_EX 
                                                < vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux3_o_EX)
                                                ? 1U
                                                : 0U)
                                            : (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux1_o_EX 
                                               & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux3_o_EX)))
                : ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                    ? ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                        ? (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux1_o_EX 
                           | vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux3_o_EX)
                        : (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux1_o_EX 
                           ^ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux3_o_EX))
                    : ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                        ? (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux1_o_EX 
                           - vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux3_o_EX)
                        : (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux1_o_EX 
                           + vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux3_o_EX)))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status 
        = ((((0U != vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX) 
             & ((1U != vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX) 
                & ((0xffffffffU == vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX) 
                   & ((0x10000U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                       ? (~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                             >> 0x13U)) : ((0U == (3U 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                                                      >> 0x11U))) 
                                           | (1U == 
                                              (3U & 
                                               (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                                                >> 0x11U)))))))) 
            << 5U) | (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_in__DOT__B1) 
                       << 4U) | (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_in__DOT__B0) 
                                  << 3U) | ((((0U != vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX) 
                                              & ((1U 
                                                  != vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX) 
                                                 & ((0xffffffffU 
                                                     == vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX) 
                                                    & ((0x10000U 
                                                        & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                        ? 
                                                       (~ 
                                                        (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                                                         >> 0x13U))
                                                        : 
                                                       (3U 
                                                        != 
                                                        (3U 
                                                         & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                                                            >> 0x11U))))))) 
                                             << 2U) 
                                            | (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_in__DOT__A1) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_in__DOT__A0))))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__imm_dec_o 
        = ((0x40U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
            ? ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                ? ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                    ? ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                        ? 0U : ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                 ? 0U : (0x1fU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                  >> 0xfU))))
                    : ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                        ? ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                            ? ((0xfff00000U & (VL_NEGATE_I((IData)(
                                                                   (1U 
                                                                    & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                       >> 0x1fU)))) 
                                               << 0x14U)) 
                               | ((0xff000U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr) 
                                  | ((0x800U & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                >> 9U)) 
                                     | ((0x7e0U & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                   >> 0x14U)) 
                                        | (0x1eU & 
                                           (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                            >> 0x14U))))))
                            : 0U) : ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                      ? ((0xfffff800U 
                                          & (VL_NEGATE_I((IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                     >> 0x1fU)))) 
                                             << 0xbU)) 
                                         | (0x7ffU 
                                            & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                               >> 0x14U)))
                                      : ((0xfffff000U 
                                          & (VL_NEGATE_I((IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                     >> 0x1fU)))) 
                                             << 0xcU)) 
                                         | ((0x800U 
                                             & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                << 4U)) 
                                            | ((0x7e0U 
                                                & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                     >> 7U))))))))
                : 0U) : ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                          ? ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                              ? ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                  ? 0U : ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                           ? (0xfffff000U 
                                              & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                           : 0U)) : 
                             ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                               ? 0U : ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                        ? 0U : ((0xfffff800U 
                                                 & (VL_NEGATE_I((IData)(
                                                                        (1U 
                                                                         & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                            >> 0x1fU)))) 
                                                    << 0xbU)) 
                                                | ((0x7e0U 
                                                    & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                       >> 0x14U)) 
                                                   | (0x1fU 
                                                      & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                         >> 7U)))))))
                          : ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                              ? ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                  ? 0U : ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                           ? (0xfffff000U 
                                              & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                           : ((0xfffff800U 
                                               & (VL_NEGATE_I((IData)(
                                                                      (1U 
                                                                       & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                          >> 0x1fU)))) 
                                                  << 0xbU)) 
                                              | (0x7ffU 
                                                 & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                    >> 0x14U)))))
                              : ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                  ? 0U : ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                           ? 0U : (
                                                   (0xfffff800U 
                                                    & (VL_NEGATE_I((IData)(
                                                                           (1U 
                                                                            & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                               >> 0x1fU)))) 
                                                       << 0xbU)) 
                                                   | (0x7ffU 
                                                      & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                         >> 0x14U))))))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_mem_len 
        = ((0x40U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
            ? 0U : ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                     ? ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                         ? 0U : ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                  ? 0U : ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                           ? 0U : (
                                                   (2U 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                     ? 
                                                    ((0U 
                                                      == 
                                                      (7U 
                                                       & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                          >> 0xcU)))
                                                      ? 0U
                                                      : 
                                                     ((1U 
                                                       == 
                                                       (7U 
                                                        & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                           >> 0xcU)))
                                                       ? 1U
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (7U 
                                                         & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                            >> 0xcU)))
                                                        ? 2U
                                                        : 0U)))
                                                     : 0U)
                                                    : 0U))))
                     : ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                         ? 0U : ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                  ? 0U : ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                           ? 0U : (
                                                   (2U 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                     ? 
                                                    ((0x4000U 
                                                      & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                      ? 
                                                     ((0x2000U 
                                                       & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                       ? 0U
                                                       : 
                                                      ((0x1000U 
                                                        & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                        ? 1U
                                                        : 0U))
                                                      : 
                                                     ((0x2000U 
                                                       & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                       ? 
                                                      ((0x1000U 
                                                        & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                        ? 0U
                                                        : 2U)
                                                       : 
                                                      ((0x1000U 
                                                        & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                        ? 1U
                                                        : 0U)))
                                                     : 0U)
                                                    : 0U))))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_wb_rf_wen 
        = (1U & ((0x40U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                  ? ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                         >> 5U)) | ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                     ? ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                         >> 3U) | (
                                                   (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                    >> 2U) 
                                                   | ((~ 
                                                       (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                        >> 1U)) 
                                                      | (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr))))
                                     : ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                         ? ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                >> 2U)) 
                                            | ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                   >> 1U)) 
                                               | (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)))
                                         : ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                >> 2U)) 
                                            | ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                   >> 1U)) 
                                               | (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr))))))
                  : ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                      ? ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                             >> 4U)) | ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                         >> 3U) | (
                                                   (4U 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                    ? 
                                                   ((~ 
                                                     (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                      >> 1U)) 
                                                    | (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr))
                                                    : 
                                                   ((~ 
                                                     (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                      >> 1U)) 
                                                    | (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)))))
                      : ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                          ? ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                              >> 3U) | ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                         ? ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                >> 1U)) 
                                            | (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr))
                                         : ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                >> 1U)) 
                                            | (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr))))
                          : ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                              >> 3U) | ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                         >> 2U) | (
                                                   (~ 
                                                    (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                     >> 1U)) 
                                                   | (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr))))))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_alu_func 
        = ((0x40U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
            ? ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                ? ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                    ? 0U : ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                             ? ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                 ? ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                     ? ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                         ? 0xeU : 0U)
                                     : 0U) : 0U) : 
                            ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                              ? ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                  ? ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                      ? 0xeU : 0U) : 0U)
                              : ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                  ? ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                      ? ((0x4000U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                          ? ((0x2000U 
                                              & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                              ? ((0x1000U 
                                                  & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                  ? 0xcU
                                                  : 5U)
                                              : ((0x1000U 
                                                  & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                  ? 0xdU
                                                  : 6U))
                                          : ((0x2000U 
                                              & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                              ? 0U : 
                                             ((0x1000U 
                                               & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                               ? 0xbU
                                               : 0xaU)))
                                      : 0U) : 0U))))
                : 0U) : ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                          ? ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                              ? ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                  ? 0U : ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                           ? ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                               ? ((1U 
                                                   & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                   ? 0xfU
                                                   : 0U)
                                               : 0U)
                                           : ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                               ? ((1U 
                                                   & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                   ? 
                                                  ((0x4000U 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                    ? 
                                                   ((0x2000U 
                                                     & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                      ? 4U
                                                      : 3U)
                                                     : 
                                                    ((0x1000U 
                                                      & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                      ? 
                                                     ((0x40000000U 
                                                       & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                       ? 9U
                                                       : 8U)
                                                      : 2U))
                                                    : 
                                                   ((0x2000U 
                                                     & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                      ? 5U
                                                      : 6U)
                                                     : 
                                                    ((0x1000U 
                                                      & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                      ? 7U
                                                      : 
                                                     ((0x20U 
                                                       & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                       ? 
                                                      (1U 
                                                       & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                          >> 0x1eU))
                                                       : 0U))))
                                                   : 0U)
                                               : 0U)))
                              : 0U) : ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                        ? ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                            ? 0U : 
                                           ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                             ? 0U : 
                                            ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                              ? ((1U 
                                                  & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                  ? 
                                                 ((0x4000U 
                                                   & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                   ? 
                                                  ((0x2000U 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                     ? 4U
                                                     : 3U)
                                                    : 
                                                   ((0x1000U 
                                                     & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                     ? 
                                                    ((0x40000000U 
                                                      & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                      ? 9U
                                                      : 8U)
                                                     : 2U))
                                                   : 
                                                  ((0x2000U 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                     ? 5U
                                                     : 6U)
                                                    : 
                                                   ((0x1000U 
                                                     & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                     ? 7U
                                                     : 
                                                    ((0x20U 
                                                      & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                      ? 
                                                     (1U 
                                                      & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                         >> 0x1eU))
                                                      : 0U))))
                                                  : 0U)
                                              : 0U)))
                                        : 0U)));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux6 
        = ((0x40U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
            ? ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                ? ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                    ? ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                        ? 0U : ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                 ? 0U : ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                          ? ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                              ? 1U : 0U)
                                          : 0U))) : 0U)
                : 0U) : ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                          ? ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                              ? ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                  ? 0U : ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                           ? 0U : (
                                                   (2U 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                     ? 
                                                    (((1U 
                                                       == 
                                                       (0x7fU 
                                                        & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                           >> 0x19U))) 
                                                      & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                         >> 5U))
                                                      ? 2U
                                                      : 0U)
                                                     : 0U)
                                                    : 0U)))
                              : 0U) : ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                        ? ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                            ? 0U : 
                                           ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                             ? 0U : 
                                            ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                              ? ((1U 
                                                  & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                  ? 
                                                 (((1U 
                                                    == 
                                                    (0x7fU 
                                                     & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                        >> 0x19U))) 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                      >> 5U))
                                                   ? 2U
                                                   : 0U)
                                                  : 0U)
                                              : 0U)))
                                        : 0U)));
    if ((0x40U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
        if ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
            if ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux5 = 0U;
            } else {
                if ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                    if ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                        if ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                            if ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                                if ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux5 = 1U;
                                } else {
                                    if ((1U & (~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                  >> 3U)))) {
                                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux5 = 0U;
                                    }
                                }
                            } else {
                                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux5 = 0U;
                            }
                        } else {
                            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux5 = 0U;
                        }
                    } else {
                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux5 = 0U;
                    }
                } else {
                    if ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                        if ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                            if ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                                if ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux5 = 1U;
                                } else {
                                    if ((1U & (~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                  >> 3U)))) {
                                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux5 = 0U;
                                    }
                                }
                            } else {
                                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux5 = 0U;
                            }
                        } else {
                            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux5 = 0U;
                        }
                    } else {
                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux5 
                            = (1U & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                      >> 1U) & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr));
                    }
                }
            }
        } else {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux5 = 0U;
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux5 = 0U;
    }
    if ((0x40U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux3 = 0U;
    } else {
        if ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
            if ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                if ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux3 = 0U;
                } else {
                    if ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux3 
                            = (1U & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                      >> 1U) & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr));
                    } else {
                        if ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                            if ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                                if ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                                    if ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux3 = 0U;
                                    }
                                } else {
                                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux3 = 1U;
                                }
                            } else {
                                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux3 = 0U;
                            }
                        } else {
                            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux3 = 0U;
                        }
                    }
                }
            } else {
                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux3 
                    = (1U & ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                 >> 3U)) & ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                >> 2U)) 
                                            & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                >> 1U) 
                                               & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr))));
            }
        } else {
            if ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                if ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux3 = 0U;
                } else {
                    if ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux3 
                            = (1U & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                      >> 1U) & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr));
                    } else {
                        if ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                            if ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                                if ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                                    if ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux3 = 0U;
                                    }
                                } else {
                                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux3 = 1U;
                                }
                            } else {
                                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux3 = 0U;
                            }
                        } else {
                            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux3 = 0U;
                        }
                    }
                }
            } else {
                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux3 
                    = (1U & ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                 >> 3U)) & ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                >> 2U)) 
                                            & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                >> 1U) 
                                               & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr))));
            }
        }
    }
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux7 
        = (1U & ((0x40U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                  ? ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                      >> 5U) & ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                    >> 4U)) & ((8U 
                                                & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                ? (
                                                   (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                    >> 2U) 
                                                   & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                       >> 1U) 
                                                      & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr))
                                                : (
                                                   (4U 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                    ? 
                                                   ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                     >> 1U) 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                    : 
                                                   ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                     >> 1U) 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)))))
                  : ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                      ? ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                          ? ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                 >> 3U)) & ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                             ? ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                 >> 1U) 
                                                & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                             : ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                 >> 1U) 
                                                & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)))
                          : ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                 >> 3U)) & ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                >> 2U)) 
                                            & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                >> 1U) 
                                               & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr))))
                      : ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                          ? ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                 >> 3U)) & ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                             ? ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                 >> 1U) 
                                                & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                             : ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                 >> 1U) 
                                                & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)))
                          : ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                 >> 3U)) & ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                >> 2U)) 
                                            & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                >> 1U) 
                                               & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)))))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux1 
        = (1U & ((0x40U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                  ? ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                      >> 5U) & ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                    >> 4U)) & ((8U 
                                                & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                ? (
                                                   (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                    >> 2U) 
                                                   & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                       >> 1U) 
                                                      & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr))
                                                : (
                                                   (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                    >> 2U) 
                                                   & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                       >> 1U) 
                                                      & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)))))
                  : ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                      ? ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                          >> 4U) & ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                        >> 3U)) & (
                                                   (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                    >> 2U) 
                                                   & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                       >> 1U) 
                                                      & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr))))
                      : ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                          >> 4U) & ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                        >> 3U)) & (
                                                   (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                    >> 2U) 
                                                   & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                       >> 1U) 
                                                      & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)))))));
    if ((0x40U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
        if ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
            if ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr 
                    = (1U & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                              >> 3U) | ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                         >> 2U) | (
                                                   (~ 
                                                    (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                     >> 1U)) 
                                                   | ((~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr) 
                                                      | ((~ 
                                                          (((0x73U 
                                                             == vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr) 
                                                            | (0x100073U 
                                                               == vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) 
                                                           | (0x30200073U 
                                                              == vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr))) 
                                                         & (4U 
                                                            == 
                                                            (7U 
                                                             & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                >> 0xcU)))))))));
            } else {
                if ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                    if ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                        if ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                            if ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                                if ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr = 0U;
                                } else {
                                    if ((1U & (~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                  >> 3U)))) {
                                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr 
                                            = (0U != 
                                               (7U 
                                                & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                   >> 0xcU)));
                                    }
                                }
                            } else {
                                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr = 1U;
                            }
                        } else {
                            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr = 1U;
                        }
                    } else {
                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr = 1U;
                    }
                } else {
                    if ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                        if ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                            if ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                                if ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr = 0U;
                                } else {
                                    if ((1U & (~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                  >> 3U)))) {
                                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr 
                                            = (0U != 
                                               (7U 
                                                & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                   >> 0xcU)));
                                    }
                                }
                            } else {
                                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr = 1U;
                            }
                        } else {
                            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr = 1U;
                        }
                    } else {
                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr 
                            = (1U & ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                         >> 1U)) | 
                                     ((~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr) 
                                      | (1U == (3U 
                                                & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                   >> 0xdU))))));
                    }
                }
            }
        } else {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr = 1U;
        }
    } else {
        if ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
            if ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                if ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr = 1U;
                } else {
                    if ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr 
                            = (1U & ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                         >> 1U)) | 
                                     (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)));
                    } else {
                        if ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                            if ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                                if ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr 
                                        = ((1U != (0x7fU 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                      >> 0x19U))) 
                                           & (((0U 
                                                == 
                                                (7U 
                                                 & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                    >> 0xcU))) 
                                               | (5U 
                                                  == 
                                                  (7U 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                      >> 0xcU))))
                                               ? (0U 
                                                  != 
                                                  ((0x20U 
                                                    & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                       >> 0x1aU)) 
                                                   | (0x1fU 
                                                      & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                         >> 0x19U))))
                                               : (0U 
                                                  != 
                                                  (0x7fU 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                      >> 0x19U)))));
                                } else {
                                    if ((1U & (~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                  >> 5U)))) {
                                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr 
                                            = ((1U 
                                                == 
                                                (7U 
                                                 & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                    >> 0xcU)))
                                                ? (0U 
                                                   != 
                                                   (0x7fU 
                                                    & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                       >> 0x19U)))
                                                : (
                                                   (5U 
                                                    == 
                                                    (7U 
                                                     & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                        >> 0xcU))) 
                                                   & (0U 
                                                      != 
                                                      ((0x20U 
                                                        & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                           >> 0x1aU)) 
                                                       | (0x1fU 
                                                          & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                             >> 0x19U))))));
                                    }
                                }
                            } else {
                                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr = 1U;
                            }
                        } else {
                            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr = 1U;
                        }
                    }
                }
            } else {
                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr 
                    = (1U & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                              >> 3U) | ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                         >> 2U) | (
                                                   (~ 
                                                    (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                     >> 1U)) 
                                                   | ((~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr) 
                                                      | (~ 
                                                         (((0U 
                                                            == 
                                                            (7U 
                                                             & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                >> 0xcU))) 
                                                           | (1U 
                                                              == 
                                                              (7U 
                                                               & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                  >> 0xcU)))) 
                                                          | (2U 
                                                             == 
                                                             (7U 
                                                              & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                 >> 0xcU))))))))));
            }
        } else {
            if ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                if ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr = 1U;
                } else {
                    if ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr 
                            = (1U & ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                         >> 1U)) | 
                                     (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)));
                    } else {
                        if ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                            if ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                                if ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr 
                                        = ((1U != (0x7fU 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                      >> 0x19U))) 
                                           & (((0U 
                                                == 
                                                (7U 
                                                 & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                    >> 0xcU))) 
                                               | (5U 
                                                  == 
                                                  (7U 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                      >> 0xcU))))
                                               ? (0U 
                                                  != 
                                                  ((0x20U 
                                                    & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                       >> 0x1aU)) 
                                                   | (0x1fU 
                                                      & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                         >> 0x19U))))
                                               : (0U 
                                                  != 
                                                  (0x7fU 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                      >> 0x19U)))));
                                } else {
                                    if ((1U & (~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                  >> 5U)))) {
                                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr 
                                            = ((1U 
                                                == 
                                                (7U 
                                                 & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                    >> 0xcU)))
                                                ? (0U 
                                                   != 
                                                   (0x7fU 
                                                    & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                       >> 0x19U)))
                                                : (
                                                   (5U 
                                                    == 
                                                    (7U 
                                                     & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                        >> 0xcU))) 
                                                   & (0U 
                                                      != 
                                                      ((0x20U 
                                                        & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                           >> 0x1aU)) 
                                                       | (0x1fU 
                                                          & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                             >> 0x19U))))));
                                    }
                                }
                            } else {
                                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr = 1U;
                            }
                        } else {
                            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr = 1U;
                        }
                    }
                }
            } else {
                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr 
                    = (1U & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                              >> 3U) | ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                         >> 2U) | (
                                                   (~ 
                                                    (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                     >> 1U)) 
                                                   | ((~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr) 
                                                      | (((3U 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                               >> 0xcU))) 
                                                          | (6U 
                                                             == 
                                                             (7U 
                                                              & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                 >> 0xcU)))) 
                                                         | (7U 
                                                            == 
                                                            (7U 
                                                             & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                >> 0xcU)))))))));
            }
        }
    }
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__hazard_stall 
        = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__L) 
           & ((((0x1fU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                          >> 0xfU)) == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rd)) 
               & ((((((0xcU == (0xfU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                        >> 3U))) | 
                      (0U == (0x1fU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                       >> 2U)))) | 
                     (8U == (0x1fU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                      >> 2U)))) | (4U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                       >> 2U)))) 
                   | (0xcU == (0x1fU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                        >> 2U)))) | 
                  ((0x1cU == (0x1fU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                       >> 2U))) & (~ 
                                                   (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                    >> 0xeU))))) 
              | (((0x1fU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                            >> 0x14U)) == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rd)) 
                 & (((0x18U == (0x1fU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                         >> 2U))) | 
                     (8U == (0x1fU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                      >> 2U)))) | (0xcU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                       >> 2U)))))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_wb_csr_wen 
        = (1U & ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                     >> 6U)) | ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                    >> 5U)) | ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                   >> 4U)) 
                                               | ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                   >> 3U) 
                                                  | ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                      >> 2U) 
                                                     | ((~ 
                                                         (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                          >> 1U)) 
                                                        | (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr))))))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_wmask_o 
        = (0xfU & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_misaligned)
                    ? ((1U == (3U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_mem) 
                                     >> 1U))) ? 1U : 
                       (0xfU >> (7U & ((IData)(4U) 
                                       - (3U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__LS_UNIT__DOT__addr_i_reg)))))
                    : ((0U == (3U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_mem) 
                                     >> 1U))) ? ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__aluout_EX))
                        : ((1U == (3U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_mem) 
                                         >> 1U))) ? 
                           ((IData)(3U) << (3U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__aluout_EX))
                            : ((IData)(0xfU) << (3U 
                                                 & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__aluout_EX))))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_o 
        = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_misaligned)
            ? ((1U == (3U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_mem) 
                             >> 1U))) ? (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX 
                                         >> 8U) : (
                                                   (0x1fU 
                                                    >= 
                                                    (((IData)(4U) 
                                                      - 
                                                      (3U 
                                                       & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__LS_UNIT__DOT__addr_i_reg)) 
                                                     << 3U))
                                                    ? 
                                                   (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX 
                                                    >> 
                                                    (((IData)(4U) 
                                                      - 
                                                      (3U 
                                                       & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__LS_UNIT__DOT__addr_i_reg)) 
                                                     << 3U))
                                                    : 0U))
            : ((0x1fU >= (0x18U & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__aluout_EX 
                                   << 3U))) ? (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX 
                                               << (0x18U 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__aluout_EX 
                                                      << 3U)))
                : 0U));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_addr_o 
        = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_misaligned)
            ? ((IData)(4U) + (0xfffffffcU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__LS_UNIT__DOT__addr_i_reg))
            : (0xfffffffcU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__aluout_EX));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch 
        = (1U & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                  >> 0xdU) | ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                               >> 0xeU) & (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__aluout_EX))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__fastres 
        = ((0x20U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
            ? ((0x10U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                ? 0U : ((8U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                         ? 0U : ((4U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                                  ? ((2U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                                      ? 0U : ((1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                                               ? 0U
                                               : ((0x10000U 
                                                   & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                   ? 
                                                  ((0x100000U 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (3U 
                                                     & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                                                        >> 0x11U)))
                                                    ? 1U
                                                    : 0U))))
                                  : ((2U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                                      ? ((1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                                          ? 0U : ((0x10000U 
                                                   & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                   ? 
                                                  ((0x100000U 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                    ? 0U
                                                    : 0xffffffffU)
                                                   : 0xffffffffU))
                                      : ((1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                                          ? 0U : ((0x10000U 
                                                   & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                   ? 
                                                  ((0x100000U 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX)))
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (3U 
                                                     & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                                                        >> 0x11U)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX))
                                                    : 0xffffffffU)))))))
            : ((0x10U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                ? ((8U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                    ? 0U : ((4U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                             ? ((2U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                                 ? 0U : ((1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                                          ? 0U : ((0x10000U 
                                                   & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                   ? 
                                                  ((0x100000U 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                    ? 0U
                                                    : 0xffffffffU)
                                                   : 0xffffffffU)))
                             : ((2U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                                 ? ((1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                                     ? 0U : ((0x10000U 
                                              & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                              ? ((0x100000U 
                                                  & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                  ? 0U
                                                  : 1U)
                                              : ((0U 
                                                  == 
                                                  (3U 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                                                      >> 0x11U)))
                                                  ? 1U
                                                  : 0U)))
                                 : ((1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                                     ? 0U : ((0x10000U 
                                              & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                              ? ((0x100000U 
                                                  & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                  ? 0U
                                                  : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX)
                                              : ((0U 
                                                  == 
                                                  (3U 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                                                      >> 0x11U)))
                                                  ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX
                                                  : 0U))))))
                : ((8U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                    ? ((4U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                        ? ((1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                            ? 0U : ((3U != (3U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status) 
                                                  >> 1U)))
                                     ? ((0x10000U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                         ? ((0x100000U 
                                             & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                             ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX
                                             : 0xffffffffU)
                                         : 0U) : 0U))
                        : ((2U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                            ? ((1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                                ? 0U : ((3U != (3U 
                                                & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status) 
                                                   >> 1U)))
                                         ? ((0x10000U 
                                             & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                             ? ((0x100000U 
                                                 & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                 ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX
                                                 : 0xffffffffU)
                                             : 0U) : 0U))
                            : ((1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                                ? 0U : ((3U != (3U 
                                                & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status) 
                                                   >> 1U)))
                                         ? ((0x10000U 
                                             & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                             ? ((0x100000U 
                                                 & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                 ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX
                                                 : 0xffffffffU)
                                             : 0U) : 0U))))
                    : ((4U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                        ? ((2U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                            ? 0U : ((1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                                     ? 0U : ((0x10000U 
                                              & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                              ? ((0x100000U 
                                                  & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                  ? 0xffffffffU
                                                  : 0U)
                                              : ((0U 
                                                  == 
                                                  (3U 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                                                      >> 0x11U)))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + 
                                                  (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX))
                                                  : 0xffffffffU))))
                        : ((2U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                            ? ((1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                                ? 0U : ((0x10000U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                         ? ((0x100000U 
                                             & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                             ? 1U : 0U)
                                         : ((0U == 
                                             (3U & 
                                              (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                                               >> 0x11U)))
                                             ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX
                                             : 0U)))
                            : 0U)))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__mux_fastres_sel_temp 
        = (1U & (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status) 
                  >> 5U) | (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status) 
                             >> 4U) | ((8U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                                        ? ((4U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                                            ? ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status) 
                                               | (3U 
                                                  != 
                                                  (3U 
                                                   & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status) 
                                                      >> 1U))))
                                            : ((2U 
                                                & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                                                ? ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status) 
                                                   | (3U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status) 
                                                          >> 1U))))
                                                : ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status) 
                                                   | (3U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status) 
                                                          >> 1U))))))
                                        : (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status) 
                                            >> 2U) 
                                           | (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status) 
                                               >> 1U) 
                                              | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status)))))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux3_o_ID 
        = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__hazard_stall)
            ? 0U : (((((0x33U == (0x7fU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) 
                       & (1U == (0x7fU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                          >> 0x19U))))
                       ? (3U & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                >> 0xcU)) : 0U) << 0x13U) 
                    | (((((0x33U == (0x7fU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) 
                          & (1U == (0x7fU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                             >> 0x19U))))
                          ? (3U & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                   >> 0xcU)) : 0U) 
                        << 0x11U) | ((0xffff0000U & 
                                      ((((0x33U == 
                                          (0x7fU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) 
                                         & (1U == (0x7fU 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                      >> 0x19U)))) 
                                        << 0x10U) & 
                                       (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                        << 2U))) | 
                                     ((((0x33U == (0x7fU 
                                                   & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) 
                                        & (1U == (0x7fU 
                                                  & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                     >> 0x19U)))) 
                                       << 0xfU) | (
                                                   (0x4000U 
                                                    & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                        << 8U) 
                                                       & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                           << 9U) 
                                                          & (((~ 
                                                               (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                >> 4U)) 
                                                              << 0xeU) 
                                                             & (((~ 
                                                                  (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                   >> 3U)) 
                                                                 << 0xeU) 
                                                                & (((~ 
                                                                     (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                      >> 2U)) 
                                                                    << 0xeU) 
                                                                   & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                       << 0xdU) 
                                                                      & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                         << 0xeU)))))))) 
                                                   | ((0x2000U 
                                                       & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                           << 7U) 
                                                          & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                              << 8U) 
                                                             & (((~ 
                                                                  (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                   >> 4U)) 
                                                                 & ((8U 
                                                                     & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                                     ? 
                                                                    ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                      >> 2U) 
                                                                     & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                         >> 1U) 
                                                                        & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr))
                                                                     : 
                                                                    ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                      >> 2U) 
                                                                     & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                         >> 1U) 
                                                                        & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)))) 
                                                                << 0xdU)))) 
                                                      | ((0x1000U 
                                                          & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                              << 6U) 
                                                             & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                 << 7U) 
                                                                & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                    << 8U) 
                                                                   & (((~ 
                                                                        (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                         >> 3U)) 
                                                                       << 0xcU) 
                                                                      & (((~ 
                                                                           (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                            >> 2U)) 
                                                                          << 0xcU) 
                                                                         & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                             << 0xbU) 
                                                                            & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                                << 0xcU) 
                                                                               & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                                >> 2U))))))))) 
                                                         | (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux7) 
                                                             << 0xbU) 
                                                            | (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux6) 
                                                                << 9U) 
                                                               | (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux5) 
                                                                   << 8U) 
                                                                  | (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux3) 
                                                                      << 7U) 
                                                                     | (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux1) 
                                                                         << 6U) 
                                                                        | ((((0x40U 
                                                                              & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                                              ? 
                                                                             ((0x20U 
                                                                               & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                                               ? 
                                                                              ((0x10U 
                                                                                & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                                                ? 
                                                                               ((8U 
                                                                                & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                                                 ? 0U
                                                                                 : 
                                                                                ((4U 
                                                                                & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                                                 ? 0U
                                                                                 : 
                                                                                ((2U 
                                                                                & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                                                 ? 
                                                                                ((1U 
                                                                                & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                                                 ? 
                                                                                ((1U 
                                                                                == 
                                                                                (3U 
                                                                                & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                                >> 0xcU)))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((2U 
                                                                                == 
                                                                                (3U 
                                                                                & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                                >> 0xcU)))
                                                                                 ? 1U
                                                                                 : 
                                                                                ((3U 
                                                                                == 
                                                                                (3U 
                                                                                & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                                >> 0xcU)))
                                                                                 ? 2U
                                                                                 : 0U)))
                                                                                 : 0U)
                                                                                 : 0U)))
                                                                                : 0U)
                                                                               : 0U)
                                                                              : 0U) 
                                                                            << 4U) 
                                                                           | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_alu_func)))))))))))))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux1_o_ID 
        = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__hazard_stall)
            ? 0xcU : ((((0x40U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                         ? 0U : ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                  ? ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                      ? ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                          ? 0U : ((4U 
                                                   & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                   ? 
                                                  ((2U 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                     ? 2U
                                                     : 0U)
                                                    : 0U)
                                                   : 0U))
                                      : 0U) : ((0x10U 
                                                & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                ? 0U
                                                : (
                                                   (8U 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                       ? 1U
                                                       : 0U)
                                                      : 0U)))))) 
                       << 5U) | ((0x10U & (((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                >> 6U)) 
                                            << 4U) 
                                           & (((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                   >> 5U)) 
                                               << 4U) 
                                              & (((~ 
                                                   (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                    >> 4U)) 
                                                  << 4U) 
                                                 & (((~ 
                                                      (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                       >> 3U)) 
                                                     << 4U) 
                                                    & (((~ 
                                                         (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                          >> 2U)) 
                                                        << 4U) 
                                                       & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                           << 3U) 
                                                          & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                              & ((~ 
                                                                  (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                   >> 0xeU)) 
                                                                 & ((~ 
                                                                     (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                      >> 0xdU)) 
                                                                    | (~ 
                                                                       (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                        >> 0xcU))))) 
                                                             << 4U)))))))) 
                                 | (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_wb_rf_wen) 
                                     << 3U) | (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_wb_csr_wen) 
                                                << 2U) 
                                               | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_mem_len))))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__csr_stall 
        = ((~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_wb_csr_wen)) 
           & (((((0xfffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                            >> 0x14U)) == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_csr_addr)) 
                & (~ ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_wb) 
                      >> 2U))) | (((0xfffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                              >> 0x14U)) 
                                   == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_csr_addr)) 
                                  & (~ ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_wb) 
                                        >> 2U)))) | 
              (((0xfffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                           >> 0x14U)) == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_csr_addr)) 
               & (~ ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_wb) 
                     >> 2U)))));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_sel_i[1U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_wmask_o;
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_sel_i[2U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_wmask_o;
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_sel_i[3U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_wmask_o;
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_dat_i[1U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_o;
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_dat_i[2U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_o;
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_dat_i[3U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_o;
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_adr_i[1U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_addr_o;
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_adr_i[2U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_addr_o;
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_adr_i[3U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_addr_o;
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__instr_addr_misaligned 
        = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch) 
           & (0U != (3U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__branch_target_addr)));
    vlSymsp->TOP__barebones_wb_top.__Vtableidx1 = (
                                                   (0x40U 
                                                    & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                                                       >> 0xaU)) 
                                                   | (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__mux_fastres_sel_temp) 
                                                       << 5U) 
                                                      | ((0x10U 
                                                          & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                                                             >> 0xbU)) 
                                                         | (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_rdy) 
                                                             << 3U) 
                                                            | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__current_state)))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start 
        = vlSymsp->TOP__barebones_wb_top.__Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start
        [vlSymsp->TOP__barebones_wb_top.__Vtableidx1];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en 
        = vlSymsp->TOP__barebones_wb_top.__Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en
        [vlSymsp->TOP__barebones_wb_top.__Vtableidx1];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en 
        = vlSymsp->TOP__barebones_wb_top.__Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en
        [vlSymsp->TOP__barebones_wb_top.__Vtableidx1];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel 
        = vlSymsp->TOP__barebones_wb_top.__Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel
        [vlSymsp->TOP__barebones_wb_top.__Vtableidx1];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel 
        = vlSymsp->TOP__barebones_wb_top.__Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel
        [vlSymsp->TOP__barebones_wb_top.__Vtableidx1];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__muldiv_done_EX 
        = vlSymsp->TOP__barebones_wb_top.__Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX
        [vlSymsp->TOP__barebones_wb_top.__Vtableidx1];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state 
        = vlSymsp->TOP__barebones_wb_top.__Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state
        [vlSymsp->TOP__barebones_wb_top.__Vtableidx1];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__pending_exception 
        = (((((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr) 
              | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__instr_addr_misaligned)) 
             | (0x73U == vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) 
            | (0x100073U == vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) 
           & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch)));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_ex_flush 
        = (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_mem_flush) 
            | ((((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus 
                  >> 3U) & (0U != vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__masked_irq)) 
                & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_dummy))) 
               & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_misaligned)))) 
           | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__instr_addr_misaligned));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_Rin_en 
        = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__current_state)
            ? (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__current_state)
            : (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_Q_en 
        = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__current_state)
            ? (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__current_state)
            : (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start));
    if (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__current_state) {
        if (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__current_state) {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__start_count 
                = (0x1fU != (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__round_count));
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__start_count 
            = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start;
    }
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__next_state 
        = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__current_state)
            ? ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__current_state) 
               & (0x1fU != (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__round_count)))
            : (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__muldiv_stall_EX 
        = (1U & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                  >> 0xfU) & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__muldiv_done_EX))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_if_flush 
        = (((((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus 
               >> 3U) & (0U != vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__masked_irq)) 
             | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__STATE)) 
            | ((0x30200073U == vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr) 
               & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch)))) 
           | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__pending_exception));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_id_flush 
        = (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_ex_flush) 
            | ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus 
                >> 3U) & (0U != vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__masked_irq))) 
           | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__pending_exception));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mem_wen_EX 
        = (1U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__muldiv_stall_EX) 
                 | ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_ex_flush) 
                    | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_mem))));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_we_i = 
        ((0xdU & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_we_i)) 
         | (2U & ((~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mem_wen_EX)) 
                  << 1U)));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_we_i = 
        ((0xbU & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_we_i)) 
         | (4U & ((~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mem_wen_EX)) 
                  << 2U)));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_we_i = 
        ((7U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_we_i)) 
         | (8U & ((~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mem_wen_EX)) 
                  << 3U)));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__misaligned_access 
        = ((((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__L) 
             | (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mem_wen_EX))) 
            & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_misaligned))) 
           & (((2U == (3U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_mem) 
                             >> 1U))) & (0U != (3U 
                                                & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__aluout_EX))) 
              | ((1U == (3U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_mem) 
                               >> 1U))) & (3U == (3U 
                                                  & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__aluout_EX)))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_req_o 
        = (1U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__L) 
                 | (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mem_wen_EX))));
    vlSymsp->TOP__barebones_wb_top.__PVT__data_wb_cyc_o 
        = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_req_o) 
           | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_cyc));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_cyc_i 
        = ((0xdU & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_cyc_i)) 
           | ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__data_wb_cyc_o) 
              << 1U));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_cyc_i 
        = ((0xbU & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_cyc_i)) 
           | ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__data_wb_cyc_o) 
              << 2U));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_cyc_i 
        = ((7U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_cyc_i)) 
           | ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__data_wb_cyc_o) 
              << 3U));
}

VL_INLINE_OPT void Vbarebones_wb_top_barebones_wb_top::_combo__TOP__barebones_wb_top__9(Vbarebones_wb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vbarebones_wb_top_barebones_wb_top::_combo__TOP__barebones_wb_top__9\n"); );
    Vbarebones_wb_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_rst_i 
        = ((0xeU & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_rst_i)) 
           | (1U & (~ (IData)(vlTOPp->reset_i))));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_rst_i 
        = ((0xdU & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_rst_i)) 
           | (2U & ((~ (IData)(vlTOPp->reset_i)) << 1U)));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_rst_i 
        = ((0xbU & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_rst_i)) 
           | (4U & ((~ (IData)(vlTOPp->reset_i)) << 2U)));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_rst_i 
        = ((7U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_rst_i)) 
           | (8U & ((~ (IData)(vlTOPp->reset_i)) << 3U)));
    vlSymsp->TOP__barebones_wb_top.__Vcellinp__memory__port1_wb_rst_i 
        = (1U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_rst_i) 
                 >> 1U));
    vlSymsp->TOP__barebones_wb_top.__Vcellinp__memory__port0_wb_rst_i 
        = (1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_rst_i));
    vlSymsp->TOP__barebones_wb_top.__Vcellinp__debug_if__wb_rst_i 
        = (1U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_rst_i) 
                 >> 3U));
    vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__rst 
        = (1U & (~ ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_rst_i) 
                    >> 2U)));
}

VL_INLINE_OPT void Vbarebones_wb_top_barebones_wb_top::_multiclk__TOP__barebones_wb_top__10(Vbarebones_wb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vbarebones_wb_top_barebones_wb_top::_multiclk__TOP__barebones_wb_top__10\n"); );
    Vbarebones_wb_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_ack_o 
        = ((0xcU & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_ack_o)) 
           | (((IData)(vlSymsp->TOP__barebones_wb_top__memory.__PVT__port1_ack) 
               << 1U) | (IData)(vlSymsp->TOP__barebones_wb_top__memory.__PVT__port0_ack)));
}

VL_INLINE_OPT void Vbarebones_wb_top_barebones_wb_top::_sequent__TOP__barebones_wb_top__11(Vbarebones_wb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vbarebones_wb_top_barebones_wb_top::_sequent__TOP__barebones_wb_top__11\n"); );
    Vbarebones_wb_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_dat_o[1U] 
        = vlSymsp->TOP__barebones_wb_top__memory.__PVT__port1_wb_dat_o;
}

VL_INLINE_OPT void Vbarebones_wb_top_barebones_wb_top::_sequent__TOP__barebones_wb_top__12(Vbarebones_wb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vbarebones_wb_top_barebones_wb_top::_sequent__TOP__barebones_wb_top__12\n"); );
    Vbarebones_wb_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_dat_o[0U] 
        = vlSymsp->TOP__barebones_wb_top__memory.__PVT__port0_wb_dat_o;
}

VL_INLINE_OPT void Vbarebones_wb_top_barebones_wb_top::_sequent__TOP__barebones_wb_top__13(Vbarebones_wb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vbarebones_wb_top_barebones_wb_top::_sequent__TOP__barebones_wb_top__13\n"); );
    Vbarebones_wb_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_dat_o[2U] 
        = ((0x2000U == vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__adr)
            ? (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtime)
            : ((0x2004U == vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__adr)
                ? (IData)((vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtime 
                           >> 0x20U)) : (((QData)((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__adr)) 
                                          == vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtimecmp)
                                          ? (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtimecmp)
                                          : (IData)(
                                                    (vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtimecmp 
                                                     >> 0x20U)))));
}

VL_INLINE_OPT void Vbarebones_wb_top_barebones_wb_top::_multiclk__TOP__barebones_wb_top__14(Vbarebones_wb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vbarebones_wb_top_barebones_wb_top::_multiclk__TOP__barebones_wb_top__14\n"); );
    Vbarebones_wb_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_ack_o 
        = ((0xbU & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_ack_o)) 
           | (0xfffffffcU & (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__stb) 
                              << 2U) & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_cyc_i))));
}

VL_INLINE_OPT void Vbarebones_wb_top_barebones_wb_top::_multiclk__TOP__barebones_wb_top__15(Vbarebones_wb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vbarebones_wb_top_barebones_wb_top::_multiclk__TOP__barebones_wb_top__15\n"); );
    Vbarebones_wb_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__barebones_wb_top.__PVT__valid = 0U;
    vlSymsp->TOP__barebones_wb_top.__PVT__k = 1U;
    while ((VL_GTS_III(1,32,32, 4U, vlSymsp->TOP__barebones_wb_top.__PVT__k) 
            & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__valid)))) {
        if ((1U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__r_stb) 
                   >> (3U & vlSymsp->TOP__barebones_wb_top.__PVT__k)))) {
            vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_dat_i 
                = vlSymsp->TOP__barebones_wb_top.__PVT__wb_dat_o
                [(3U & vlSymsp->TOP__barebones_wb_top.__PVT__k)];
            vlSymsp->TOP__barebones_wb_top.__PVT__valid = 1U;
            vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_stall_i 
                = (1U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_stall_o) 
                         >> (3U & vlSymsp->TOP__barebones_wb_top.__PVT__k)));
            vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_err_i 
                = (1U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_err_o) 
                         >> (3U & vlSymsp->TOP__barebones_wb_top.__PVT__k)));
            vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_ack_i 
                = (1U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_ack_o) 
                         >> (3U & vlSymsp->TOP__barebones_wb_top.__PVT__k)));
        } else {
            vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_dat_i = 0U;
            vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_stall_i = 0U;
            vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_err_i = 0U;
            vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_ack_i = 0U;
        }
        vlSymsp->TOP__barebones_wb_top.__PVT__k = ((IData)(1U) 
                                                   + vlSymsp->TOP__barebones_wb_top.__PVT__k);
    }
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__memout 
        = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_misaligned)
            ? ((2U == (3U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_mem) 
                             >> 1U))) ? ((3U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_addr_bits))
                                          ? ((0xffffff00U 
                                              & (vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_dat_i 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_memout))
                                          : ((2U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_addr_bits))
                                              ? ((0xffff0000U 
                                                  & (vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_dat_i 
                                                     << 0x10U)) 
                                                 | (0xffffU 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_memout))
                                              : ((0xff000000U 
                                                  & (vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_dat_i 
                                                     << 0x18U)) 
                                                 | (0xffffffU 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_memout))))
                : ((0xff00U & (vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_dat_i 
                               << 8U)) | (0xffU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_memout)))
            : ((2U == (3U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_mem) 
                             >> 1U))) ? ((3U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_addr_bits))
                                          ? (0xffU 
                                             & (vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_dat_i 
                                                >> 0x18U))
                                          : ((2U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_addr_bits))
                                              ? (0xffffU 
                                                 & (vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_dat_i 
                                                    >> 0x10U))
                                              : ((1U 
                                                  == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_addr_bits))
                                                  ? 
                                                 (0xffffffU 
                                                  & (vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_dat_i 
                                                     >> 8U))
                                                  : vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_dat_i)))
                : ((1U == (3U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_mem) 
                                 >> 1U))) ? ((3U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_addr_bits))
                                              ? (0xffU 
                                                 & (vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_dat_i 
                                                    >> 0x18U))
                                              : ((2U 
                                                  == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_addr_bits))
                                                  ? 
                                                 (0xffffU 
                                                  & (vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_dat_i 
                                                     >> 0x10U))
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_addr_bits))
                                                   ? 
                                                  (0xffffU 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_dat_i 
                                                      >> 8U))
                                                   : 
                                                  (0xffffU 
                                                   & vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_dat_i))))
                    : ((3U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_addr_bits))
                        ? (0xffU & (vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_dat_i 
                                    >> 0x18U)) : ((2U 
                                                   == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_addr_bits))
                                                   ? 
                                                  (0xffU 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_dat_i 
                                                      >> 0x10U))
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_addr_bits))
                                                    ? 
                                                   (0xffU 
                                                    & (vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_dat_i 
                                                       >> 8U))
                                                    : 
                                                   (0xffU 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_dat_i)))))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_EX 
        = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__muldiv_stall_EX) 
           | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_stall_i));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_ID 
        = (((((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__hazard_stall) 
              | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__muldiv_stall_EX)) 
             | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__misaligned_access)) 
            | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_stall_i)) 
           | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__csr_stall));
}

VL_INLINE_OPT void Vbarebones_wb_top_barebones_wb_top::_combo__TOP__barebones_wb_top__16(Vbarebones_wb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vbarebones_wb_top_barebones_wb_top::_combo__TOP__barebones_wb_top__16\n"); );
    Vbarebones_wb_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__pc_i 
        = ((IData)(vlTOPp->reset_i) ? (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__STATE) 
                                        | ((0x30200073U 
                                            == vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr) 
                                           & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch))))
                                        ? (((0x30200073U 
                                             == vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr) 
                                            & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch)))
                                            ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mepc
                                            : ((1U 
                                                & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mtvec)
                                                ? (
                                                   (0x80000000U 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause)
                                                    ? 
                                                   ((0xfffffffeU 
                                                     & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mtvec) 
                                                    + 
                                                    (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause 
                                                     << 2U))
                                                    : 
                                                   (0xfffffffeU 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mtvec))
                                                : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mtvec))
                                        : ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch)
                                            ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__branch_target_addr
                                            : ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_ID)
                                                ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__pc_o
                                                : ((IData)(4U) 
                                                   + vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__pc_o))))
            : 0U);
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_adr_i[0U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__pc_i;
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_stb_i 
        = ((0xdU & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_stb_i)) 
           | (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_req_o) 
               & ((vlSymsp->TOP__barebones_wb_top.__PVT__slave_adr_begin
                   [1U] <= vlSymsp->TOP__barebones_wb_top.__PVT__wb_adr_i
                   [1U]) & (vlSymsp->TOP__barebones_wb_top.__PVT__wb_adr_i
                            [1U] <= vlSymsp->TOP__barebones_wb_top.__PVT__slave_adr_end
                            [1U]))) << 1U));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_stb_i 
        = ((0xbU & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_stb_i)) 
           | (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_req_o) 
               & ((vlSymsp->TOP__barebones_wb_top.__PVT__slave_adr_begin
                   [2U] <= vlSymsp->TOP__barebones_wb_top.__PVT__wb_adr_i
                   [2U]) & (vlSymsp->TOP__barebones_wb_top.__PVT__wb_adr_i
                            [2U] <= vlSymsp->TOP__barebones_wb_top.__PVT__slave_adr_end
                            [2U]))) << 2U));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_stb_i 
        = ((7U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_stb_i)) 
           | (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_req_o) 
               & ((vlSymsp->TOP__barebones_wb_top.__PVT__slave_adr_begin
                   [3U] <= vlSymsp->TOP__barebones_wb_top.__PVT__wb_adr_i
                   [3U]) & (vlSymsp->TOP__barebones_wb_top.__PVT__wb_adr_i
                            [3U] <= vlSymsp->TOP__barebones_wb_top.__PVT__slave_adr_end
                            [3U]))) << 3U));
}

void Vbarebones_wb_top_barebones_wb_top::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vbarebones_wb_top_barebones_wb_top::_ctor_var_reset\n"); );
    // Body
    clk_i = VL_RAND_RESET_I(1);
    reset_i = VL_RAND_RESET_I(1);
    meip_i = VL_RAND_RESET_I(1);
    fast_irq_i = VL_RAND_RESET_I(16);
    irq_ack_o = VL_RAND_RESET_I(1);
    __PVT__data_wb_cyc_o = VL_RAND_RESET_I(1);
    __PVT__inst_wb_rst_i = VL_RAND_RESET_I(1);
    __PVT__inst_wb_clk_i = VL_RAND_RESET_I(1);
    __PVT__wb_cyc_i = VL_RAND_RESET_I(4);
    __PVT__wb_stb_i = VL_RAND_RESET_I(4);
    __PVT__wb_we_i = VL_RAND_RESET_I(4);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __PVT__wb_adr_i[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __PVT__wb_dat_i[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __PVT__wb_sel_i[__Vi0] = VL_RAND_RESET_I(4);
    }}
    __PVT__wb_stall_o = VL_RAND_RESET_I(4);
    __PVT__wb_ack_o = VL_RAND_RESET_I(4);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __PVT__wb_dat_o[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __PVT__wb_err_o = VL_RAND_RESET_I(4);
    __PVT__wb_rst_i = VL_RAND_RESET_I(4);
    __PVT__wb_clk_i = VL_RAND_RESET_I(4);
    __PVT__r_stb = VL_RAND_RESET_I(4);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __PVT__slave_adr_begin[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __PVT__slave_adr_end[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __PVT__r_data_wb_dat_i = VL_RAND_RESET_I(32);
    __PVT__r_data_wb_err_i = VL_RAND_RESET_I(1);
    __PVT__r_data_wb_stall_i = VL_RAND_RESET_I(1);
    __PVT__r_data_wb_ack_i = VL_RAND_RESET_I(1);
    __PVT__valid = VL_RAND_RESET_I(1);
    __PVT__k = VL_RAND_RESET_I(32);
    __Vcellinp__memory__port1_wb_clk_i = VL_RAND_RESET_I(1);
    __Vcellinp__memory__port1_wb_rst_i = VL_RAND_RESET_I(1);
    __Vcellinp__memory__port0_wb_clk_i = VL_RAND_RESET_I(1);
    __Vcellinp__memory__port0_wb_rst_i = VL_RAND_RESET_I(1);
    __Vcellinp__mtime_regs__wb_clk_i = VL_RAND_RESET_I(1);
    __Vcellinp__debug_if__wb_clk_i = VL_RAND_RESET_I(1);
    __Vcellinp__debug_if__wb_rst_i = VL_RAND_RESET_I(1);
    __PVT__core0__DOT__data_addr_o = VL_RAND_RESET_I(32);
    __PVT__core0__DOT__data_o = VL_RAND_RESET_I(32);
    __PVT__core0__DOT__data_wmask_o = VL_RAND_RESET_I(4);
    __PVT__core0__DOT__data_req_o = VL_RAND_RESET_I(1);
    __PVT__core0__DOT__data_cyc = VL_RAND_RESET_I(1);
    __PVT__core0__DOT__core0__DOT__pc_i = VL_RAND_RESET_I(32);
    __PVT__core0__DOT__core0__DOT__pc_o = VL_RAND_RESET_I(32);
    __PVT__core0__DOT__core0__DOT__IFID_preg_instr = VL_RAND_RESET_I(32);
    __PVT__core0__DOT__core0__DOT__IFID_preg_pc = VL_RAND_RESET_I(32);
    __PVT__core0__DOT__core0__DOT__IFID_preg_dummy = VL_RAND_RESET_I(1);
    __PVT__core0__DOT__core0__DOT__data1_ID = VL_RAND_RESET_I(32);
    __PVT__core0__DOT__core0__DOT__data2_ID = VL_RAND_RESET_I(32);
    __PVT__core0__DOT__core0__DOT__stall_ID = VL_RAND_RESET_I(1);
    __PVT__core0__DOT__core0__DOT__ctrl_unit_alu_func = VL_RAND_RESET_I(4);
    __PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux1 = VL_RAND_RESET_I(1);
    __PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux3 = VL_RAND_RESET_I(1);
    __PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux5 = VL_RAND_RESET_I(1);
    __PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux7 = VL_RAND_RESET_I(1);
    __PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux6 = VL_RAND_RESET_I(2);
    __PVT__core0__DOT__core0__DOT__ctrl_unit_mem_len = VL_RAND_RESET_I(2);
    __PVT__core0__DOT__core0__DOT__ctrl_unit_wb_rf_wen = VL_RAND_RESET_I(1);
    __PVT__core0__DOT__core0__DOT__ctrl_unit_wb_csr_wen = VL_RAND_RESET_I(1);
    __PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr = VL_RAND_RESET_I(1);
    __PVT__core0__DOT__core0__DOT__mux1_o_ID = VL_RAND_RESET_I(7);
    __PVT__core0__DOT__core0__DOT__mux3_o_ID = VL_RAND_RESET_I(21);
    __PVT__core0__DOT__core0__DOT__imm_dec_o = VL_RAND_RESET_I(32);
    __PVT__core0__DOT__core0__DOT__IDEX_preg_imm = VL_RAND_RESET_I(32);
    __PVT__core0__DOT__core0__DOT__IDEX_preg_rd = VL_RAND_RESET_I(5);
    __PVT__core0__DOT__core0__DOT__IDEX_preg_rs2 = VL_RAND_RESET_I(5);
    __PVT__core0__DOT__core0__DOT__IDEX_preg_rs1 = VL_RAND_RESET_I(5);
    __PVT__core0__DOT__core0__DOT__IDEX_preg_data2 = VL_RAND_RESET_I(32);
    __PVT__core0__DOT__core0__DOT__IDEX_preg_data1 = VL_RAND_RESET_I(32);
    __PVT__core0__DOT__core0__DOT__IDEX_preg_pc = VL_RAND_RESET_I(32);
    __PVT__core0__DOT__core0__DOT__IDEX_preg_ex = VL_RAND_RESET_I(21);
    __PVT__core0__DOT__core0__DOT__IDEX_preg_mem = VL_RAND_RESET_I(3);
    __PVT__core0__DOT__core0__DOT__IDEX_preg_wb = VL_RAND_RESET_I(7);
    __PVT__core0__DOT__core0__DOT__IDEX_preg_csr_addr = VL_RAND_RESET_I(12);
    __PVT__core0__DOT__core0__DOT__IDEX_preg_dummy = VL_RAND_RESET_I(1);
    __PVT__core0__DOT__core0__DOT__IDEX_preg_mret = VL_RAND_RESET_I(1);
    __PVT__core0__DOT__core0__DOT__IDEX_preg_misaligned = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            __PVT__core0__DOT__core0__DOT__register_bank[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __PVT__core0__DOT__core0__DOT__muldiv_done_EX = VL_RAND_RESET_I(1);
    __PVT__core0__DOT__core0__DOT__muldiv_stall_EX = VL_RAND_RESET_I(1);
    __PVT__core0__DOT__core0__DOT__mux2_ctrl_EX = VL_RAND_RESET_I(2);
    __PVT__core0__DOT__core0__DOT__mux4_ctrl_EX = VL_RAND_RESET_I(2);
    __PVT__core0__DOT__core0__DOT__mux1_o_EX = VL_RAND_RESET_I(32);
    __PVT__core0__DOT__core0__DOT__mux2_o_EX = VL_RAND_RESET_I(32);
    __PVT__core0__DOT__core0__DOT__mux3_o_EX = VL_RAND_RESET_I(32);
    __PVT__core0__DOT__core0__DOT__mux4_o_EX = VL_RAND_RESET_I(32);
    __PVT__core0__DOT__core0__DOT__mux8_o_EX = VL_RAND_RESET_I(32);
    __PVT__core0__DOT__core0__DOT__aluout_EX = VL_RAND_RESET_I(32);
    __PVT__core0__DOT__core0__DOT__stall_EX = VL_RAND_RESET_I(1);
    __PVT__core0__DOT__core0__DOT__L = VL_RAND_RESET_I(1);
    __PVT__core0__DOT__core0__DOT__misaligned_access = VL_RAND_RESET_I(1);
    __PVT__core0__DOT__core0__DOT__mem_wen_EX = VL_RAND_RESET_I(1);
    __PVT__core0__DOT__core0__DOT__instr_addr_misaligned = VL_RAND_RESET_I(1);
    __PVT__core0__DOT__core0__DOT__hazard_stall = VL_RAND_RESET_I(1);
    __PVT__core0__DOT__core0__DOT__branch_target_addr = VL_RAND_RESET_I(32);
    __PVT__core0__DOT__core0__DOT__branch_addr_calc = VL_RAND_RESET_I(32);
    __PVT__core0__DOT__core0__DOT__take_branch = VL_RAND_RESET_I(1);
    __PVT__core0__DOT__core0__DOT__EXMEM_preg_imm = VL_RAND_RESET_I(32);
    __PVT__core0__DOT__core0__DOT__EXMEM_preg_rd = VL_RAND_RESET_I(5);
    __PVT__core0__DOT__core0__DOT__EXMEM_preg_data2 = VL_RAND_RESET_I(32);
    __PVT__core0__DOT__core0__DOT__EXMEM_preg_aluout = VL_RAND_RESET_I(32);
    __PVT__core0__DOT__core0__DOT__EXMEM_preg_pc = VL_RAND_RESET_I(32);
    __PVT__core0__DOT__core0__DOT__EXMEM_preg_csr_addr = VL_RAND_RESET_I(12);
    __PVT__core0__DOT__core0__DOT__EXMEM_preg_mem = VL_RAND_RESET_I(3);
    __PVT__core0__DOT__core0__DOT__EXMEM_preg_wb = VL_RAND_RESET_I(7);
    __PVT__core0__DOT__core0__DOT__EXMEM_preg_dummy = VL_RAND_RESET_I(1);
    __PVT__core0__DOT__core0__DOT__EXMEM_preg_mret = VL_RAND_RESET_I(1);
    __PVT__core0__DOT__core0__DOT__EXMEM_preg_misaligned = VL_RAND_RESET_I(1);
    __PVT__core0__DOT__core0__DOT__EXMEM_preg_addr_bits = VL_RAND_RESET_I(2);
    __PVT__core0__DOT__core0__DOT__memout_MEM = VL_RAND_RESET_I(32);
    __PVT__core0__DOT__core0__DOT__memout = VL_RAND_RESET_I(32);
    __PVT__core0__DOT__core0__DOT__MEMWB_preg_rd = VL_RAND_RESET_I(5);
    __PVT__core0__DOT__core0__DOT__MEMWB_preg_memout = VL_RAND_RESET_I(32);
    __PVT__core0__DOT__core0__DOT__MEMWB_preg_aluout = VL_RAND_RESET_I(32);
    __PVT__core0__DOT__core0__DOT__MEMWB_preg_imm = VL_RAND_RESET_I(32);
    __PVT__core0__DOT__core0__DOT__MEMWB_preg_csr_addr = VL_RAND_RESET_I(12);
    __PVT__core0__DOT__core0__DOT__MEMWB_preg_wb = VL_RAND_RESET_I(7);
    __PVT__core0__DOT__core0__DOT__MEMWB_preg_mret = VL_RAND_RESET_I(1);
    __PVT__core0__DOT__core0__DOT__MEMWB_preg_misaligned = VL_RAND_RESET_I(1);
    __PVT__core0__DOT__core0__DOT__mux_o_WB = VL_RAND_RESET_I(32);
    __PVT__core0__DOT__core0__DOT__csr_stall = VL_RAND_RESET_I(1);
    __PVT__core0__DOT__core0__DOT__csr_pc_input = VL_RAND_RESET_I(32);
    __PVT__core0__DOT__core0__DOT__csr_reg_out = VL_RAND_RESET_I(32);
    __PVT__core0__DOT__core0__DOT__i = VL_RAND_RESET_I(32);
    __PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__STATE = VL_RAND_RESET_I(1);
    __PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus = VL_RAND_RESET_I(32);
    __PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mie = VL_RAND_RESET_I(32);
    __PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip = VL_RAND_RESET_I(32);
    __PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause = VL_RAND_RESET_I(32);
    __PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mtvec = VL_RAND_RESET_I(32);
    __PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mepc = VL_RAND_RESET_I(32);
    __PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mscratch = VL_RAND_RESET_I(32);
    __PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_if_flush = VL_RAND_RESET_I(1);
    __PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_id_flush = VL_RAND_RESET_I(1);
    __PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_ex_flush = VL_RAND_RESET_I(1);
    __PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_mem_flush = VL_RAND_RESET_I(1);
    __PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__fast_irq_index = VL_RAND_RESET_I(5);
    __PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__PE_valid = VL_RAND_RESET_I(1);
    __PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__pending_exception = VL_RAND_RESET_I(1);
    __PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__masked_irq = VL_RAND_RESET_I(32);
    __PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__i = VL_RAND_RESET_I(32);
    __PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status = VL_RAND_RESET_I(6);
    __PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start = VL_RAND_RESET_I(1);
    __PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_rdy = VL_RAND_RESET_I(1);
    __PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en = VL_RAND_RESET_I(1);
    __PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en = VL_RAND_RESET_I(1);
    __PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel = VL_RAND_RESET_I(1);
    __PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel = VL_RAND_RESET_I(1);
    __PVT__core0__DOT__core0__DOT__MULDIV__DOT__fastres = VL_RAND_RESET_I(32);
    __PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB = VL_RAND_RESET_Q(64);
    __PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv = VL_RAND_RESET_Q(64);
    __PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__current_state = VL_RAND_RESET_I(3);
    __PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state = VL_RAND_RESET_I(3);
    __PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__mux_fastres_sel_temp = VL_RAND_RESET_I(1);
    __PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_in__DOT__A_s = VL_RAND_RESET_I(32);
    __PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_in__DOT__B_s = VL_RAND_RESET_I(32);
    __PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_in__DOT__A0 = VL_RAND_RESET_I(1);
    __PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_in__DOT__B0 = VL_RAND_RESET_I(1);
    __PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_in__DOT__A1 = VL_RAND_RESET_I(1);
    __PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_in__DOT__B1 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A[__Vi0] = VL_RAND_RESET_I(8);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B[__Vi0] = VL_RAND_RESET_I(8);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHHs2[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHLs2[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLHs2[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLLs2[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg[__Vi0] = VL_RAND_RESET_I(16);
    }}
    __PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__mux_A_sel = VL_RAND_RESET_I(5);
    __PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__mux_Rin_sel = VL_RAND_RESET_I(1);
    __PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_Rin_en = VL_RAND_RESET_I(1);
    __PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_Q_en = VL_RAND_RESET_I(1);
    __PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_R = VL_RAND_RESET_I(32);
    __PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_Q = VL_RAND_RESET_I(32);
    __PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__current_state = VL_RAND_RESET_I(1);
    __PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__next_state = VL_RAND_RESET_I(1);
    __PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__round_count = VL_RAND_RESET_I(5);
    __PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__start_count = VL_RAND_RESET_I(1);
    __PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__rdy_b4_delay = VL_RAND_RESET_I(1);
    core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_block__DOT____Vcellinp__row_0____pinNumber1 = VL_RAND_RESET_I(32);
    __PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_block__DOT__row_0__DOT__r_temp = VL_RAND_RESET_Q(33);
    __PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULout__DOT__P_s = VL_RAND_RESET_Q(64);
    __PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULout__DOT__signs = VL_RAND_RESET_I(2);
    __PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIVout__DOT__signs = VL_RAND_RESET_I(2);
    __PVT__core0__DOT__core0__DOT__LS_UNIT__DOT__addr_i_reg = VL_RAND_RESET_I(32);
    __PVT__mtime_regs__DOT__mtime = VL_RAND_RESET_Q(64);
    __PVT__mtime_regs__DOT__mtimecmp = VL_RAND_RESET_Q(64);
    __PVT__mtime_regs__DOT__rst = VL_RAND_RESET_I(1);
    __PVT__mtime_regs__DOT__stb = VL_RAND_RESET_I(1);
    __PVT__mtime_regs__DOT__we = VL_RAND_RESET_I(1);
    __PVT__mtime_regs__DOT__sel = VL_RAND_RESET_I(4);
    __PVT__mtime_regs__DOT__adr = VL_RAND_RESET_I(32);
    __PVT__mtime_regs__DOT__dat = VL_RAND_RESET_I(32);
    __PVT__debug_if__DOT__ack = VL_RAND_RESET_I(1);
    __Vtableidx1 = 0;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[0] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[1] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[2] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[3] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[4] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[5] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[6] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[7] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[8] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[9] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[10] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[11] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[12] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[13] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[14] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[15] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[16] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[17] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[18] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[19] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[20] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[21] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[22] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[23] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[24] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[25] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[26] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[27] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[28] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[29] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[30] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[31] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[32] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[33] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[34] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[35] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[36] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[37] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[38] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[39] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[40] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[41] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[42] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[43] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[44] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[45] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[46] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[47] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[48] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[49] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[50] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[51] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[52] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[53] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[54] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[55] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[56] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[57] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[58] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[59] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[60] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[61] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[62] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[63] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[64] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[65] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[66] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[67] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[68] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[69] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[70] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[71] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[72] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[73] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[74] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[75] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[76] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[77] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[78] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[79] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[80] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[81] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[82] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[83] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[84] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[85] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[86] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[87] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[88] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[89] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[90] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[91] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[92] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[93] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[94] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[95] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[96] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[97] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[98] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[99] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[100] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[101] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[102] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[103] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[104] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[105] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[106] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[107] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[108] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[109] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[110] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[111] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[112] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[113] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[114] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[115] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[116] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[117] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[118] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[119] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[120] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[121] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[122] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[123] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[124] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[125] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[126] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[127] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[0] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[1] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[2] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[3] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[4] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[5] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[6] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[7] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[8] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[9] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[10] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[11] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[12] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[13] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[14] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[15] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[16] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[17] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[18] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[19] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[20] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[21] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[22] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[23] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[24] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[25] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[26] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[27] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[28] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[29] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[30] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[31] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[32] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[33] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[34] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[35] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[36] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[37] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[38] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[39] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[40] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[41] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[42] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[43] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[44] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[45] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[46] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[47] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[48] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[49] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[50] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[51] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[52] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[53] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[54] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[55] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[56] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[57] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[58] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[59] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[60] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[61] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[62] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[63] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[64] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[65] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[66] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[67] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[68] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[69] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[70] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[71] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[72] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[73] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[74] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[75] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[76] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[77] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[78] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[79] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[80] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[81] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[82] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[83] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[84] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[85] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[86] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[87] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[88] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[89] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[90] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[91] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[92] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[93] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[94] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[95] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[96] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[97] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[98] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[99] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[100] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[101] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[102] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[103] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[104] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[105] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[106] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[107] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[108] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[109] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[110] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[111] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[112] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[113] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[114] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[115] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[116] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[117] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[118] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[119] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[120] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[121] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[122] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[123] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[124] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[125] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[126] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[127] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[0] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[1] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[2] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[3] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[4] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[5] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[6] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[7] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[8] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[9] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[10] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[11] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[12] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[13] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[14] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[15] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[16] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[17] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[18] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[19] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[20] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[21] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[22] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[23] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[24] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[25] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[26] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[27] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[28] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[29] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[30] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[31] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[32] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[33] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[34] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[35] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[36] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[37] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[38] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[39] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[40] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[41] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[42] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[43] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[44] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[45] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[46] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[47] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[48] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[49] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[50] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[51] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[52] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[53] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[54] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[55] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[56] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[57] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[58] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[59] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[60] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[61] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[62] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[63] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[64] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[65] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[66] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[67] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[68] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[69] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[70] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[71] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[72] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[73] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[74] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[75] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[76] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[77] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[78] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[79] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[80] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[81] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[82] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[83] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[84] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[85] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[86] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[87] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[88] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[89] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[90] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[91] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[92] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[93] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[94] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[95] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[96] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[97] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[98] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[99] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[100] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[101] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[102] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[103] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[104] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[105] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[106] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[107] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[108] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[109] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[110] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[111] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[112] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[113] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[114] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[115] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[116] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[117] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[118] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[119] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[120] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[121] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[122] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[123] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[124] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[125] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[126] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[127] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[0] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[1] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[2] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[3] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[4] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[5] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[6] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[7] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[8] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[9] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[10] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[11] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[12] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[13] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[14] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[15] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[16] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[17] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[18] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[19] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[20] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[21] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[22] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[23] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[24] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[25] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[26] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[27] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[28] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[29] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[30] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[31] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[32] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[33] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[34] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[35] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[36] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[37] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[38] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[39] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[40] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[41] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[42] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[43] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[44] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[45] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[46] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[47] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[48] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[49] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[50] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[51] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[52] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[53] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[54] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[55] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[56] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[57] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[58] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[59] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[60] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[61] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[62] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[63] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[64] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[65] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[66] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[67] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[68] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[69] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[70] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[71] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[72] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[73] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[74] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[75] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[76] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[77] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[78] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[79] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[80] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[81] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[82] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[83] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[84] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[85] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[86] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[87] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[88] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[89] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[90] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[91] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[92] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[93] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[94] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[95] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[96] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[97] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[98] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[99] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[100] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[101] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[102] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[103] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[104] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[105] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[106] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[107] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[108] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[109] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[110] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[111] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[112] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[113] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[114] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[115] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[116] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[117] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[118] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[119] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[120] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[121] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[122] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[123] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[124] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[125] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[126] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[127] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[0] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[1] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[2] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[3] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[4] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[5] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[6] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[7] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[8] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[9] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[10] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[11] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[12] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[13] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[14] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[15] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[16] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[17] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[18] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[19] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[20] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[21] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[22] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[23] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[24] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[25] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[26] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[27] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[28] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[29] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[30] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[31] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[32] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[33] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[34] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[35] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[36] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[37] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[38] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[39] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[40] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[41] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[42] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[43] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[44] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[45] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[46] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[47] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[48] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[49] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[50] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[51] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[52] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[53] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[54] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[55] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[56] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[57] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[58] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[59] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[60] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[61] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[62] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[63] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[64] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[65] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[66] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[67] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[68] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[69] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[70] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[71] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[72] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[73] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[74] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[75] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[76] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[77] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[78] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[79] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[80] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[81] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[82] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[83] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[84] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[85] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[86] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[87] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[88] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[89] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[90] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[91] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[92] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[93] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[94] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[95] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[96] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[97] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[98] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[99] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[100] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[101] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[102] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[103] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[104] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[105] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[106] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[107] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[108] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[109] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[110] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[111] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[112] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[113] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[114] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[115] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[116] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[117] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[118] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[119] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[120] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[121] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[122] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[123] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[124] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[125] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[126] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[127] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[0] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[1] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[2] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[3] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[4] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[5] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[6] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[7] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[8] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[9] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[10] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[11] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[12] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[13] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[14] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[15] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[16] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[17] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[18] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[19] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[20] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[21] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[22] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[23] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[24] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[25] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[26] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[27] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[28] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[29] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[30] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[31] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[32] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[33] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[34] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[35] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[36] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[37] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[38] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[39] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[40] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[41] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[42] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[43] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[44] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[45] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[46] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[47] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[48] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[49] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[50] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[51] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[52] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[53] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[54] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[55] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[56] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[57] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[58] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[59] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[60] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[61] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[62] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[63] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[64] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[65] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[66] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[67] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[68] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[69] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[70] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[71] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[72] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[73] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[74] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[75] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[76] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[77] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[78] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[79] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[80] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[81] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[82] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[83] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[84] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[85] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[86] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[87] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[88] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[89] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[90] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[91] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[92] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[93] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[94] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[95] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[96] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[97] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[98] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[99] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[100] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[101] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[102] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[103] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[104] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[105] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[106] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[107] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[108] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[109] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[110] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[111] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[112] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[113] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[114] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[115] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[116] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[117] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[118] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[119] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[120] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[121] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[122] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[123] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[124] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[125] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[126] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[127] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[0] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[1] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[2] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[3] = 4U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[4] = 5U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[5] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[6] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[7] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[8] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[9] = 2U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[10] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[11] = 4U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[12] = 5U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[13] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[14] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[15] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[16] = 3U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[17] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[18] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[19] = 4U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[20] = 5U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[21] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[22] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[23] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[24] = 3U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[25] = 2U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[26] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[27] = 4U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[28] = 5U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[29] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[30] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[31] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[32] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[33] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[34] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[35] = 4U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[36] = 5U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[37] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[38] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[39] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[40] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[41] = 2U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[42] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[43] = 4U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[44] = 5U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[45] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[46] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[47] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[48] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[49] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[50] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[51] = 4U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[52] = 5U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[53] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[54] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[55] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[56] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[57] = 2U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[58] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[59] = 4U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[60] = 5U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[61] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[62] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[63] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[64] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[65] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[66] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[67] = 4U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[68] = 5U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[69] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[70] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[71] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[72] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[73] = 2U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[74] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[75] = 4U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[76] = 5U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[77] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[78] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[79] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[80] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[81] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[82] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[83] = 4U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[84] = 5U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[85] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[86] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[87] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[88] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[89] = 2U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[90] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[91] = 4U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[92] = 5U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[93] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[94] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[95] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[96] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[97] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[98] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[99] = 4U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[100] = 5U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[101] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[102] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[103] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[104] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[105] = 2U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[106] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[107] = 4U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[108] = 5U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[109] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[110] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[111] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[112] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[113] = 1U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[114] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[115] = 4U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[116] = 5U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[117] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[118] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[119] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[120] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[121] = 2U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[122] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[123] = 4U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[124] = 5U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[125] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[126] = 0U;
    __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[127] = 0U;
}
