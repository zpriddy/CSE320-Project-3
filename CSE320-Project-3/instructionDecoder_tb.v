`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:00:11 04/09/2014
// Design Name:   instructionDecoder
// Module Name:   C:/proj3/instructionDecoder_tb.v
// Project Name:  proj3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: instructionDecoder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module instructionDecoder_tb;

	// Inputs
	reg [31:0] ins_in;

	// Outputs
	wire jump;
	wire branch;
	wire mem_to_reg;
	wire sign_ext;
	wire reg_dest;
	wire mem_write;
	wire alu_src;
	wire reg_write;
	wire [4:0] shamt;

	// Instantiate the Unit Under Test (UUT)
	instructionDecoder uut (
		.ins_in(ins_in), 
		.jump(jump), 
		.branch(branch), 
		.mem_to_reg(mem_to_reg), 
		.sign_ext(sign_ext), 
		.reg_dest(reg_dest), 
		.mem_write(mem_write), 
		.alu_src(alu_src), 
		.reg_write(reg_write), 
		.shamt(shamt)
	);

	initial begin
		// Initialize instruction entering the instruction decoder
		ins_in = 32'b0001_0000_0010_0010_0001_1000_0010_0001;

		// Wait 100 ns for global reset to finish
		#100;
	end
      
endmodule

