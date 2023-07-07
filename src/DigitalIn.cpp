#include "DigitalIn.hpp"

gpio::DigitalIn::DigitalIn(uint8_t pin) : pin(pin) {}

void gpio::DigitalIn::setup() { pinMode(pin, INPUT); }
uint8_t gpio::DigitalIn::read() { return static_cast<uint8_t>(digitalRead(pin)); }
