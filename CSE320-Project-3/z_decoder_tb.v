`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:20:53 04/06/2014
// Design Name:   z_decoder
// Module Name:   C:/Users/Zachary/Documents/GitHub/CSE320-Project-3/CSE320-Project-3/z_decoder_tb.v
// Project Name:  CSE320-Project-3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: z_decoder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module z_decoder_tb;

	// Inputs
	reg [31:0] ins_in;

	// Outputs
	wire jump;
	wire branch;
	wire mem_to_reg;
	wire sign_ext;
	wire reg_dest;
	wire mem_write;
	wire alu_sel;
	wire reg_write;
	wire [5:0] shamt;

	// Instantiate the Unit Under Test (UUT)
	z_decoder uut (
		.ins_in(ins_in), 
		.jump(jump), 
		.branch(branch), 
		.mem_to_reg(mem_to_reg), 
		.sign_ext(sign_ext), 
		.reg_dest(reg_dest), 
		.mem_write(mem_write), 
		.alu_sel(alu_sel), 
		.reg_write(reg_write), 
		.shamt(shamt)
	);

	initial begin
		// Initialize Inputs
		//ins_in = 0;

		// Wait 100 ns for global reset to finish
		ins_in = 32'b0001_0000_0010_0010_0001_1000_0010_0001;
       
		// Add stimulus here

	end
      
endmodule

