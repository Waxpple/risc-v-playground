`timescale 1ns/1ps

//mux input signals
`define data1_EX  2'b0
`define data2_EX  2'b0
`define imm_EX    2'b1
`define pc_EX     2'b1

`define aluout_MEM 2'd0
`define memout_MEM 2'd1
`define imm_MEM    2'd2

module control_unit(input [31:0] instr_i, 

                    output reg [3:0] ALU_func1,
                    output reg [1:0] ALU_func2,
                    output reg EX_mux5, EX_mux6, EX_mux7,
                    output reg [1:0] EX_mux1, EX_mux3,
                    output reg B, J,
                    output reg [1:0] MEM_len,
                    output reg MEM_wen, WB_rf_wen, WB_csr_wen,
                    output reg [1:0] WB_mux,
                    output reg WB_sign,
                    output reg illegal_instr,
                    output     ecall_o, ebreak_o,
                    output     mret_o);

wire [6:0] opcode;
wire [2:0] funct3;
wire [6:0] funct7;
wire mret, ecall, ebreak;
assign opcode = instr_i[6:0];
assign funct3 = instr_i[14:12];
assign funct7 = instr_i[31:25];

always @*
begin
	casez(opcode)
		//BEQ, BNE, BLT, BGE, BLTU, BGEU
		7'b11000_11: 
		begin 
			WB_rf_wen = 1'b1; WB_csr_wen = 1'b1; WB_mux = `aluout_MEM; WB_sign = 1'b0; MEM_len = 2'b0; MEM_wen = 1'b1; ALU_func2 = 2'b0;
			B = 1'b1; J = 1'b0; EX_mux7 = 1'b1; EX_mux6 = 1'b0; EX_mux5 = 1'b1; EX_mux3 = `data2_EX; EX_mux1 = `data1_EX; 
			case(funct3)
				3'b000: ALU_func1 = 4'b1010; //BEQ
				3'b001: ALU_func1 = 4'b1011; //BNE
				3'b100: ALU_func1 = 4'b0110; //BLT
				3'b101: ALU_func1 = 4'b1101; //BGE
				3'b110: ALU_func1 = 4'b0101; //BLTU
				3'b111: ALU_func1 = 4'b1100; //BGEU
				default: ALU_func1 = 4'b0000;
			endcase		
		end
		
		//LUI
		7'b01101_11: 
		begin 
			WB_rf_wen = 1'b0; WB_csr_wen = 1'b1; WB_mux = `aluout_MEM; WB_sign = 1'b0; MEM_len = 2'b0; MEM_wen = 1'b1; ALU_func2 = 2'b1;
			B = 1'b0; J = 1'b0; EX_mux7 = 1'b1; EX_mux6 = 1'b0; EX_mux5 = 1'b0; EX_mux3 = `imm_EX; EX_mux1 = `pc_EX; ALU_func1 = 4'b1111;  
		end
		
		//AUIPC
		7'b00101_11: 
		begin 
			WB_rf_wen = 1'b0; WB_csr_wen = 1'b1; WB_mux = `imm_MEM; WB_sign = 1'b0; MEM_len = 2'b0; MEM_wen = 1'b1; ALU_func2 = 2'b0;
			B = 1'b0; J = 1'b0; EX_mux7 = 1'b1; EX_mux6 = 1'b0; EX_mux5 = 1'b0; EX_mux3 = `imm_EX; EX_mux1 = `pc_EX; ALU_func1 = 4'b0000;  
		end 
		
		//JAL, JALR
		7'b110?1_11: 
		begin
			WB_rf_wen = 1'b0; WB_csr_wen = 1'b1; WB_mux = `aluout_MEM; WB_sign = 1'b0; MEM_len = 2'b0; MEM_wen = 1'b1; ALU_func2 = 2'b0;
			B = 1'b0; J = 1'b1; EX_mux7 = 1'b1; EX_mux6 = 1'b0; EX_mux3 = `data2_EX; EX_mux1 = `pc_EX; ALU_func1 = 4'b1110; 
			case(opcode[3])
				1'b1: EX_mux5 = 1'b1; //JAL
				1'b0: EX_mux5 = 1'b0; //JALR
			endcase			
		end
		
		//LB, LH, LW, LBU, LHU
		7'b00000_11: 
		begin
			WB_rf_wen = 1'b0; WB_csr_wen = 1'b1; WB_mux = `memout_MEM; MEM_wen = 1'b1; ALU_func2 = 2'b0;
			B = 1'b0; J = 1'b0; EX_mux7 = 1'b1; EX_mux6 = 1'b0; EX_mux5 = 1'b0; EX_mux3 = `imm_EX; EX_mux1 = `data1_EX; ALU_func1 = 4'b0000; 
			case(funct3)
				3'b000: begin WB_sign = 1'b1; MEM_len = 2'd0; end //LB 
				3'b001: begin WB_sign = 1'b1; MEM_len = 2'd1; end //LH
				3'b010:	begin WB_sign = 1'b1; MEM_len = 2'd2; end //LW
				3'b100: begin WB_sign = 1'b0; MEM_len = 2'd0; end //LBU
				3'b101: begin WB_sign = 1'b0; MEM_len = 2'd1; end //LHU
				default: begin WB_sign = 1'b0; MEM_len = 2'd0; end
			endcase
		end
		
		//SB, SH, SW
		7'b01000_11: 
		begin 
			WB_rf_wen = 1'b1; WB_csr_wen = 1'b1; WB_mux = `aluout_MEM; WB_sign = 1'b0; MEM_wen = 1'b0; ALU_func2 = 2'b0;
			B = 1'b0; J = 1'b0; EX_mux7 = 1'b1; EX_mux6 = 1'b0; EX_mux5 = 1'b0; EX_mux3 = `imm_EX; EX_mux1 = `data1_EX; ALU_func1 = 4'b0000; 
			case(funct3)
				3'b000: MEM_len = 2'd0; //SB
				3'b001: MEM_len = 2'd1; //SH
				3'b010: MEM_len = 2'd2; //SW
				default: MEM_len = 2'd0;
			endcase
		end
			
		//ADDI, SLTI, SLTIU, XORI, ORI, ANDI, SLLI, SRLI, SRAI, ADD, SUB, SLL, SLT, SLTU, XOR, SRL, SRA, OR, AND
		7'b0?100_11: 
		begin
			WB_rf_wen = 1'b0; WB_csr_wen = 1'b1; WB_mux = `aluout_MEM; WB_sign = 1'b0; MEM_len = 2'b0; MEM_wen = 1'b1; ALU_func2 = 2'b0;
			B = 1'b0; J = 1'b0; EX_mux7 = 1'b1; EX_mux6 = 1'b0; EX_mux5 = 1'b0; EX_mux1 = `data1_EX; 
			
			case(opcode[5]) 
				1'b0: EX_mux3 = `imm_EX;
				1'b1: EX_mux3 = `data2_EX;
			endcase
			
			case(funct3)
				3'b000: 
				begin //ADD, ADDI, SUB
					if(opcode[5]) //see if it is an add or a subtract
						ALU_func1 = {3'b0,funct7[5]}; //ADD, SUB
				 	else
				 		ALU_func1 = 4'b0; //ADDI
				end
				
				3'b001: ALU_func1 = 4'b0111; //SLL, SLLI
				3'b010: ALU_func1 = 4'b0110; //SLT, SLTI
				3'b011: ALU_func1 = 4'b0101; //SLTU, SLTIU
				3'b100: ALU_func1 = 4'b0010; //XOR, XORI				
				3'b101: 
				begin //SRA, SRAI, SRL, SRLI
					if(funct7[5])
						ALU_func1 = 4'b1001; //SRA, SRAI
					else  
						ALU_func1 = 4'b1000; //SRL, SRLI
				end
				
				3'b110: ALU_func1 = 4'b0011; //OR, ORI				
				3'b111:	ALU_func1 = 4'b0100; //AND, ANDI	
			endcase
		end
		
		//CSRRW, CSRRS, CSRRC, CSRRWI, CSRRSI, CSRRCI
		7'b11100_11: 
		begin
			WB_rf_wen = 1'b0; WB_csr_wen = 1'b0; WB_mux = `aluout_MEM; WB_sign = 1'b0; MEM_len = 2'b0; MEM_wen = 1'b1;
			B = 1'b0; J = 1'b0; EX_mux5 = 1'b0; EX_mux6 = 1'b1; 
			
			case(funct3[2])
				1'b0: begin EX_mux1 = `data1_EX; EX_mux3 = 2'd2; EX_mux7 = 1'b0; end //register
				1'b1: begin EX_mux1 = 2'd2; EX_mux3 = `imm_EX; EX_mux7 = 1'b1; end //immediate
			endcase
			
			casez(funct3)
				3'b001: begin ALU_func1 = 4'b1111; ALU_func2 = 2'b00; end //RW
				3'b?10: begin ALU_func1 = 4'b0011; ALU_func2 = 2'b00; end //RS,RSI
				3'b011: begin ALU_func1 = 4'b0100; ALU_func2 = 2'b01; end //RC
				3'b101: begin ALU_func1 = 4'b1111; ALU_func2 = 2'b01; end //RWI
				3'b111: begin ALU_func1 = 4'b0100; ALU_func2 = 2'b10; end //RCI
				default: begin ALU_func1 = 4'b1111; ALU_func2 = 2'b00; end
			endcase
		
		end
		
		default: {ALU_func1,ALU_func2,EX_mux5,EX_mux6,EX_mux7,EX_mux1,EX_mux3,B,J,MEM_len,WB_mux,WB_sign,MEM_wen,WB_rf_wen,WB_csr_wen} = 23'h7;//{8'h1,11'h0,4'h7};// //nop

	endcase
end

assign ecall  = instr_i == 32'h0000_0073;
assign ebreak = instr_i == 32'h0010_0073;
assign mret   = instr_i == 32'h3020_0073;

always @(*)
begin
	casez(opcode)
		//BEQ, BNE, BLT, BGE, BLTU, BGEU
		7'b11000_11: illegal_instr = funct3[2:1] == 2'b01;
		
		//LUI, AUIPC
		7'b0?101_11: illegal_instr = 1'b0;

		//JAL, JALR
		7'b110?1_11: 
		begin
			case(opcode[3])
				1'b1: illegal_instr = 1'b0; //JAL
				1'b0: illegal_instr = funct3 != 3'd0; //JALR
			endcase			
		end
		
		//LB, LH, LW, LBU, LHU
		7'b00000_11: 
		begin
			if(funct3 == 3'd3 || funct3 == 3'd6 || funct3 == 3'd7)
				illegal_instr = 1'b1;
			else
				illegal_instr = 1'b0;
		end
		
		//SB, SH, SW
		7'b01000_11: 
		begin 
			if(funct3 == 3'd0 || funct3 == 3'd1 || funct3 == 3'd2)
				illegal_instr = 1'b0;
			else
				illegal_instr = 1'b1;
		end
			
		//ADDI, SLTI, SLTIU, XORI, ORI, ANDI, SLLI, SRLI, SRAI, ADD, SUB, SLL, SLT, SLTU, XOR, SRL, SRA, OR, AND
		7'b0?100_11: 
		begin
			case(opcode[5])
				1'b1:
				begin
					if(funct3 == 3'd0 || funct3 == 3'd5)
						illegal_instr = {funct7[6],funct7[4:0]} != 6'd0;
					else
						illegal_instr = funct7 != 7'd0;
				end
				
				1'b0:
				begin
					if(funct3 == 3'd1)
						illegal_instr = funct7 != 7'd0;
					
					else if(funct3 == 3'd5)
						illegal_instr = {funct7[6],funct7[4:0]} != 6'd0;
					
					else
						illegal_instr = 1'b0;
				end
			endcase
		end
				
		//CSRRW, CSRRS, CSRRC, CSRRWI, CSRRSI, CSRRCI, EBREAK, ECALL
		7'b11100_11: illegal_instr = !(ecall || ebreak || mret) && (funct3 == 3'b100);
		
		default: illegal_instr = 1'b1;
	endcase
end

assign mret_o = mret;
assign ecall_o = ecall;
assign ebreak_o = ebreak;

endmodule

