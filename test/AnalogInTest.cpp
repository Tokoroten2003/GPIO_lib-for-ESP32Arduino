#include "AnalogIn.hpp"

#include "pins.hpp"

#include <gtest/gtest.h>

namespace {
class AnalogInTest : public ::testing::TestWithParam<uint8_t> {
protected:
    gpio::AnalogIn analog_in;

public:
    AnalogInTest() : analog_in(GetParam()) {}
};
INSTANTIATE_TEST_SUITE_P(AnalogInPins, AnalogInTest, ::testing::ValuesIn(esp32devPins::analog_in_pins));

TEST_P(AnalogInTest, SetupAndRead) {
    ASSERT_NO_THROW(this->analog_in.setup());
    this->analog_in.setup();
    ASSERT_NO_THROW(this->analog_in.read());
}
} // namespace