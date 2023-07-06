#include "DigitalIn.hpp"

#include "pins.hpp"

#include <gtest/gtest.h>

namespace {
class DigitalInTest : public ::testing::TestWithParam<uint8_t> {
protected:
    gpio::DigitalIn digital_in;

public:
    DigitalInTest() : digital_in(GetParam()) {}
};
INSTANTIATE_TEST_SUITE_P(DigitalInPins, DigitalInTest, ::testing::ValuesIn(esp32devPins::digital_in_pins));

TEST_P(DigitalInTest, SetupAndRead) {
    ASSERT_NO_THROW(this->digital_in.setup());
    this->digital_in.setup();
    ASSERT_NO_THROW(this->digital_in.read());
}
} // namespace