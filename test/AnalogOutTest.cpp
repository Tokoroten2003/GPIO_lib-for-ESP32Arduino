#include "AnalogOut.hpp"

#include "pins.hpp"

#include <gtest/gtest.h>

namespace {
class AnalogOutTest : public ::testing::TestWithParam<std::tuple<uint8_t, uint8_t, uint16_t, uint8_t, size_t>> {
protected:
    gpio::AnalogOut analog_out;

public:
    AnalogOutTest() :
        analog_out(std::get<0>(GetParam()), std::get<1>(GetParam()), std::get<2>(GetParam()), std::get<3>(GetParam())) {
    }
};
INSTANTIATE_TEST_SUITE_P(
    AnalogOutParams, AnalogOutTest,
    ::testing::Combine(
        ::testing::ValuesIn(esp32devPins::analog_out_pins), ::testing::Values(0), ::testing::Values(12800),
        ::testing::Values(8, 12), ::testing::Values(0, 255)));

TEST_P(AnalogOutTest, SetupAndWrite) {
    ASSERT_NO_THROW(this->analog_out.setup());
    this->analog_out.setup();
    ASSERT_NO_THROW(this->analog_out.write(std::get<4>(GetParam())));
}
} // namespace
