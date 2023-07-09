#include <Arduino.h>

#include "DigitalOut.hpp"

gpio::DigitalOut digital_out(14);
uint8_t led_state = LOW;

void setup() {
    digital_out.setup();
}

void loop() {
    digital_out.write(led_state);
    led_state = (led_state == HIGH) ? LOW : HIGH;
    delay(1000);
}
