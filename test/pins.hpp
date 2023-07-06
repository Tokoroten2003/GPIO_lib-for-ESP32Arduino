#include <array>

namespace esp32devPins {
constexpr std::array<uint8_t, 16> analog_in_pins   = { 0, 2, 4, 12, 13, 14, 15, 25, 26, 27, 32, 33, 34, 35, 36, 39 };
constexpr std::array<uint8_t, 20> analog_out_pins  = { 0,  2,  4,  5,  12, 13, 14, 15, 16, 17,
                                                       18, 19, 21, 22, 23, 25, 26, 27, 32, 33 };
constexpr std::array<uint8_t, 24> digital_in_pins  = { 0,  2,  4,  5,  12, 13, 14, 15, 16, 17, 18, 19,
                                                       21, 22, 23, 25, 26, 27, 32, 33, 34, 35, 36, 39 };
constexpr std::array<uint8_t, 20> digital_out_pins = { 0,  2,  4,  5,  12, 13, 14, 15, 16, 17,
                                                       18, 19, 21, 22, 23, 25, 26, 27, 32, 33 };
} // namespace esp32devPins
