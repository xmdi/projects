#include "pico/stdlib.h"

int main(){
    bool led_set;
    gpio_init(PICO_DEFAULT_LED_PIN);
    gpio_set_dir(PICO_DEFAULT_LED_PIN,GPIO_OUT);
    while (true){
        gpio_put(PICO_DEFAULT_LED_PIN,led_set);
        led_set=!led_set;
        sleep_ms(1000);
    }
}