#pragma once

#include <Arduino.h>

#include "GeneralPin.hpp"

namespace gpio {
class AnalogIn : public GeneralPin {
public:
    const uint8_t pin;

    explicit AnalogIn(uint8_t pin);
    AnalogIn(const AnalogIn&)            = delete;
    AnalogIn& operator=(const AnalogIn&) = delete;

    void setup();
    uint16_t read();
};
} // namespace gpio
