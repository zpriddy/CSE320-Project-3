`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:32:13 04/05/2014 
// Design Name: 
// Module Name:    z_decoder 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module z_decoder(ins_in,jump,branch,mem_to_reg,sign_ext,reg_dest,mem_write,alu_sel,reg_write,shamt);

	// Inputs
	input [31:0] ins_in;
	
	// Outputs 
	output jump, branch, mem_to_reg, sign_ext, reg_dest, mem_write, alu_sel, reg_write;
	output [5:0] shamt;
	
	// Registers
	reg [5:0] opcode, shamt;
	
	reg jump, branch, mem_to_reg, sign_ext, reg_dest, mem_write, alu_sel, reg_write;
	
	always @(*) begin
		opcode = ins_in[31:26];
		
		casex(opcode)
			6'b000000:begin //Type R
				alu_sel = 0;
				reg_dest = 1;
				sign_ext = 0;
				branch = 0;
				jump = 0;
				reg_write = 1;
				mem_to_reg = 0;
				shamt = ins_in[10:6];
				mem_write = 0;
			end
			6'b001X0X:begin //addiu & andi
				alu_sel = 1; //IMM val
				reg_dest = 0; //NO RD
				sign_ext = 0; //NO OVERFLOW
				branch = 0;
				jump = 0;
				reg_write = 1; //WRITING TO REG 
				mem_to_reg = 0; //NOT WRITING FROM MEM TO REG
				shamt = 0;
				mem_write = 0;
			end
			6'b00010X:begin //bne & beq
				alu_sel = 0; //IMM IS NOT SOURCE FOR ALU
				reg_dest = 0; //NO RD
				sign_ext = 1; //OVERFLOW
				branch = 1; // BRANCH
				jump = 0;
				reg_write = 0; //NOT WRITING TO REG 
				mem_to_reg = 0; //NOT WRITING FROM MEM TO REG
				shamt = 0;
				mem_write = 0;
			end
			6'b100011:begin // lw 	
				alu_sel = 1; //IMM IS SOURCE FOR ALU
				reg_dest = 0; //NO RD
				sign_ext = 0; //NO OVERFLOW
				branch = 0; // NO BRANCH
				jump = 0;
				reg_write = 1; //WRITING TO REG 
				mem_to_reg = 1; //WRITING FROM MEM TO REG
				mem_write = 0;
			end
			6'b101011:begin // sw 	
				alu_sel = 1; //IMM IS SOURCE FOR ALU
				reg_dest = 0; //NO RD
				sign_ext = 0; //NO OVERFLOW
				branch = 0; // NO BRANCH
				jump = 0;
				reg_write = 0; //WRITING TO REG 
				mem_to_reg = 0; //WRITING FROM MEM TO REG
				shamt = 0;
				mem_write = 1;
			end
			6'b100010:begin // jump	
				alu_sel = 1; //IMM IS SOURCE FOR ALU
				reg_dest = 0; //NO RD
				sign_ext = 0; //NO OVERFLOW
				branch = 0; // NO BRANCH
				jump = 1;
				reg_write = 0; //WRITING TO REG 
				mem_to_reg = 0; //WRITING FROM MEM TO REG
				shamt = 0;
				mem_write = 0;
			end
			
		endcase
	end

endmodule
