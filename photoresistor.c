#include "pico/stdlib.h"
#include "hardware/gpio.h"
#include "hardware/adc.h"


    const int LED_PIN = 13;
    const int LDR_PIN = 27;
int main(){


    //Initialize the given pin as general purpose input or output.
    gpio_init(LED_PIN);
    adc_init();
    adc_gpio_init(LDR_PIN);
    
    gpio_set_dir(LED_PIN, GPIO_OUT);


    
    while(true){
        int ldrStatus = adc_read(); 

        if (ldrStatus <=300)
            {
                gpio_put(LED_PIN, 1);
            }

        else{
   
                gpio_put(LED_PIN, 0);
        }
    }

}