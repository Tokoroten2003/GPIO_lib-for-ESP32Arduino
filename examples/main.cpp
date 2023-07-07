#ifndef UNIT_TEST

#include "AnalogIn.hpp"
#include "GeneralPin.hpp"

#include <Arduino.h>

gpio::AnalogIn analog_in(13);

void setup() {
    Serial.begin(9600);
    setupPins(analog_in);
}

void loop() {
    Serial.println(analog_in.read());
    delay(1);
}

#endif
