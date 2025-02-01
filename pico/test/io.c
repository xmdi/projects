#include "pico/stdlib.h"

#define PIN0 13
#define PIN1 12
#define PIN2 11
#define PIN3 10

void Xgpio_put(int a, int b){
	gpio_put(a,b);
}

void binary_out(int);

/*void binary_out(int x){

	if (x&1)
		gpio_put(PIN0,true);
	else
		gpio_put(PIN0,false);
	if (x&2)
		gpio_put(PIN1,true);	
	else
		gpio_put(PIN1,false);
	if (x&4)
		gpio_put(PIN2,true);	
	else
		gpio_put(PIN2,false);
	if (x&8)
		gpio_put(PIN3,true);
	else
		gpio_put(PIN3,false);
}
*/

int main(){
	gpio_init(PICO_DEFAULT_LED_PIN);
	gpio_init(PIN0);
	gpio_init(PIN1);
	gpio_init(PIN2);
	gpio_init(PIN3);
	gpio_set_dir(PICO_DEFAULT_LED_PIN,GPIO_OUT);
	gpio_set_dir(PIN0,GPIO_OUT);
	gpio_set_dir(PIN1,GPIO_OUT);
	gpio_set_dir(PIN2,GPIO_OUT);
	gpio_set_dir(PIN3,GPIO_OUT);

	int x=0;
	bool y=0;

	while (true){

		gpio_put(PICO_DEFAULT_LED_PIN,y);
		y=!y;
		binary_out(x++);
		sleep_ms(500);
    }
}
