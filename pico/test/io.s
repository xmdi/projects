.global Xgpio_put
.global binary_out

binary_out:
	push {lr}
	mov r0,#13 @ hi
	mov r1,#1
	bl Xgpio_put 
	pop {pc}
