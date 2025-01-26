.global my_gpio_get
.global _gpio_get

_gpio_get:
	mov r0,#15
	bl my_gpio_get
	bx lr
