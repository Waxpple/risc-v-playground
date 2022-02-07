// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbarebones_wb_top.h for the primary calling header

#ifndef _VBAREBONES_WB_TOP_BAREBONES_WB_TOP_H_
#define _VBAREBONES_WB_TOP_BAREBONES_WB_TOP_H_  // guard

#include "verilated_heavy.h"
#include "Vbarebones_wb_top__Dpi.h"

//==========

class Vbarebones_wb_top__Syms;
class Vbarebones_wb_top_VerilatedVcd;
class Vbarebones_wb_top_memory_2rw_wb__Ab;


//----------

VL_MODULE(Vbarebones_wb_top_barebones_wb_top) {
  public:
    // CELLS
    Vbarebones_wb_top_memory_2rw_wb__Ab* memory;
    
    // PORTS
    VL_IN8(clk_i,0,0);
    VL_IN8(reset_i,0,0);
    VL_IN8(meip_i,0,0);
    VL_OUT8(irq_ack_o,0,0);
    VL_IN16(fast_irq_i,15,0);
    
    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ __PVT__mtime_regs__DOT__rst;
        CData/*0:0*/ __PVT__data_wb_cyc_o;
        CData/*0:0*/ __PVT__inst_wb_rst_i;
        CData/*0:0*/ __PVT__inst_wb_clk_i;
        CData/*3:0*/ __PVT__wb_cyc_i;
        CData/*3:0*/ __PVT__wb_stb_i;
        CData/*3:0*/ __PVT__wb_we_i;
        CData/*3:0*/ __PVT__wb_stall_o;
        CData/*3:0*/ __PVT__wb_ack_o;
        CData/*3:0*/ __PVT__wb_err_o;
        CData/*3:0*/ __PVT__wb_rst_i;
        CData/*3:0*/ __PVT__wb_clk_i;
        CData/*3:0*/ __PVT__r_stb;
        CData/*0:0*/ __PVT__r_data_wb_err_i;
        CData/*0:0*/ __PVT__r_data_wb_stall_i;
        CData/*0:0*/ __PVT__r_data_wb_ack_i;
        CData/*0:0*/ __PVT__valid;
        CData/*3:0*/ __PVT__core0__DOT__data_wmask_o;
        CData/*0:0*/ __PVT__core0__DOT__data_req_o;
        CData/*0:0*/ __PVT__core0__DOT__data_cyc;
        CData/*0:0*/ __PVT__core0__DOT__core0__DOT__IFID_preg_dummy;
        CData/*0:0*/ __PVT__core0__DOT__core0__DOT__stall_ID;
        CData/*3:0*/ __PVT__core0__DOT__core0__DOT__ctrl_unit_alu_func;
        CData/*0:0*/ __PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux1;
        CData/*0:0*/ __PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux3;
        CData/*0:0*/ __PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux5;
        CData/*0:0*/ __PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux7;
        CData/*1:0*/ __PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux6;
        CData/*1:0*/ __PVT__core0__DOT__core0__DOT__ctrl_unit_mem_len;
        CData/*0:0*/ __PVT__core0__DOT__core0__DOT__ctrl_unit_wb_rf_wen;
        CData/*0:0*/ __PVT__core0__DOT__core0__DOT__ctrl_unit_wb_csr_wen;
        CData/*0:0*/ __PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr;
        CData/*6:0*/ __PVT__core0__DOT__core0__DOT__mux1_o_ID;
        CData/*4:0*/ __PVT__core0__DOT__core0__DOT__IDEX_preg_rd;
        CData/*4:0*/ __PVT__core0__DOT__core0__DOT__IDEX_preg_rs2;
        CData/*4:0*/ __PVT__core0__DOT__core0__DOT__IDEX_preg_rs1;
        CData/*2:0*/ __PVT__core0__DOT__core0__DOT__IDEX_preg_mem;
        CData/*6:0*/ __PVT__core0__DOT__core0__DOT__IDEX_preg_wb;
        CData/*0:0*/ __PVT__core0__DOT__core0__DOT__IDEX_preg_dummy;
        CData/*0:0*/ __PVT__core0__DOT__core0__DOT__IDEX_preg_mret;
        CData/*0:0*/ __PVT__core0__DOT__core0__DOT__IDEX_preg_misaligned;
        CData/*0:0*/ __PVT__core0__DOT__core0__DOT__muldiv_done_EX;
        CData/*0:0*/ __PVT__core0__DOT__core0__DOT__muldiv_stall_EX;
        CData/*1:0*/ __PVT__core0__DOT__core0__DOT__mux2_ctrl_EX;
        CData/*1:0*/ __PVT__core0__DOT__core0__DOT__mux4_ctrl_EX;
        CData/*0:0*/ __PVT__core0__DOT__core0__DOT__stall_EX;
        CData/*0:0*/ __PVT__core0__DOT__core0__DOT__L;
        CData/*0:0*/ __PVT__core0__DOT__core0__DOT__misaligned_access;
        CData/*0:0*/ __PVT__core0__DOT__core0__DOT__mem_wen_EX;
        CData/*0:0*/ __PVT__core0__DOT__core0__DOT__instr_addr_misaligned;
        CData/*0:0*/ __PVT__core0__DOT__core0__DOT__hazard_stall;
        CData/*0:0*/ __PVT__core0__DOT__core0__DOT__take_branch;
        CData/*4:0*/ __PVT__core0__DOT__core0__DOT__EXMEM_preg_rd;
        CData/*2:0*/ __PVT__core0__DOT__core0__DOT__EXMEM_preg_mem;
        CData/*6:0*/ __PVT__core0__DOT__core0__DOT__EXMEM_preg_wb;
        CData/*0:0*/ __PVT__core0__DOT__core0__DOT__EXMEM_preg_dummy;
        CData/*0:0*/ __PVT__core0__DOT__core0__DOT__EXMEM_preg_mret;
        CData/*0:0*/ __PVT__core0__DOT__core0__DOT__EXMEM_preg_misaligned;
        CData/*1:0*/ __PVT__core0__DOT__core0__DOT__EXMEM_preg_addr_bits;
        CData/*4:0*/ __PVT__core0__DOT__core0__DOT__MEMWB_preg_rd;
        CData/*6:0*/ __PVT__core0__DOT__core0__DOT__MEMWB_preg_wb;
        CData/*0:0*/ __PVT__core0__DOT__core0__DOT__MEMWB_preg_mret;
        CData/*0:0*/ __PVT__core0__DOT__core0__DOT__MEMWB_preg_misaligned;
        CData/*0:0*/ __PVT__core0__DOT__core0__DOT__csr_stall;
    };
    struct {
        CData/*0:0*/ __PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__STATE;
        CData/*0:0*/ __PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_if_flush;
        CData/*0:0*/ __PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_id_flush;
        CData/*0:0*/ __PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_ex_flush;
        CData/*0:0*/ __PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_mem_flush;
        CData/*4:0*/ __PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__fast_irq_index;
        CData/*0:0*/ __PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__PE_valid;
        CData/*0:0*/ __PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__pending_exception;
        CData/*5:0*/ __PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status;
        CData/*0:0*/ __PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start;
        CData/*0:0*/ __PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_rdy;
        CData/*0:0*/ __PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en;
        CData/*0:0*/ __PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en;
        CData/*0:0*/ __PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel;
        CData/*0:0*/ __PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel;
        CData/*2:0*/ __PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__current_state;
        CData/*2:0*/ __PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state;
        CData/*0:0*/ __PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__mux_fastres_sel_temp;
        CData/*0:0*/ __PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_in__DOT__A0;
        CData/*0:0*/ __PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_in__DOT__B0;
        CData/*0:0*/ __PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_in__DOT__A1;
        CData/*0:0*/ __PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_in__DOT__B1;
        CData/*4:0*/ __PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__mux_A_sel;
        CData/*0:0*/ __PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__mux_Rin_sel;
        CData/*0:0*/ __PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_Rin_en;
        CData/*0:0*/ __PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_Q_en;
        CData/*0:0*/ __PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__current_state;
        CData/*0:0*/ __PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__next_state;
        CData/*4:0*/ __PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__round_count;
        CData/*0:0*/ __PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__start_count;
        CData/*0:0*/ __PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__rdy_b4_delay;
        CData/*1:0*/ __PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULout__DOT__signs;
        CData/*1:0*/ __PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIVout__DOT__signs;
        CData/*0:0*/ __PVT__mtime_regs__DOT__stb;
        CData/*0:0*/ __PVT__mtime_regs__DOT__we;
        CData/*3:0*/ __PVT__mtime_regs__DOT__sel;
        CData/*0:0*/ __PVT__debug_if__DOT__ack;
        SData/*11:0*/ __PVT__core0__DOT__core0__DOT__IDEX_preg_csr_addr;
        SData/*11:0*/ __PVT__core0__DOT__core0__DOT__EXMEM_preg_csr_addr;
        SData/*11:0*/ __PVT__core0__DOT__core0__DOT__MEMWB_preg_csr_addr;
        IData/*31:0*/ __PVT__r_data_wb_dat_i;
        IData/*31:0*/ __PVT__k;
        IData/*31:0*/ __PVT__core0__DOT__data_addr_o;
        IData/*31:0*/ __PVT__core0__DOT__data_o;
        IData/*31:0*/ __PVT__core0__DOT__core0__DOT__pc_i;
        IData/*31:0*/ __PVT__core0__DOT__core0__DOT__pc_o;
        IData/*31:0*/ __PVT__core0__DOT__core0__DOT__IFID_preg_instr;
        IData/*31:0*/ __PVT__core0__DOT__core0__DOT__IFID_preg_pc;
        IData/*31:0*/ __PVT__core0__DOT__core0__DOT__data1_ID;
        IData/*31:0*/ __PVT__core0__DOT__core0__DOT__data2_ID;
        IData/*20:0*/ __PVT__core0__DOT__core0__DOT__mux3_o_ID;
        IData/*31:0*/ __PVT__core0__DOT__core0__DOT__imm_dec_o;
        IData/*31:0*/ __PVT__core0__DOT__core0__DOT__IDEX_preg_imm;
        IData/*31:0*/ __PVT__core0__DOT__core0__DOT__IDEX_preg_data2;
        IData/*31:0*/ __PVT__core0__DOT__core0__DOT__IDEX_preg_data1;
        IData/*31:0*/ __PVT__core0__DOT__core0__DOT__IDEX_preg_pc;
        IData/*20:0*/ __PVT__core0__DOT__core0__DOT__IDEX_preg_ex;
        IData/*31:0*/ __PVT__core0__DOT__core0__DOT__mux1_o_EX;
        IData/*31:0*/ __PVT__core0__DOT__core0__DOT__mux2_o_EX;
        IData/*31:0*/ __PVT__core0__DOT__core0__DOT__mux3_o_EX;
        IData/*31:0*/ __PVT__core0__DOT__core0__DOT__mux4_o_EX;
        IData/*31:0*/ __PVT__core0__DOT__core0__DOT__mux8_o_EX;
        IData/*31:0*/ __PVT__core0__DOT__core0__DOT__aluout_EX;
        IData/*31:0*/ __PVT__core0__DOT__core0__DOT__branch_target_addr;
    };
    struct {
        IData/*31:0*/ __PVT__core0__DOT__core0__DOT__branch_addr_calc;
        IData/*31:0*/ __PVT__core0__DOT__core0__DOT__EXMEM_preg_imm;
        IData/*31:0*/ __PVT__core0__DOT__core0__DOT__EXMEM_preg_data2;
        IData/*31:0*/ __PVT__core0__DOT__core0__DOT__EXMEM_preg_aluout;
        IData/*31:0*/ __PVT__core0__DOT__core0__DOT__EXMEM_preg_pc;
        IData/*31:0*/ __PVT__core0__DOT__core0__DOT__memout_MEM;
        IData/*31:0*/ __PVT__core0__DOT__core0__DOT__memout;
        IData/*31:0*/ __PVT__core0__DOT__core0__DOT__MEMWB_preg_memout;
        IData/*31:0*/ __PVT__core0__DOT__core0__DOT__MEMWB_preg_aluout;
        IData/*31:0*/ __PVT__core0__DOT__core0__DOT__MEMWB_preg_imm;
        IData/*31:0*/ __PVT__core0__DOT__core0__DOT__mux_o_WB;
        IData/*31:0*/ __PVT__core0__DOT__core0__DOT__csr_pc_input;
        IData/*31:0*/ __PVT__core0__DOT__core0__DOT__csr_reg_out;
        IData/*31:0*/ __PVT__core0__DOT__core0__DOT__i;
        IData/*31:0*/ __PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus;
        IData/*31:0*/ __PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mie;
        IData/*31:0*/ __PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip;
        IData/*31:0*/ __PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause;
        IData/*31:0*/ __PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mtvec;
        IData/*31:0*/ __PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mepc;
        IData/*31:0*/ __PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mscratch;
        IData/*31:0*/ __PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__masked_irq;
        IData/*31:0*/ __PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__i;
        IData/*31:0*/ __PVT__core0__DOT__core0__DOT__MULDIV__DOT__fastres;
        IData/*31:0*/ __PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_in__DOT__A_s;
        IData/*31:0*/ __PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_in__DOT__B_s;
        IData/*31:0*/ __PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_R;
        IData/*31:0*/ __PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_Q;
        IData/*31:0*/ __PVT__core0__DOT__core0__DOT__LS_UNIT__DOT__addr_i_reg;
        IData/*31:0*/ __PVT__mtime_regs__DOT__adr;
        IData/*31:0*/ __PVT__mtime_regs__DOT__dat;
        QData/*63:0*/ __PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB;
        QData/*63:0*/ __PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv;
        QData/*32:0*/ __PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_block__DOT__row_0__DOT__r_temp;
        QData/*63:0*/ __PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULout__DOT__P_s;
        QData/*63:0*/ __PVT__mtime_regs__DOT__mtime;
        QData/*63:0*/ __PVT__mtime_regs__DOT__mtimecmp;
        IData/*31:0*/ __PVT__wb_adr_i[4];
        IData/*31:0*/ __PVT__wb_dat_i[4];
        CData/*3:0*/ __PVT__wb_sel_i[4];
        IData/*31:0*/ __PVT__wb_dat_o[4];
        IData/*31:0*/ __PVT__slave_adr_begin[4];
        IData/*31:0*/ __PVT__slave_adr_end[4];
        IData/*31:0*/ __PVT__core0__DOT__core0__DOT__register_bank[32];
        CData/*7:0*/ __PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A[4];
        CData/*7:0*/ __PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B[4];
        SData/*15:0*/ __PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH[4];
        SData/*15:0*/ __PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL[4];
        SData/*15:0*/ __PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH[4];
        SData/*15:0*/ __PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL[4];
        SData/*15:0*/ __PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHHs2[4];
        SData/*15:0*/ __PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHLs2[4];
        SData/*15:0*/ __PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLHs2[4];
        SData/*15:0*/ __PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLLs2[4];
        SData/*15:0*/ __PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg[4];
        SData/*15:0*/ __PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg[4];
        SData/*15:0*/ __PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg[4];
        SData/*15:0*/ __PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg[4];
    };
    
    // LOCAL VARIABLES
    CData/*0:0*/ __Vcellinp__memory__port1_wb_clk_i;
    CData/*0:0*/ __Vcellinp__memory__port1_wb_rst_i;
    CData/*0:0*/ __Vcellinp__memory__port0_wb_clk_i;
    CData/*0:0*/ __Vcellinp__memory__port0_wb_rst_i;
    CData/*0:0*/ __Vcellinp__mtime_regs__wb_clk_i;
    CData/*0:0*/ __Vcellinp__debug_if__wb_clk_i;
    CData/*0:0*/ __Vcellinp__debug_if__wb_rst_i;
    CData/*6:0*/ __Vtableidx1;
    IData/*31:0*/ core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_block__DOT____Vcellinp__row_0____pinNumber1;
    static CData/*0:0*/ __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start[128];
    static CData/*0:0*/ __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en[128];
    static CData/*0:0*/ __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en[128];
    static CData/*0:0*/ __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel[128];
    static CData/*0:0*/ __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel[128];
    static CData/*0:0*/ __Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX[128];
    static CData/*2:0*/ __Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state[128];
    
    // INTERNAL VARIABLES
  private:
    Vbarebones_wb_top__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vbarebones_wb_top_barebones_wb_top);  ///< Copying not allowed
  public:
    Vbarebones_wb_top_barebones_wb_top(const char* name = "TOP");
    ~Vbarebones_wb_top_barebones_wb_top();
    
    // INTERNAL METHODS
    void __Vconfigure(Vbarebones_wb_top__Syms* symsp, bool first);
    static void _combo__TOP__barebones_wb_top__16(Vbarebones_wb_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__barebones_wb_top__3(Vbarebones_wb_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__barebones_wb_top__9(Vbarebones_wb_top__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _multiclk__TOP__barebones_wb_top__10(Vbarebones_wb_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__barebones_wb_top__14(Vbarebones_wb_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__barebones_wb_top__15(Vbarebones_wb_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__barebones_wb_top__11(Vbarebones_wb_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__barebones_wb_top__12(Vbarebones_wb_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__barebones_wb_top__13(Vbarebones_wb_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__barebones_wb_top__2(Vbarebones_wb_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__barebones_wb_top__4(Vbarebones_wb_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__barebones_wb_top__5(Vbarebones_wb_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__barebones_wb_top__6(Vbarebones_wb_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__barebones_wb_top__7(Vbarebones_wb_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__barebones_wb_top__8(Vbarebones_wb_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__barebones_wb_top__1(Vbarebones_wb_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
