`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:54:00 03/25/2014 
// Design Name: 
// Module Name:    z_ALU 
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
module z_ALU(out, zero, a_in, b_in, shamt_in, ins_in);
	
	// declaring inputs
	input [31:0] a_in, b_in, ins_in;
	input [4:0] shamt_in;
	
	// declaring outputs
	output zero;
	output [31:0] out;
	
	
	// declaring registers
	reg [5:0] opcode, funct;
	reg [4:0] rs, rt, rd, shamt, ins_shmat;
	reg [31:0] out_reg, a, b, inst;
	reg [15:0] imm;
	reg zero_reg;

	
	// declaring wires
	wire [31:0] sum;
	
	// inititializing Adder
	z_n_csa AZ(sum,a,b,1'b0);
	
	
  
	always @(*) begin
		// initializing registers 
		inst = ins_in; 
		a = a_in;
		b = b_in;
		shamt = shamt_in;
		opcode = inst[31:26];
		rs = inst[25:21];
		rt = inst[20:16];
		
		casex(opcode) // Select the registers to be filled
			6'b000000:begin // If R type instruction
				rd = inst[15:11];
				ins_shmat = inst[10:6];
				funct = inst[5:0];
				end
			6'b??????:begin // If I type instruction
				imm = inst[15:0];
				end
		endcase
		
		casex(opcode)
			6'b000000:begin // If R type instruction, then opcode equals 000000
				casex(funct) // Choose the function depending on the funct bits
					6'b100001:begin
						//addu
						out_reg = a+b;//sum;
					end 
					6'b100011:begin
						//sub
					out_reg = a-b;
					end
					6'b101111:begin
						//nor
						out_reg = ~(a|b);
					end
					6'b000000:begin
						//sll
						out_reg = (a << shamt);
					end 
					6'b000010:begin
						//slr
						out_reg = (a >> shamt);
					end
				endcase
			end
			// If I type instruction, then opcode doesn't equal 000000
			// Choose the function depending on the opcode bits
			6'b001001:begin
				//addiu
				b = imm;
				out_reg = sum;
			end
			6'b001100:begin
				//andi
				out_reg = (a & imm);
			end
			6'b000100:begin
				//beq
				out_reg = a-b;				
			end
			6'b000101:begin
				//bne
				if(a-b == 0)
					out_reg = ~(a-b);
				else
					out_reg = 0;
			end
			6'b100011:begin
				//lw
				b = imm;
				out_reg = sum;
			end
			6'b101011:begin
				//sw
				b = imm;
				out_reg = sum;
				
			end
		endcase
		
		casex(out_reg) // Set zero bit
			8'h00000000:begin // if the out equals 0, then zero = 1
				zero_reg = 1;
			end
			default:zero_reg=0; // if not, the out equals 1, then zero = 0
		endcase
		
		
	end
	
	// Assigns outputs
	assign out = out_reg;
	assign zero = zero_reg;


endmodule
