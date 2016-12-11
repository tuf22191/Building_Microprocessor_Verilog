
.eqv  f ,$t1 
.eqv g, $t2
.eqv h, $t3
.eqv i, $t4
.eqv j_, $t5
.eqv temp_result, $t6
.eqv temp_result2, $t7

li g, 12
li h, 10
li i, 5
li j_, 2

sub temp_result, g, h
mult temp_result, i
mflo temp_result
#############################
li $v0, 1
add $a0, temp_result, $zero
syscall

li $v0, 11
li $a0, 10
syscall
#############################
sub temp_result2, i, j_
add temp_result, temp_result2, temp_result
div temp_result,j_
mflo temp_result
#############################
li $v0, 1
add $a0, temp_result, $zero
syscall
#############################
sb temp_result, 268501152


nop
nop
nop