#pragma once

#include <Arduino.h>

namespace gpio {
class DigitalOut {
public:
    const uint8_t pin;

    explicit DigitalOut(uint8_t pin);
    DigitalOut(const DigitalOut&)            = delete;
    DigitalOut& operator=(const DigitalOut&) = delete;

    void setup();
    void write(bool value);
};
} // namespace gpio
