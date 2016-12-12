
.eqv  f ,$t1 
.eqv g, $t2
.eqv h, $t3
.eqv i, $t4
.eqv j_, $t5
.eqv temp_result, $t6
.eqv temp_result2, $t7
            #INSTRUCTIONS ARE IN GREEN:  the zero register is zero
li $t2, 12  # {10'b1010101010, }
li $t3, 10 # {10'b1010101010, }
li $t4, 5  # {10'b1010101010, } 
li $t5, 2  # {10'b1010101010,}

sub $t6, $t2, $t3
mult $t6, $t4
mflo $t6
sub $t7, $t4, $t5
add $t6, $t7, $t6
div $t6,$t5
mflo $t6 
sb $t6, 268501152 # change to 7


         #10'b1000101000: begin  //ADDITION !!!
	 #10'b1100101100: begin  //SUBTRACTION !!!
	 #10'b0000011111: begin  //DIVISION !!!
  	 # 10'b1111100000: begin  //MULTIPLICATION !!!
	 #10'b1010101010: begin  //Load Immediate Instruction !!!
	 #10'b1111011010: begin  //Loading Instruction from Data Memory!!
	 #10'b1111011000: begin  //Storing Instruction from Data Memory!!
		
	 
