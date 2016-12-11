`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:37:21 12/10/2016
// Design Name:   Controller
// Module Name:   C:/Users/tuf22191/Projects/Github_Repos/Building_Microprocessor_Verilog/MicroP_for_legv8/TB_Controller.v
// Project Name:  MicroP_for_legv8
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Controller
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TB_Controller;

	// Inputs
	reg [9:0] instruction;

	// Outputs
	wire mem_write_dm;
	wire mem_read_dm;
	wire branch;
	wire reg_write_rf;
	wire mux2;
	wire mux3;
	wire [2:0] alu_op;

	// Instantiate the Unit Under Test (UUT)
	Controller uut (
		.opcode(instruction), 
		.mem_write_dm(mem_write_dm), 
		.mem_read_dm(mem_read_dm), 
		.branch(branch), 
		.reg_write_rf(reg_write_rf), 
		.mux2(mux2), 
		.mux3(mux3), 
		.alu_op(alu_op)
	);
   integer sum;
	initial begin
		// Initialize Inputs
		instruction = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		instruction = 1;
		#10;
      if(mem_write_dm==0)begin
			$display("default case is working");
		end
		if(mem_read_dm==0)begin
			$display("default case is working");
		end
		  
		instruction = 32'b1000101000;
		#10;
      if(mux3==1)begin
			$display("addition is working is working");
		end
		

      instruction = 32'b1100101100;
		#10;
      if(mux3==1 && reg_write_rf==1 && alu_op ==3'b001)begin
			$display("subtraction is working is working");
		end		
		

      instruction = 32'b1111100000;
		#10;
      if(mux3==1 && reg_write_rf==1 && alu_op ==3'b100)begin
			$display("multiply is working is working");
		end	


      instruction = 32'b0000011111;
		#10;
      if(mux3==1 && reg_write_rf==1 && alu_op ==3'b011)begin
			$display("division is working is working");
		end	
		    
		  
		  
		  
		  
		// Add stimulus here

	end
      
endmodule

