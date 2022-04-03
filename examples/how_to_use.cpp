#include <Arduino.h>
#include <RGBLED.h>

// Define the (digital) Pins of LED
#define LED_R_PIN 0
#define LED_G_PIN 1
#define LED_B_PIN 2

// Create the LED Object
RGBLED LED;

// Main Program
void setup()
{
    LED.Init(LED_R_PIN, LED_G_PIN, LED_B_PIN);
}

void loop()
{
    LED.Show(RGBLED::Red);
    delay(1000);

    LED.Show(RGBLED::Green);
    delay(1000);

    LED.Show(RGBLED::Blue);
    delay(1000);

    LED.Show(RGBLED::Yellow);
    delay(1000);

    LED.Show(RGBLED::LightBlue);
    delay(1000);

    LED.Show(RGBLED::Pink);
    delay(1000);

    LED.Show(RGBLED::White);
    delay(1000);

    LED.Show(RGBLED::Dark);
    delay(1000);
}
