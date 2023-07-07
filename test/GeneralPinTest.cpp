#include <gtest/gtest.h>

#include "AnalogIn.hpp"
#include "AnalogOut.hpp"
#include "DigitalIn.hpp"
#include "DigitalOut.hpp"
#include "GeneralPin.hpp"

namespace {
class FunctionTest : public ::testing::Test {
protected:
    gpio::AnalogIn pin0;
    gpio::AnalogOut pin1;
    gpio::DigitalIn pin2;
    gpio::DigitalOut pin3;

public:
    FunctionTest() : pin0(0), pin1(2, 0, 12800, 8), pin2(4), pin3(5) {}
};

TEST_F(FunctionTest, setupPins) { EXPECT_NO_THROW(gpio::setupPins(this->pin0, this->pin1, this->pin2, this->pin3)); }
}