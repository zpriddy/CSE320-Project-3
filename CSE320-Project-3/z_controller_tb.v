`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   02:19:11 04/06/2014
// Design Name:   z_controller
// Module Name:   C:/Users/Zachary/Documents/GitHub/CSE320-Project-3/CSE320-Project-3/z_controller_tb.v
// Project Name:  CSE320-Project-3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: z_controller
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module z_controller_tb;

	// Inputs
	reg [31:0] inst;
	reg [31:0] pc;
	reg [31:0] rd1;
	reg [31:0] rd2;

	// Outputs
	wire reg_dest;
	wire [31:0] out;
	wire [31:0] next_pc;
	wire mem_write;
	wire mem_to_reg;
	wire reg_write;

	// Instantiate the Unit Under Test (UUT)
	z_controller uut (
		.inst(inst), 
		.pc(pc), 
		.rd1(rd1), 
		.rd2(rd2), 
		.reg_dest(reg_dest), 
		.out(out), 
		.next_pc(next_pc), 
		.mem_write(mem_write), 
		.mem_to_reg(mem_to_reg), 
		.reg_write(reg_write)
	);

	initial begin
		// Initialize Inputs
		inst = 32'b0000_0000_0010_0010_1001_1000_0010_0001;
		pc = 0;
		rd1 = 0;
		rd2 = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

