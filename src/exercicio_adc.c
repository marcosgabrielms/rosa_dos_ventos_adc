#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/adc.h"
#include "ws2812b_animation.h"
#include "utils/joystick/joystick.h"
#include "libs\RP2040-WS2812B-Animation/inc/spritesheet_bird_8x8.h"
#include "utils/display/display.h"

ssd1306_t display;

int main()
{
    stdio_init_all();
    inicializar_adc();
    init_i2c(porta_i2c, pino_sda, pino_scl, 400 * 1000);
    init_display(&display, porta_i2c);

     while (true) {
         verificar_movimento();
         const char* direcao = nome_direcao();
         mostrar_display(&display, direcao);
         sleep_ms(100);
     }


    
}
