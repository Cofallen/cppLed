#ifndef __LED_H
#define __LED_H

#include "main.h"
// #include <stdint>

class led {
    private:
        /* data */
    public:
        led(uint8_t status);
        ~led();
        uint8_t control(uint8_t status);
};

// int m;

#endif // !__LED_H
