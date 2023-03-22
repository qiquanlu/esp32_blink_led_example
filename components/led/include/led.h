#ifndef _COMPONENT_LED_H_
#define _COMPONENT_LED_H_
#include "driver/gpio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#define LED_GPIO GPIO_NUM_2

void use_onboard_led(void);
void configure_gpio(gpio_num_t gpio_pin, gpio_mode_t mode);
void blink_led(int ms);

#endif