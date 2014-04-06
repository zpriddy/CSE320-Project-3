`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:46:33 03/26/2014 
// Design Name: 
// Module Name:    z_n_csa 
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
module z_n_csa(sum,a,b,c_in);
	parameter k = 8;
	parameter m = 4;
	parameter n = k*m;
	
	
	input [n-1:0] a, b;
	input c_in;
	
	output [n-1:0] sum;
	
	wire [n:0] carry;
	wire [n-1:0] sum_w;
	
	assign carry[0] = c_in;

	genvar j;
	generate
	for(j=0 ; j<k ; j=j+1) begin:adder_2
		z_m_sca_stage CSAM(sum[j*m+3:j*m],carry[j*m+4],a[j*m+3:j*m],b[j*m+3:j*m],carry[j*m]);
		defparam CSAM[j].m=m;
	end
	endgenerate

endmodule
