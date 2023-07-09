#include <Arduino.h>

#include "DigitalOut.hpp"

gpio::DigitalOut led(14);
uint8_t led_state = LOW;

void setup() { led.setup(); }

void loop() {
    led.write(led_state);
    led_state = (led_state == HIGH) ? LOW : HIGH;
    delay(1000);
}
