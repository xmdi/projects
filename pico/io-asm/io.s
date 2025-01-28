.global my_gpio_get
.global something

something:
#	mov r0,#15
#	bl my_gpio_get
	bx lr
