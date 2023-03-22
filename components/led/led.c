#include "led.h"

static bool s_led_state = false;

void use_onboard_led(void)
{
    configure_gpio(LED_GPIO, GPIO_MODE_OUTPUT);
}

void configure_gpio(gpio_num_t gpio_pin, gpio_mode_t mode)
{
    gpio_reset_pin(gpio_pin);
    gpio_set_direction(gpio_pin, mode);
}

void blink_led(int ms)
{
    gpio_set_level(LED_GPIO, s_led_state);
    s_led_state = !s_led_state;
    vTaskDelay(ms / portTICK_PERIOD_MS);
}