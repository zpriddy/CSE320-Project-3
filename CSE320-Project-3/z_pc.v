`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:32:07 04/06/2014 
// Design Name: 
// Module Name:    z_pc 
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
module z_pc(pc,inst,jump,branch,zero,next_pc);

	//Inputs 
	input [31:0] pc, inst;
	input jump,branch,zero;
	
	//Outputs
	output [31:0] next_pc;
	
	reg [31:0] next_pc, pc_inc, jump_add, branch_pre, branch_add, mux_out;
	
	reg sel;
	
	always @(*) begin
		pc_inc = pc + 4;
		jump_add[27:2] = inst[25:0];
		jump_add[31:28] = pc_inc[31:28];
		
		branch_pre = {{16{inst[15]}},inst[15:0]};
		branch_pre = (branch_pre << 2);
		branch_add = pc_inc + branch_pre;
		
		sel = branch && zero;
		
		mux_out = sel ? branch_add:pc_inc;
		next_pc = jump ? jump_add:mux_out;
		
	
	end
	
	


endmodule
