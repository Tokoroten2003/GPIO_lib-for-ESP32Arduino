#pragma once

#include <Arduino.h>

namespace gpio {
class DigitalIn {
public:
    const uint8_t pin;

    explicit DigitalIn(uint8_t pin);
    DigitalIn(const DigitalIn&)            = delete;
    DigitalIn& operator=(const DigitalIn&) = delete;

    void setup();
    bool read();
};
} // namespace gpio
