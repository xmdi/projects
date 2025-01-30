.global my_gpio_get
.global something

something:
#	push {r0}
#	mov r0,#15
#	pop {r0}
#	bl my_gpio_get # i can't execute this at all, how does abi work?
	bx lr
