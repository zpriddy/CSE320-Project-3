`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Abdulla Al Braiki
//					Zachary Priddy
// 
// Create Date:    16:50:12 04/09/2014 
// Design Name: 
// Module Name:    ALU 
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
module ALU(Instruction, A, B, shamt, O, zero);

	// Inputs
	input [31:0] Instruction, A, B;
	input [4:0] shamt;
	
	// Outputs
	output [31:0] O;
	output zero;
	
	// Declaring the internal wires and a register
	wire [5:0] opcode, funct;
	reg [31:0] O_reg;
	
	// Assigning the wires to their corresponding values (using the manual's diagram)
	assign opcode = Instruction [31:26];
	assign funct = Instruction [5:0];
	
	always @(*)
		begin
			case (opcode)
				6'b000000: begin // R Type
							case(funct)
								6'b100001: O_reg = A + B; //addu
								6'b100011: O_reg = A - B; //subu
								6'b101111: O_reg = ~(A | B); //nor
								6'b000000: O_reg = B << shamt; //sll
								6'b000010: O_reg = B >> shamt; //srl
							endcase
						   end	
				// I Type
				6'b001001: O_reg = A + B; //addiu
				6'b001100: O_reg = A & B; //andi
				6'b000100: O_reg = (A - B); //beq
				6'b000101: O_reg = (A==B); //bne
				6'b100011: O_reg = A + B ; //lw
				6'b101011: O_reg = A + B; //sw
			endcase
		end
	
	// Assigning the outputs
	assign O = O_reg;
	assign zero = ~(|O);
endmodule
