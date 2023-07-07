#pragma once

#include <Arduino.h>

#include "GeneralPin.hpp"

namespace gpio {
class DigitalIn : public GeneralPin {
public:
    const uint8_t pin;

    explicit DigitalIn(uint8_t pin);
    DigitalIn(const DigitalIn&)            = delete;
    DigitalIn& operator=(const DigitalIn&) = delete;

    void setup();
    uint8_t read();
};
} // namespace gpio
