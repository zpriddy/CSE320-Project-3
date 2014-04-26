`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Abdulla Al Braiki
//					Zachary Priddy 
// 
// Create Date:    16:52:31 04/09/2014 
// Design Name: 
// Module Name:    instructionDecoder 
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
module instructionDecoder(ins_in,jump,branch,mem_to_reg,sign_ext,reg_dest,mem_write,alu_src,reg_write,shamt);

	/*********************************************************************
		Using the diagram to declare these variables and their bits size 
	*********************************************************************/
	// Inputs
	input [31:0] ins_in;
	
	// Outputs 
	output jump, branch, mem_to_reg, sign_ext, reg_dest, mem_write, alu_src, reg_write;
	output [4:0] shamt;
	
	// Registers
	reg [5:0] opcode;
	reg [4:0] shamt;
	reg jump, branch, mem_to_reg, sign_ext, reg_dest, mem_write, alu_src, reg_write;
	
	/*********************************************************************
		Starting the decoding process 
	*********************************************************************/
	always @(*) begin
		opcode = ins_in[31:26]; // Identify the opcode using the first 5 bits from instuction
		
		casex(opcode)
			6'b000000:begin // If the opcode indicates Type R
				// The corresponding values for these outputs depends on the opcode type and its operations
				alu_src = 0; //IMM IS NOT SOURCE FOR ALU
				reg_dest = 1; // RD activated
				sign_ext = 0; //NO OVERFLOW
				branch = 0; // NO BRANCH
				jump = 0; // Jump inactivated
				reg_write = 1; //WRITING TO REG
				mem_to_reg = 0; //NOT WRITING FROM MEM TO REG
				shamt = ins_in[10:6]; // specifing the shift amount bits
				mem_write = 0; // No writing to memory
			end
			6'b001X0X:begin //addiu & andi
				alu_src = 1; //IMM value
				reg_dest = 0; //NO RD
				sign_ext = 0; //NO OVERFLOW
				branch = 0; // NO BRANCH
				jump = 0; // Jump inactivated
				reg_write = 1; //WRITING TO REG 
				mem_to_reg = 0; //NOT WRITING FROM MEM TO REG
				shamt = 0;
				mem_write = 0; // No writing to memory
			end
			6'b00010X:begin //bne & beq
				alu_src = 0; //IMM IS NOT SOURCE FOR ALU
				reg_dest = 0; //NO RD
				sign_ext = 1; //OVERFLOW
				branch = 1; // BRANCH
				jump = 0; // Jump inactivated
				reg_write = 0; //NOT WRITING TO REG 
				mem_to_reg = 0; //NOT WRITING FROM MEM TO REG
				shamt = 0;
				mem_write = 0; // No writing to memory
			end
			6'b100011:begin // lw 	
				alu_src = 1; //IMM IS SOURCE FOR ALU
				reg_dest = 0; //NO RD
				sign_ext = 0; //NO OVERFLOW
				branch = 0; // NO BRANCH
				jump = 0; // Jump inactivated
				reg_write = 1; //WRITING TO REG 
				mem_to_reg = 1; //WRITING FROM MEM TO REG
				shamt = 0;
				mem_write = 0; // No writing to memory
			end
			6'b101011:begin // sw 	
				alu_src = 1; //IMM IS SOURCE FOR ALU
				reg_dest = 0; //NO RD
				sign_ext = 0; //NO OVERFLOW
				branch = 0; // NO BRANCH
				jump = 0; // Jump inactivated
				reg_write = 0; //WRITING TO REG 
				mem_to_reg = 0; //WRITING FROM MEM TO REG
				shamt = 0;
				mem_write = 1; // Writing to memory
			end
			6'b000010:begin // jump	
				alu_src = 1; //IMM IS SOURCE FOR ALU
				reg_dest = 0; //NO RD
				sign_ext = 0; //NO OVERFLOW
				branch = 0; // NO BRANCH
				jump = 1; // Jump activated
				reg_write = 0; //WRITING TO REG 
				mem_to_reg = 0; //WRITING FROM MEM TO REG
				shamt = 0;
				mem_write = 0; // No writing to memory
			end
			
			//Some of the variables are do not care, but we specified them
			//	For example reg_dest for sw is DONT CARE, but we put 0.
			
		endcase
	end

endmodule
