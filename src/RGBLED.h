#pragma once

#include <Arduino.h>

class RGBLED
{
public:
    enum Color
    {
        Red,
        Green,
        Blue,
        Yellow,
        LightBlue,
        Pink,
        White,
        Dark
    };
    void Init(uint8_t _LED_R, uint8_t _LED_G, uint8_t _LED_B);
    void Show(Color color);
protected:
    uint8_t LED_R, LED_G, LED_B;
    bool R, G, B;
};

// Example:
// RGBLED LED;
// LED.Init(LED_R, LED_G, LED_B);

// while (1)
// {
//     LED.Show(RGBLED::Red);
//     delay(1000);
//     LED.Show(RGBLED::Green);
//     delay(1000);
//     LED.Show(RGBLED::Blue);
//     delay(1000);
//     LED.Show(RGBLED::Yellow);
//     delay(1000);
//     LED.Show(RGBLED::LightBlue);
//     delay(1000);
//     LED.Show(RGBLED::Pink);
//     delay(1000);
//     LED.Show(RGBLED::White);
//     delay(1000);
//     LED.Show(RGBLED::Dark);
//     delay(1000);
// }