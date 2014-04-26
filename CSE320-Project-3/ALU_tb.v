`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:57:49 04/09/2014
// Design Name:   ALU
// Module Name:   C:/proj3/ALU_tb.v
// Project Name:  proj3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ALU_tb;
	// Inputs
	reg [31:0] Instruction;
	reg [31:0] A;
	reg [31:0] B;
	reg [4:0] shamt;
	// Outputs
	wire [31:0] O;
	wire zero;
	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.Instruction(Instruction), 
		.A(A), 
		.B(B), 
		.shamt(shamt), 
		.O(O), 
		.zero(zero)
	);

	initial begin
		// Initialize Inputs
		A = 32'h0FB7AFF0; // This is setting a to 00001111101101111010111111110000
		B = 32'hA00D0FF0; // This is setting b to 10100000000011010000111111110000
		shamt = 4'b0010; // This is been used by sll and slr to shift 2 bits
		
		/**********************************************************
			Here, we can test the instructions one by one. For
				example, if we want to test subu instruction, we can
				uncomment its line (by taking the // at the begining)
				and comment all other instructions' lines.
		 *********************************************************/
		Instruction = 32'b00000011111000001111100000100011; /* subu */
		// Instruction = 32'b00000011111000001111100000100001; /* addu */
		// Instruction = 32'b00000011111000001111100000101111; /* nor */
		// Instruction = 32'b00000011111000001111100000000000; /* sll */
		// Instruction = 32'b00000011111000001111100000000010; /* srl */
		// Instruction = 32'b00100111111000001111100000100011; /* addiu */
		// Instruction = 32'b00110011111000001111100000100011; /* andi */
		// Instruction = 32'b00010011111000001111100000100011; /* beq */
		// Instruction = 32'b00010111111000001111100000100011; /* bne */
		// Instruction = 32'b10001111111000001111100000100011; /* lw */
		// Instruction = 32'b10101111111000001111100000100011; /* sw */

		// Wait 100 ns for global reset to finish
		#100;
	end
endmodule

