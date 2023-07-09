#include "DigitalOut.hpp"

gpio::DigitalOut::DigitalOut(uint8_t pin) : pin(pin) {}

void gpio::DigitalOut::setup() { pinMode(pin, OUTPUT); }
void gpio::DigitalOut::write(uint8_t value) { digitalWrite(pin, value); }
