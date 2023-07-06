#ifndef UNIT_TEST

#include "AnalogIn.hpp"

#include <Arduino.h>

gpio::AnalogIn analog_in(13);

void setup() {
    Serial.begin(9600);
    analog_in.setup();
}

void loop() {
    Serial.println(analog_in.read());
    delay(1);
}

#endif
