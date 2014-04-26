`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:01:04 04/09/2014
// Design Name:   controlLogic
// Module Name:   C:/proj3/controlLogic_tb.v
// Project Name:  proj3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: controlLogic
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module controlLogic_tb;

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
	controlLogic uut (
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
		// Initialize the control logic inputs
		inst = 32'b0000_0000_0010_0010_1001_1000_0010_0001; // R type
		pc = 4;
		rd1 = 5;
		rd2 = 2;
		
		#100;// Wait 100 ns for global reset to finish
		
		inst = 32'b0010_0000_0010_0010_1001_1000_0010_0001; // addui - andi
		pc = 12;
		rd1 = 5;
		rd2 = 2;
				
		#100;// Wait 100 ns for global reset to finish
		
		inst = 32'b0001_0000_0010_0010_1001_1000_0010_0001; // bne - beq
		pc = 13;
		rd1 = 5;
		rd2 = 2;
				
		#100;// Wait 100 ns for global reset to finish
		
		inst = 32'b1000_1100_0010_0010_1001_1000_0010_0001; // lw
		pc = 14;
		rd1 = 7;
		rd2 = 2;
				
		#100;// Wait 100 ns for global reset to finish
		
		inst = 32'b1010_1100_0010_0010_1001_1000_0010_0001; // sw
		pc = 20;
		rd1 = 5;
		rd2 = 1;
		
						
		#100;// Wait 100 ns for global reset to finish
		
		inst = 32'b0000_1000_0010_0010_1001_1000_0010_0001; // J type (jump)
		pc = 13;
		rd1 = 3;
		rd2 = 5;
	end
      
endmodule

