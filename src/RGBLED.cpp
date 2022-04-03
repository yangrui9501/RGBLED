#include <RGBLED.h>

void RGBLED::Init(uint8_t _LED_R, uint8_t _LED_G, uint8_t _LED_B)
{
    LED_R = _LED_R;
    LED_G = _LED_G;
    LED_B = _LED_B;
    pinMode(LED_R, OUTPUT);
    pinMode(LED_G, OUTPUT);
    pinMode(LED_B, OUTPUT);
}

void RGBLED::Show(Color color)
{
    switch (color)
    {
    case Red:
        R = 1;
        G = 0;
        B = 0;
        break;
    case Green:
        R = 0;
        G = 1;
        B = 0;
        break;
    case Blue:
        R = 0;
        G = 0;
        B = 1;
        break;
    case Yellow:
        R = 1;
        G = 1;
        B = 0;
        break;
    case LightBlue:
        R = 0;
        G = 1;
        B = 1;
        break;
    case Pink:
        R = 1;
        G = 0;
        B = 1;
        break;
    case White:
        R = 1;
        G = 1;
        B = 1;
        break;
    case Dark:
        R = 0;
        G = 0;
        B = 0;
        break;
    }
    digitalWrite(LED_R, !R);
    digitalWrite(LED_G, !G);
    digitalWrite(LED_B, !B);
}