#include <Arduino.h>

#include "DigitalOut.hpp"

gpio::DigitalOut digital_out(14);
uint8_t led_state = LOW;

void setup() {
    Serial.begin(9600);
    digital_out.setup();
}

void loop() {
    led_state = (led_state == HIGH) ? LOW : HIGH;
    digital_out.write(led_state);
    delay(1000);
}
