`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:26:40 03/25/2014
// Design Name:   z_ALU
// Module Name:   C:/Users/Zachary/Documents/GitHub/CSE320-Project-2/CSE320-Project-2/z_ALU_tb.v
// Project Name:  CSE320-Project-2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: z_ALU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module z_ALU_tb;

	// Inputs
	reg [31:0] a_in;
	reg [31:0] b_in;
	reg [4:0] shamt_in;
	reg [31:0] ins_in;

	// Outputs
	wire [31:0] out;
	wire zero;

	// Instantiate the Unit Under Test (UUT)
	z_ALU uut (
		.out(out), 
		.zero(zero), 
		.a_in(a_in), 
		.b_in(b_in), 
		.shamt_in(shamt_in), 
		.ins_in(ins_in)
	);

	initial begin
		// Initialize Inputs
		a_in = 32'h0FB7AFF0; // This is setting a to 00001111101101111010111111110000
		b_in = 32'hA00D0FF0; // This is setting b to 10100000000011010000111111110000
		shamt_in = 5'b00010; // This is been used by sll and slr to shift 2 bits
		
		/**********************************************************
			Here, we can test the instructions one by one. For
				example, if we want to test subu instruction, we can
				uncomment its line (by taking the // at the begining)
				and comment all other instructions' lines.
		 *********************************************************/
		
			ins_in = 32'b00000011111000001111100000100011; /* subu */
		// ins_in = 32'b00000011111000001111100000100001; /* addu */
		// ins_in = 32'b00000011111000001111100000101111; /* nor */
		// ins_in = 32'b00000011111000001111100000000000; /* sll */
		// ins_in = 32'b00000011111000001111100000000010; /* srl */
		// ins_in = 32'b00100111111000001111100000100011; /* addiu */
		// ins_in = 32'b00110011111000001111100000100011; /* andi */
		// ins_in = 32'b00010011111000001111100000100011; /* beq */
		// ins_in = 32'b00010111111000001111100000100011; /* bne */
		// ins_in = 32'b10001111111000001111100000100011; /* lw */
		// ins_in = 32'b10101111111000001111100000100011; /* sw */

		// Wait 100 ns for global reset to finish
		#100 $finish;
        
		// Add stimulus here

	end
      
endmodule

