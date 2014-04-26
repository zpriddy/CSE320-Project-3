`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Abdulla Al Braiki
//					Zachary Priddy
// 
// Create Date:    16:53:50 04/09/2014 
// Design Name: 
// Module Name:    PC 
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
module PC(PC, instr, Zero, Branch, Jump, nextPC);

		//Inputs 
		input wire [31:00] instr, PC;
		input wire Jump, Branch, Zero;
	  
	  //Outputs
	  output reg [31:00] nextPC;             
	 
		// Internal Wires
	  wire [27:00] Jump_target; // 28bit Sign extended Jump target
	  wire [31:00] pcInc, Branch1, branchAdd, jumpAdd, mux1; // internal wires
	  wire select1;

	  assign Jump_target = {instr[25:00],2'b00}; // Sign extended jump target
	  assign select1 = Branch & Zero; // the condition for the first mux (to branch or not)
	  assign pcInc = PC + 32'h00000004; // pcInc = PC+4
	  assign jumpAdd = ((pcInc & 32'hf0000000)|Jump_target<<2); // nextPC after jumping
	  assign branchAdd = (pcInc + (Branch1 << 2)); // nextPC after branching
	  
	  assign mux1 = (select1) ? branchAdd : pcInc; // The first mux (to branch or not)
	  assign Branch1 = (instr[15]) ? {16'hFFFF,instr[15:00]} : {16'h0000,instr[15:00]}; // Sign extended imm value
	  
	  // Find the nextPC value by choosing wether to jump or not
	  //	(using jump condition to direct mux1 or jumpAdd value)
	  always @(Jump, jumpAdd, mux1)
		 begin
					case (Jump)
							  1'b0: nextPC <= mux1;
							  1'b1: nextPC <= jumpAdd;
					endcase
		 end
		 
endmodule
