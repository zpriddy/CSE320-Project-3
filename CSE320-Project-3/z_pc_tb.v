`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   01:42:24 04/06/2014
// Design Name:   z_pc
// Module Name:   C:/Users/Zachary/Documents/GitHub/CSE320-Project-3/CSE320-Project-3/z_pc_tb.v
// Project Name:  CSE320-Project-3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: z_pc
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module z_pc_tb;

	// Inputs
	reg [31:0] pc;
	reg [31:0] inst;
	reg jump;
	reg branch;
	reg zero;

	// Outputs
	wire [31:0] next_pc;

	// Instantiate the Unit Under Test (UUT)
	z_pc uut (
		.pc(pc), 
		.inst(inst), 
		.jump(jump), 
		.branch(branch), 
		.zero(zero), 
		.next_pc(next_pc)
	);

	initial begin
		// Initialize Inputs
		pc = 0;
		inst = 32'b01010101010101010101010101010101;
		jump = 0;
		branch = 1;
		zero = 1;

		// Wait 100 ns for global reset to finish
		//#100;
        
		// Add stimulus here

	end
      
endmodule

