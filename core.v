`include "/home/ytozlu/projects/BASAK/projectDir/yavuz_digital/riscv/top_module/ALU.v"
`include "/home/ytozlu/projects/BASAK/projectDir/yavuz_digital/riscv/top_module/control_unit.v"
`include "/home/ytozlu/projects/BASAK/projectDir/yavuz_digital/riscv/top_module/forwarding_unit.v"
`include "/home/ytozlu/projects/BASAK/projectDir/yavuz_digital/riscv/top_module/hazard_detection_unit.v"
`include "/home/ytozlu/projects/BASAK/projectDir/yavuz_digital/riscv/top_module/imm_decoder.v"
`include "/home/ytozlu/projects/BASAK/projectDir/yavuz_digital/riscv/top_module/csr_unit.v"
`timescale 1ns/1ps

module core(input reset_i, //active-low reset. all write_enable signals are also active-low.
            input clk_i, meip_i, mtip_i,
            input [31:0] instr_i,
            input [31:0] data_i,
	    	
            output [3:0]  wmask0_o,
            output        wen0_o,
            output [31:0] instr_addr_o,
            output [31:0] data_addr_o,
            output [31:0] data_o,
            output irq_ack_o); 
				  

//IF signals------------------------------------------------------------
wire [31:0] muxpc_o, plus4_o; //pc-mux output, pc+4 output.
wire [31:0] addr_cal_o; // address calculation output
wire        muxpc_ctrl; //pc-mux control signal. it is also controls the flush mechanism.
wire        mux1_ctrl_IF, mux4_ctrl_IF;
wire [31:0] irq_addr;
wire [31:0] mepc;
wire [31:0] pc_i; //pc in
reg  [31:0] pc_o; //pc out
wire [31:0] mux_addr_o1, mux_load_o, mux_addr_o2, mux1_o_IF, mux4_o_IF;
wire [31:0] instr_IF;
wire        IFID_preg_wen; //IF/ID pipeline register write enable signal.
//pipeline register
reg [31:0] IFID_preg_instr;
reg [31:0] IFID_preg_pc;
reg IFID_preg_dummy;
//----------------------------------------------------------------------
//ID signals
wire [4:0]   rs1_ID, rs2_ID, rd_ID; //register addresses
wire [31:0]  data1_ID, data2_ID;
wire [14:0]  ctrl_unit_i; //control unit input
wire [29:0]  imm_dec_i; //immediate decoder input
wire [11:0]  csr_addr_ID;
//control unit outputs
wire       ctrl_unit_csr;
wire [3:0] ctrl_unit_alu_func1;
wire [1:0] ctrl_unit_alu_func2;
wire       ctrl_unit_ex_mux5, ctrl_unit_ex_mux6, ctrl_unit_ex_mux7;
wire [1:0] ctrl_unit_ex_mux1, ctrl_unit_ex_mux3;
wire       ctrl_unit_B, ctrl_unit_J;
wire [1:0] ctrl_unit_mem_len;
wire       ctrl_unit_mem_wen, ctrl_unit_wb_rf_wen, ctrl_unit_wb_csr_wen;
wire [1:0] ctrl_unit_wb_mux;
wire       ctrl_unit_wb_sign;

wire [31:0] imm_dec_o, pc_ID; //immediate decoder output, pc value
wire        mux_ctrl_ID; //control signal for all three muxes
wire [6:0]  mux1_o_ID; //WB field
wire [2:0]  mux2_o_ID; //MEM field
wire [14:0] mux3_o_ID; //EX field
//pipeline register
reg [31:0] IDEX_preg_imm;
reg [4:0]  IDEX_preg_rd, IDEX_preg_rs2, IDEX_preg_rs1;
reg [31:0] IDEX_preg_data2, IDEX_preg_data1;
reg [31:0] IDEX_preg_pc;
reg [14:0] IDEX_preg_ex;
reg [2:0]  IDEX_preg_mem;
reg [6:0]  IDEX_preg_wb;
reg [11:0] IDEX_preg_csr_addr;
reg IDEX_preg_dummy;
reg IDEX_preg_mret;

reg [31:0] register_bank [31:0]; //32x32 register file
//----------------------------------------------------------------------
//EX signals------------------------------------------------------------
wire [6:0]  wb_EX;
wire [2:0]  mem_EX;
wire [14:0] ex_EX;
wire [31:0] pc_EX, data1_EX, data2_EX, imm_EX;
wire [4:0]  rs1_EX, rs2_EX, rd_EX;
wire [1:0]  mux1_ctrl_EX, mux2_ctrl_EX, mux3_ctrl_EX, mux4_ctrl_EX;
wire        mux5_ctrl_EX, mux6_ctrl_EX, mux7_ctrl_EX;
wire [31:0] mux1_o_EX, mux2_o_EX, mux3_o_EX, mux4_o_EX, mux5_o_EX, mux6_o_EX, mux7_o_EX;
wire [3:0]  alu_func1;
wire [1:0]  alu_func2;
wire [31:0] aluout_EX, csr_reg_EX;
wire        J, B, L; //jump, branch, load
wire [11:0] csr_addr_EX;
//pipeline register
reg [31:0] EXMEM_preg_imm;
reg [4:0]  EXMEM_preg_rd;
reg [31:0] EXMEM_preg_data2;
reg [31:0] EXMEM_preg_aluout;
reg [31:0] EXMEM_preg_pc;
reg [11:0] EXMEM_preg_csr_addr;
reg [2:0]  EXMEM_preg_mem;
reg [6:0]  EXMEM_preg_wb;
reg EXMEM_preg_dummy;
reg EXMEM_preg_mret;

//----------------------------------------------------------------------
//MEM signals-----------------------------------------------------------
wire [6:0]  wb_MEM;
wire [2:0]  mem_MEM;
wire [31:0] aluout_MEM, data2_MEM;
wire [4:0]  rd_MEM;
wire [31:0] imm_MEM;
wire [31:0] memout_MEM;
wire [31:0] pc_MEM;
wire [11:0] csr_addr_MEM;
//internal nets
wire       wen_MEM;
wire [1:0] ls_length_MEM;
//pipeline register
reg [4:0]  MEMWB_preg_rd;
reg [31:0] MEMWB_preg_memout; //input from memory is assumed to be registered.
reg [31:0] MEMWB_preg_aluout, MEMWB_preg_imm;
reg [11:0] MEMWB_preg_csr_addr;
reg [6:0]  MEMWB_preg_wb;
reg        MEMWB_preg_mret;
//----------------------------------------------------------------------
//WB signals------------------------------------------------------------
wire [4:0]  rd_WB;
wire [6:0]  wb_WB;
wire        l_sign;
wire [1:0]  ls_length_WB;
wire [1:0]  mux_ctrl_WB;
wire        rf_wen_WB, csr_wen_WB;
wire [11:0] csr_addr_WB;
wire [31:0] memout_WB, aluout_WB, imm_WB;
reg [31:0] mux_o_WB;
//----------------------------------------------------------------------
//CSR signals
wire csr_if_flush, csr_id_flush, csr_ex_flush, csr_mem_flush;
wire [31:0] csr_pcin_mux1_o, csr_pcin_mux2_o;
reg [31:0] csr_pc_input;
wire mret_id, mret_wb;
//----------------------------------------------------------------------
assign csr_pcin_mux1_o = IDEX_preg_dummy ? pc_ID : pc_EX;
assign csr_pcin_mux2_o = !EXMEM_preg_dummy & mem_MEM[0] ? pc_MEM : csr_pcin_mux1_o;
assign mret_id = IFID_preg_instr[31:2] == 30'hc08_001c ? 1'b1 : 1'b0;

always @(posedge clk_i or negedge reset_i)
begin
	if(!reset_i)
		csr_pc_input <= 32'b0;
	else
		csr_pc_input <= csr_pcin_mux2_o;
end
//instantiate CSR Unit
csr_unit CSR_UNIT(.clk_i(clk_i), .reset_i(reset_i),
                  .pc_i(csr_pc_input),
                  .csr_r_addr_i(IFID_preg_instr[31:20]),
                  .csr_w_addr_i(csr_addr_WB),
                  .csr_reg_i(imm_WB),
                  .csr_wen_i(csr_wen_WB), .meip_i(meip_i), .mtip_i(mtip_i), .muxpc_ctrl_i(muxpc_ctrl),
                  .mret_id_i(mret_id), .mret_wb_i(MEMWB_preg_mret),

                  .csr_reg_o(csr_reg_EX), .mepc_o(mepc),
                  .irq_addr_o(irq_addr),
                  .mux1_ctrl_o(mux1_ctrl_IF), .mux2_ctrl_o(mux4_ctrl_IF), .ack_o(irq_ack_o),
                  .mem_wen_i(mem_MEM[0]), .ex_dummy_i(IDEX_preg_dummy), .mem_dummy_i(EXMEM_preg_dummy),
                  .csr_if_flush_o(csr_if_flush), .csr_id_flush_o(csr_id_flush), .csr_ex_flush_o(csr_ex_flush), .csr_mem_flush_o(csr_mem_flush));

//IF STAGE---------------------------------------------------------------------------------
assign mux_addr_o1 = IFID_preg_wen ? pc_o : pc_o + 32'd4;
assign mux_addr_o2 = muxpc_ctrl ? mux_addr_o1 : addr_cal_o;
assign mux4_o_IF = mux4_ctrl_IF ? mux_addr_o2 : mux1_o_IF;
assign mux1_o_IF = mux1_ctrl_IF ? mepc : irq_addr;
assign pc_i = reset_i ? mux4_o_IF : 32'h0;
assign instr_addr_o = pc_i;


always @(posedge clk_i or negedge reset_i) 
begin
	if(!reset_i)
	begin
		//reset pc to wherever.
		pc_o <= 32'h0;
		{IFID_preg_pc, IFID_preg_instr} <= 64'h13; //nop instruction addi x0,x0,0
		IFID_preg_dummy <= 1'b0;
	end
	
	else if(!muxpc_ctrl | csr_if_flush) //branch taken. next address comes from the address calculation output.
	begin
		{IFID_preg_pc, IFID_preg_instr} <= 64'h13;
		pc_o <= pc_i;
		IFID_preg_dummy <= 1'b1;
	end
		
	else
	begin
		if(!IFID_preg_wen) //stall the pipe if necessary
		begin
			IFID_preg_instr <= instr_i;	
			IFID_preg_pc <= pc_o;
			IFID_preg_dummy <= 1'b0;
			pc_o <= pc_i;
		end
	end
end
//END IF STAGE-----------------------------------------------------------------------------

//ID STAGE---------------------------------------------------------------------------------
//assign nets
assign rs1_ID       = IFID_preg_instr[19:15];
assign rs2_ID       = IFID_preg_instr[24:20];
assign rd_ID        = IFID_preg_instr[11:7];
assign pc_ID        = IFID_preg_pc;
assign imm_dec_i    = IFID_preg_instr[31:2];
assign ctrl_unit_i  = {IFID_preg_instr[31:25], IFID_preg_instr[14:12], IFID_preg_instr[6:2]};
assign csr_addr_ID  = IFID_preg_instr[31:20];
assign mux1_o_ID    = mux_ctrl_ID ? 7'h0c : {ctrl_unit_wb_mux, ctrl_unit_wb_sign, ctrl_unit_wb_rf_wen, ctrl_unit_wb_csr_wen, ctrl_unit_mem_len};
assign mux2_o_ID    = mux_ctrl_ID ? 3'b1 : {ctrl_unit_mem_len, ctrl_unit_mem_wen};
assign mux3_o_ID    = mux_ctrl_ID ? 15'b0 : {ctrl_unit_B, ctrl_unit_J, ctrl_unit_ex_mux7, ctrl_unit_ex_mux6, ctrl_unit_ex_mux5, ctrl_unit_ex_mux3, ctrl_unit_ex_mux1, ctrl_unit_alu_func2, ctrl_unit_alu_func1};

control_unit    CTRL_UNIT   (.control_i(ctrl_unit_i),
                             .ALU_func1(ctrl_unit_alu_func1),
                             .ALU_func2(ctrl_unit_alu_func2),
                             .EX_mux5(ctrl_unit_ex_mux5), .EX_mux6(ctrl_unit_ex_mux6), .EX_mux7(ctrl_unit_ex_mux7),
                             .EX_mux1(ctrl_unit_ex_mux1), .EX_mux3(ctrl_unit_ex_mux3),
                             .B(ctrl_unit_B), .J(ctrl_unit_J),
                             .MEM_len(ctrl_unit_mem_len),
                             .MEM_wen(ctrl_unit_mem_wen), .WB_rf_wen(ctrl_unit_wb_rf_wen), .WB_csr_wen(ctrl_unit_wb_csr_wen),
                             .WB_mux(ctrl_unit_wb_mux),
                             .WB_sign(ctrl_unit_wb_sign));
                             
imm_decoder     IMM_DEC   	(.instr_in(imm_dec_i), .imm_out(imm_dec_o));

integer i;
always @(negedge clk_i or negedge reset_i) //write to register file
begin
	if(!reset_i)
	begin
		for(i=0; i < 32; i = i+1)
			register_bank[i] <= 32'b0; //reset all registers to 0.
	end
	
	else if(!rf_wen_WB)
		register_bank[rd_WB] <= mux_o_WB;	
end


always @(posedge clk_i or negedge reset_i) 
begin
	if(!reset_i)
	begin
		{IDEX_preg_wb, IDEX_preg_mem, IDEX_preg_csr_addr, IDEX_preg_ex, IDEX_preg_pc, IDEX_preg_data1, IDEX_preg_data2, IDEX_preg_rs1, IDEX_preg_rs2, IDEX_preg_rd, IDEX_preg_imm}  <= {7'h0c,3'b1,170'b0};
		IDEX_preg_dummy <= 1'b0;
		IDEX_preg_mret <= 1'b0;
	end
		
	else if(!muxpc_ctrl | csr_id_flush) //flush the pipe
	begin
		{IDEX_preg_wb, IDEX_preg_mem, IDEX_preg_csr_addr, IDEX_preg_ex, IDEX_preg_pc, IDEX_preg_data1, IDEX_preg_data2, IDEX_preg_rs1, IDEX_preg_rs2, IDEX_preg_rd, IDEX_preg_imm}  <= {7'h0c,3'b1,170'b0};
		IDEX_preg_dummy <= 1'b1;
		IDEX_preg_mret <= 1'b0;
	end
	
	else
	begin
		IDEX_preg_imm <= imm_dec_o;
		IDEX_preg_rd  <= rd_ID;
		IDEX_preg_rs2 <= rs2_ID;
		IDEX_preg_rs1 <= rs1_ID;
		IDEX_preg_pc  <= pc_ID;
		IDEX_preg_ex  <= mux3_o_ID;
		IDEX_preg_mem <= mux2_o_ID;
		IDEX_preg_wb  <= mux1_o_ID;
		IDEX_preg_csr_addr <= csr_addr_ID;
		IDEX_preg_mret <= mret_id;
		
		if(!IFID_preg_wen)
			IDEX_preg_dummy <= IFID_preg_dummy;
		else
			IDEX_preg_dummy <= 1'b1;
		
		if(rs1_ID == 5'b0)
			IDEX_preg_data1 <= 32'b0;
		else
			IDEX_preg_data1 <= register_bank[rs1_ID];
		
		if(rs2_ID == 5'b0)
			IDEX_preg_data2 <= 32'b0;
		else
			IDEX_preg_data2 <= register_bank[rs2_ID];
	end	
end

//END ID STAGE-----------------------------------------------------------------------------

//EX STAGE---------------------------------------------------------------------------------
hazard_detection_unit HZRD_DET_UNIT (.rs1(rs1_ID), .rs2(rs2_ID), .idex_rd(rd_EX), .idex_mem(L), .id_mux(mux_ctrl_ID), .ifid_write_en(IFID_preg_wen));

//assign fields
assign wb_EX    = IDEX_preg_wb;
assign mem_EX   = IDEX_preg_mem;
assign ex_EX    = IDEX_preg_ex;
assign pc_EX    = IDEX_preg_pc;
assign data1_EX = IDEX_preg_data1;
assign data2_EX = IDEX_preg_data2;
assign rs1_EX   = IDEX_preg_rs1; 
assign rs2_EX   = IDEX_preg_rs2;
assign rd_EX    = IDEX_preg_rd;
assign imm_EX   = IDEX_preg_imm;
assign csr_addr_EX = IDEX_preg_csr_addr;
//assign nets
assign alu_func1    = ex_EX[3:0];
assign alu_func2    = ex_EX[5:4];
assign mux1_ctrl_EX = ex_EX[7:6];
assign mux3_ctrl_EX = ex_EX[9:8];
assign mux5_ctrl_EX = ex_EX[10];
assign mux6_ctrl_EX = ex_EX[11];
assign mux7_ctrl_EX = ex_EX[12];
assign J            = ex_EX[13]; //jump
assign B            = ex_EX[14]; //branch
assign L            = (!wb_EX[3] & wb_EX[6:5] == 2'b1) ? 1'b1 : 1'b0; //load
//muxes
assign mux1_o_EX = mux1_ctrl_EX == 2'b10 ? csr_reg_EX
                 : mux1_ctrl_EX == 2'b01 ? pc_EX 
                 : mux2_o_EX;
                 
assign mux2_o_EX = mux2_ctrl_EX == 2'b10 ? aluout_MEM
                 : mux2_ctrl_EX == 2'b01 ? mux_o_WB
                 : data1_EX;
				 
assign mux3_o_EX = mux3_ctrl_EX == 2'b10 ? csr_reg_EX
                 : mux3_ctrl_EX == 2'b01 ? imm_EX 
                 : mux4_o_EX;
                 
assign mux4_o_EX = mux4_ctrl_EX == 2'b10 ? data2_EX 
                 : mux4_ctrl_EX == 2'b01 ? mux_o_WB 
                 : aluout_MEM;
				 
assign mux5_o_EX = mux5_ctrl_EX ? pc_EX	 : mux2_o_EX;
assign mux6_o_EX = mux6_ctrl_EX ? csr_reg_EX : aluout_EX;
assign mux7_o_EX = mux7_ctrl_EX ? imm_EX : aluout_EX;


//instantiate the forwarding unit.
forwarding_unit FWD_UNIT(.rs1(rs1_EX), .rs2(rs2_EX), .exmem_rd(rd_MEM), .memwb_rd(rd_WB), .exmem_wb(wb_MEM[3]), .memwb_wb(rf_wen_WB), .mux1_ctrl(mux2_ctrl_EX), .mux2_ctrl(mux4_ctrl_EX));
//instantiate the ALU
ALU ALU (.src1(mux1_o_EX), .src2(mux3_o_EX), .func1(alu_func1), .func2(alu_func2), .alu_out(aluout_EX));

//branch logic and address calculation
assign muxpc_ctrl  = ~(J | (B & aluout_EX[0]));
assign addr_cal_o  = mux5_o_EX + imm_EX;

//inputs to memory
assign wen_MEM     = mem_EX[0];
assign ls_length_MEM   = mem_EX[2:1];
assign data_addr_o = aluout_EX;
assign data_o	   = mux4_o_EX;
assign wen0_o      = wen_MEM;
assign wmask0_o    = ls_length_MEM == 2'b0 ? 4'b0001
                   : ls_length_MEM == 2'b1 ? 4'b0011
                   : 4'b1111;

always @(posedge clk_i or negedge reset_i) //clock the outputs to the pipeline register
begin
	if(!reset_i)
	begin
		{EXMEM_preg_wb, EXMEM_preg_mem, EXMEM_preg_csr_addr, EXMEM_preg_pc, EXMEM_preg_aluout, EXMEM_preg_data2, EXMEM_preg_rd, EXMEM_preg_imm} <= {7'h0c,3'b1,145'b0};
		EXMEM_preg_dummy <= 1'b0;
		EXMEM_preg_mret <= 1'b0;
	end
		
	else if(csr_ex_flush)
	begin
		{EXMEM_preg_wb, EXMEM_preg_mem, EXMEM_preg_csr_addr, EXMEM_preg_pc, EXMEM_preg_aluout, EXMEM_preg_data2, EXMEM_preg_rd, EXMEM_preg_imm} <= {7'h0c,3'b1,145'b0};
		EXMEM_preg_dummy <= 1'b1;
		EXMEM_preg_mret <= 1'b0;
	end

	else
	begin
		EXMEM_preg_imm    <= mux7_o_EX;
		EXMEM_preg_rd     <= rd_EX;
		EXMEM_preg_pc     <= pc_EX;
		EXMEM_preg_data2  <= mux4_o_EX;
		EXMEM_preg_aluout <= mux6_o_EX;
		EXMEM_preg_mem    <= mem_EX;
		EXMEM_preg_wb     <= wb_EX;
		EXMEM_preg_csr_addr <= csr_addr_EX;
		EXMEM_preg_dummy <= IDEX_preg_dummy;
		EXMEM_preg_mret <= IDEX_preg_mret;
		
	end
end 

//END EX STAGE-----------------------------------------------------------------------------

//MEM STAGE---------------------------------------------------------------------------------
//assign fields
assign wb_MEM 	  = EXMEM_preg_wb;
assign mem_MEM 	  = EXMEM_preg_mem;
assign aluout_MEM = EXMEM_preg_aluout;
assign data2_MEM  = EXMEM_preg_data2;
assign rd_MEM 	  = EXMEM_preg_rd;
assign pc_MEM     = EXMEM_preg_pc;
assign imm_MEM 	  = EXMEM_preg_imm;
assign csr_addr_MEM = EXMEM_preg_csr_addr;

always @(posedge clk_i or negedge reset_i)
begin
	if(!reset_i)
	begin
		{MEMWB_preg_wb, MEMWB_preg_csr_addr, MEMWB_preg_rd, MEMWB_preg_memout, MEMWB_preg_aluout, MEMWB_preg_imm} <= {7'h0c, 113'b0}; //reset pipeline register
		MEMWB_preg_mret <= 1'b0;
	end
		
	else if(csr_mem_flush)
	begin
		{MEMWB_preg_wb, MEMWB_preg_csr_addr, MEMWB_preg_rd, MEMWB_preg_memout, MEMWB_preg_aluout, MEMWB_preg_imm} <= {7'h0c, 113'b0};
		MEMWB_preg_mret <= 1'b0;
	end
	
	else
	begin
		MEMWB_preg_wb <= wb_MEM;
		MEMWB_preg_rd <= rd_MEM;
		MEMWB_preg_csr_addr <= csr_addr_MEM;
		MEMWB_preg_imm <= imm_MEM;
		MEMWB_preg_aluout <= aluout_MEM;
		MEMWB_preg_memout <= data_i;
		MEMWB_preg_imm <= imm_MEM;
		MEMWB_preg_mret <= EXMEM_preg_mret;
	end
end


//END MEM STAGE-----------------------------------------------------------------------------
//WB STAGE---------------------------------------------------------------------------------
//assign fields
assign wb_WB 	   = MEMWB_preg_wb;
assign memout_WB   = MEMWB_preg_memout;
assign rd_WB 	   = MEMWB_preg_rd;
assign csr_addr_WB = MEMWB_preg_csr_addr;
assign imm_WB      = MEMWB_preg_imm;
assign aluout_WB   = MEMWB_preg_aluout;
//assign nets
assign ls_length_WB  = wb_WB[1:0];
assign csr_wen_WB = wb_WB[2];
assign rf_wen_WB  = wb_WB[3];
assign l_sign     = wb_WB[4];
assign mux_ctrl_WB = wb_WB[6:5];

//wb mux
always @(*)
begin
	if(!reset_i)
		mux_o_WB <= 32'b0;
		
	else if(mux_ctrl_WB == 2'b0)
		mux_o_WB <= aluout_WB;
			
	else if(mux_ctrl_WB == 2'b1) //load instruction
	begin
		if(ls_length_WB == 2'b0)
		begin
			if(l_sign == 2'b1) //signed load, perform sign extension
				mux_o_WB <= { {24{memout_WB[7]}}, memout_WB[7:0] };
			else
				mux_o_WB <= { 24'b0, memout_WB[7:0] };
		end
		else if(ls_length_WB == 2'b1)
		begin
			if(l_sign == 2'b1) //signed load, perform sign extension
				mux_o_WB <= { {16{memout_WB[15]}}, memout_WB[15:0] };
			else
				mux_o_WB <= { 16'b0, memout_WB[15:0] };			
		end
		else
			mux_o_WB <= { memout_WB };	
		end
	
	else
		mux_o_WB <= imm_WB;
	
end

//END WB STAGE-----------------------------------------------------------------------------
endmodule
