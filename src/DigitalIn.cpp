#include "DigitalIn.hpp"

gpio::DigitalIn::DigitalIn(uint8_t pin) : pin(pin) {}

void gpio::DigitalIn::setup() { pinMode(pin, INPUT); }
bool gpio::DigitalIn::read() { return static_cast<bool>(digitalRead(pin)); }
