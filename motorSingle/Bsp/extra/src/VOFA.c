#include "main.h"
#include <string.h>

#include "VOFA.h"

void led_blink(void)
{
    HAL_GPIO_TogglePin(LED_R_GPIO_Port, LED_R_Pin);
    HAL_Delay(500);
}