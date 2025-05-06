#ifndef DISPLAY_H
#define DISPLAY_H

#include "pico/stdlib.h"
#include "hardware/i2c.h"
#include "ssd1306/ssd1306.h"

#define porta_i2c i2c1
#define pino_sda 14
#define pino_scl 15

void init_i2c (i2c_inst_t *i2c, uint sda, uint scl, uint baundrate);

void init_display(ssd1306_t *display, i2c_inst_t *i2c);

void mostrar_display(ssd1306_t *display, const char* texto );

#endif