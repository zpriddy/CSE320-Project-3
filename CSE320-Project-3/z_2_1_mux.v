`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:48:45 03/26/2014 
// Design Name: 
// Module Name:    z_2_1_mux 
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
module z_2_1_mux(out,a,b,sel);
	output out;
	input a,b,sel;
	
	wire sel_,a1,b1,out;
	
	not not1(sel_,sel);
	and #1 and1(a1,a,sel_);
	and #1 and2(b1,b,sel);
	or or1(out,a1,b1);
	

endmodule
