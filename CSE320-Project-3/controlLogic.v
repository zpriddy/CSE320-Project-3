`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Abdulla Al Braiki
//					Zachary Priddy
// 
// Create Date:    16:55:12 04/09/2014 
// Design Name: 
// Module Name:    controlLogic 
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
module controlLogic(inst,pc,rd1,rd2,reg_dest,out,next_pc,mem_write,mem_to_reg,reg_write);

	//Inputs
	input [31:0] inst, pc, rd1, rd2;
	
	//Outputs
	output [31:0] out, next_pc;
	output mem_write, reg_dest, mem_to_reg, reg_write;
	
	// internal signals (shows connection between different modules as shown in the manual)
	wire sig_ext_out, jump, branch, alu_src_temp, zero;
	wire [4:0] shamt;
	reg [31:0] sig_ext_inst, alu_src_data;
	
	// Instruction Decoder instantiation
	instructionDecoder decoder(inst,jump,branch,mem_to_reg,sig_ext_out,reg_dest,mem_write,alu_src_temp,reg_write,shamt);
	
	// find the ALUSrcData for the ALU by processing the two muxes inside control logic
	always @(*) begin
		sig_ext_inst = (sig_ext_out & inst[15])? {16'hFFFF,inst[15:0]} : {16'h0000,inst[15:0]};
		alu_src_data = alu_src_temp ? sig_ext_inst:rd2;
	end
	
	// ALU instantiation
	ALU ALU(inst, rd1, alu_src_data, shamt, out, zero);
	// PC Selector instantiation
	PC PC(pc, inst, zero, branch, jump, next_pc);

endmodule
