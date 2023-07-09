#include "DigitalOut.hpp"

#include "pins.hpp"

#include <gtest/gtest.h>

namespace {
class DigitalOutTest : public ::testing::TestWithParam<std::tuple<uint8_t, uint8_t>> {
protected:
    gpio::DigitalOut digital_out;

public:
    DigitalOutTest() : digital_out(std::get<0>(GetParam())) {}
};
INSTANTIATE_TEST_SUITE_P(
    DigitalOutPins, DigitalOutTest,
    ::testing::Combine(::testing::ValuesIn(esp32devPins::digital_out_pins), ::testing::Values(LOW, HIGH)));

TEST_P(DigitalOutTest, SetupAndWrite) {
    ASSERT_NO_THROW(digital_out.setup());
    digital_out.setup();
    ASSERT_NO_THROW(digital_out.write(std::get<1>(GetParam())));
}
}