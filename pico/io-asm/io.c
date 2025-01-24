#include "pico/stdlib.h"

#define INPUT_PIN 15

void logic(void);

int main(){
    stdio_init_all();
    gpio_init(PICO_DEFAULT_LED_PIN);
    gpio_init(INPUT_PIN);
    gpio_set_dir(PICO_DEFAULT_LED_PIN,GPIO_OUT);
    gpio_set_dir(INPUT_PIN,GPIO_IN);
    gpio_pull_up(INPUT_PIN);
    while (true){
	gpio_put(PICO_DEFAULT_LED_PIN,gpio_get(INPUT_PIN));
	logic();
    }
}
