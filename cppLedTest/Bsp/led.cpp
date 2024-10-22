#include "main.h"
#include "led.h"
#include "gpio.h"
// #include "iostream"

using namespace std;

class led {
private:
    /* data */
public:
    led(uint8_t status);

    ~led();

    uint8_t control(uint8_t status);
};


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

void ledControl()
{
    led led1(1);
    led1.control(2);
    HAL_Delay(500);
}
