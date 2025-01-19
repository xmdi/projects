#include "pico/stdlib.h"

#define GPIO_ON 1
#define GPIO_OFF 0
#define LED_PIN	25
#define READ_PIN 15

int main() {

	int gpio_in=1;

	gpio_init(LED_PIN);
	gpio_init(READ_PIN);
	gpio_set_dir(LED_PIN,GPIO_OUT);
	gpio_set_dir(READ_PIN,GPIO_IN);
	while(1){
		gpio_put(LED_PIN,GPIO_ON);
		sleep_ms(100);
		gpio_put(LED_PIN,GPIO_OFF);
		sleep_ms(100);
	}

	while(1){
		//gpio_in=gpio_get(READ_PIN);
		if (gpio_in==0){
			gpio_put(LED_PIN,GPIO_ON);
		}
		else{
			gpio_put(LED_PIN,GPIO_OFF);
		}
	}
}
