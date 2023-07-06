#include "AnalogIn.hpp"

gpio::AnalogIn::AnalogIn(uint8_t pin) : pin(pin) {}

void gpio::AnalogIn::setup() { pinMode(pin, INPUT); }
uint16_t gpio::AnalogIn::read() { return analogRead(pin); }
