#pragma once

#include <Arduino.h>

#include "GeneralPin.hpp"

namespace gpio {
class AnalogOut : public GeneralPin {
public:
    const uint8_t pin;
    const uint8_t ch;
    const size_t freq;
    const uint8_t resol_bits;

    explicit AnalogOut(uint8_t pin, uint8_t ch, size_t freq, uint8_t resol_bits);
    AnalogOut(const AnalogOut&)            = delete;
    AnalogOut& operator=(const AnalogOut&) = delete;

    void setup();
    void write(size_t duty);
};
} // namespace gpio
