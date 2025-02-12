.global Xgpio_put
.global binary_out

binary_out:
	push {lr}
	push {r0}
.pin0:
	mov r1,#1
	tst r1,r0
	beq .not0
.yes0:	
	mov r1,#1
	b .pin0_out
.not0:
	mov r1,#0	
.pin0_out:
	mov r0,#13
	bl Xgpio_put 
	pop {r0}	
	push {r0}

.pin1:
	mov r1,#2
	tst r1,r0
	beq .not1
.yes1:	
	mov r1,#1
	b .pin1_out
.not1:
	mov r1,#0	
.pin1_out:
	mov r0,#12
	bl Xgpio_put 
	pop {r0}	
	push {r0}

.pin2:
	mov r1,#4
	tst r1,r0
	beq .not2
.yes2:	
	mov r1,#1
	b .pin2_out
.not2:
	mov r1,#0	
.pin2_out:
	mov r0,#11
	bl Xgpio_put 
	pop {r0}	
	push {r0}

.pin3:
	mov r1,#8
	tst r1,r0
	beq .not3
.yes3:	
	mov r1,#1
	b .pin3_out
.not3:
	mov r1,#0	
.pin3_out:
	mov r0,#10
	bl Xgpio_put 
	pop {r0}	

	pop {pc}
