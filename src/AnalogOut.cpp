#include "AnalogOut.hpp"

gpio::AnalogOut::AnalogOut(uint8_t pin, uint8_t ch, size_t freq, uint8_t resol_bits) :
    pin(pin), ch(ch), freq(freq), resol_bits(resol_bits) {}

void gpio::AnalogOut::setup() {
    pinMode(pin, OUTPUT);
    ledcSetup(ch, freq, resol_bits);
    ledcAttachPin(pin, ch);
}
void gpio::AnalogOut::write(size_t duty) { ledcWrite(ch, duty); }
