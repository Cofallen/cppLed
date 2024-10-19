#include "main.h"
#include "led.h"

using namespace std;

led::led(uint8_t status)
{
    switch (status)
    {
    case 0:
        HAL_GPIO_WritePin(LED_R_GPIO_Port, LED_R_Pin, GPIO_PIN_RESET);
        break;
    case 1:
        HAL_GPIO_WritePin(LED_R_GPIO_Port, LED_R_Pin, GPIO_PIN_SET);
        break;
    case 2:
        HAL_GPIO_TogglePin(LED_G_GPIO_Port, LED_G_Pin);
        break;
    default:
        break;
    }
}

led::~led()
{
}

uint8_t led::control(uint8_t status)
{
    switch (status)
    {
    case 0:
        HAL_GPIO_WritePin(LED_R_GPIO_Port, LED_R_Pin, GPIO_PIN_RESET);
        break;
    case 1:
        HAL_GPIO_WritePin(LED_R_GPIO_Port, LED_R_Pin, GPIO_PIN_SET);
        break;
    case 2:
        HAL_GPIO_TogglePin(LED_R_GPIO_Port, LED_R_Pin);
        break;
    default:
        break;
    }
    return 0;
}
