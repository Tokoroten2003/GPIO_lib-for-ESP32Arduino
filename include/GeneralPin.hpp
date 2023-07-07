#pragma once

#include <Arduino.h>

namespace gpio {
class GeneralPin {
public:
    virtual void setup() = 0;
};

template <typename... PinT>
void setupPins(PinT&... pins) {
    static_assert((std::is_base_of<GeneralPin, PinT>::value && ...), "All pins must be derived from GeneralPin");
    (pins.setup(), ...);
}
} // namespace gpio
