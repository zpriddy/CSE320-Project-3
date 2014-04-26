`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:57:03 04/09/2014
// Design Name:   PC
// Module Name:   C:/proj3/PC_tb.v
// Project Name:  proj3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: PC
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module PC_tb;

	// Inputs
	reg [31:0] PC;
	reg [31:0] instr;
	reg Zero;
	reg Branch;
	reg Jump;

	// Outputs
	wire [31:0] nextPC;

	// Instantiate the Unit Under Test (UUT)
	PC uut (
		.PC(PC), 
		.instr(instr), 
		.Zero(Zero), 
		.Branch(Branch), 
		.Jump(Jump), 
		.nextPC(nextPC)
	);

	initial begin
		// Initialize the PCSel inputs
		PC = 0;
		instr = 32'b01010101010101010101010101010101;
		Zero = 0;
		Branch = 1;
		Jump = 0;

		// Wait 100 ns for global reset to finish
		#100;
	end
      
endmodule

