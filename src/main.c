#include <libopencm3/stm32/rcc.h>
#include <libopencm3/stm32/gpio.h>

static void delay(void){
    for (int i =0; i < 50000;i++ )
    {
        __asm("nop");
    }
}

int setup(void){

    rcc_periph_clock_enable(RCC_GPIOB);
    gpio_mode_setup(GPIOB, GPIO_MODE_OUTPUT,GPIO_PUPD_NONE, GPIO0);
}
int main(void){
setup();
    while(1){
gpio_toggle(GPIOB, GPIO0);
        delay();
    }
    return 0;
} 