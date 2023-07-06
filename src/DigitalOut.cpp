#include "DigitalOut.hpp"

gpio::DigitalOut::DigitalOut(uint8_t pin) : pin(pin) {}

void gpio::DigitalOut::setup() { pinMode(pin, OUTPUT); }
void gpio::DigitalOut::write(bool value) { digitalWrite(pin, static_cast<uint8_t>(value)); }
