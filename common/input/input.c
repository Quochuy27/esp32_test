#include <stdio.h>
#include <esp_log.h>
#include <driver/gpio.h>
#include "input.h"

void input_create(gpio_num_t gpio_num)
{
    gpio_set_direction(gpio_num,GPIO_MODE_INPUT);
}