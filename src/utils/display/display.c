#include "display.h"

void init_i2c (i2c_inst_t *i2c, uint sda, uint scl, uint baundrate){

    i2c_init(i2c, baundrate);
    gpio_set_function(sda, GPIO_FUNC_I2C);
    gpio_set_function(scl, GPIO_FUNC_I2C);

    gpio_pull_up(sda);
    gpio_pull_up(scl);
}


void init_display(ssd1306_t *display, i2c_inst_t *i2c)
{
    ssd1306_clear(display);
    ssd1306_init(display, 128, 64, 0x03c, i2c);
}

void mostrar_display(ssd1306_t *display, const char* texto ) {
    ssd1306_clear(display);
    ssd1306_draw_string(display, 32, 32, 1.5, texto);
    ssd1306_show(display);
}
