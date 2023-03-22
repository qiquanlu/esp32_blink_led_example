#include <stdio.h>
#include "led.h"
void app_main(void)
{
    use_onboard_led();
    while (true)
    {
        blink_led(1000);
    }
}
