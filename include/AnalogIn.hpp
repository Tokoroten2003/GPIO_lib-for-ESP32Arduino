#pragma once

#include <Arduino.h>

namespace gpio {
class AnalogIn {
public:
    const uint8_t pin;

    explicit AnalogIn(uint8_t pin);
    AnalogIn(const AnalogIn&)            = delete;
    AnalogIn& operator=(const AnalogIn&) = delete;

    void setup();
    uint16_t read();
};
} // namespace gpio
