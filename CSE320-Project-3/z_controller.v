`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:55:49 04/06/2014 
// Design Name: 
// Module Name:    z_controller 
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
module z_controller(inst,pc,rd1,rd2,reg_dest,out,next_pc,mem_write,mem_to_reg,reg_write);

	//Inputs
	input [31:0] inst, pc, rd1, rd2;
	
	//Outputs
	output [31:0] out, next_pc;
	output mem_write, reg_dest, mem_to_reg, reg_write;
	
	wire sig_ext_out, sig_ext_in, jump, branch, alu_sel, zero;
	wire [4:0] shamt;
	reg [31:0] sig_ext_inst, alu_src_data;
	
	z_decoder decoder(inst,jump,branch,mem_to_reg,sig_ext_out,reg_dest,mem_write,alu_sel,reg_write,shamt);
	
	always @(*) begin
		sig_ext_inst = {{16{(((inst[15] & sig_ext_out) ? 16'hFFFF:16'h0000))}},inst[15:0]};
		alu_src_data = alu_sel ? sig_ext_inst:rd2;
	end
	
	z_ALU ALU(out, zero, rd1, alu_src_data, shamt, inst);
	z_pc PC(pc,inst,jump,branch,zero,next_pc);
	
	


endmodule
