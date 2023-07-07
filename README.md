# GPIO_lib-for-ESP32Arduino
Library for using GPIO of ESP32 on Arduino

## Installation
Add this statement to `platform.ini` on you project:
```ini
lib_deps = https://github.com/Tokoroten2003/GPIOlib-for-ESP32Arduino.git
```
and run:
```shell
$ pio init
```

## Usage
You can use types of GPIO:
- `DigitalIn`
- `DigitalOut`
- `AnalogIn`
- `AnalogOut`

### `DigitalIn`
Include `DigitalIn.hpp`
```cpp
#include "DigitalIn.hpp"
```

Initialize like this:
```cpp
gpio::DigitalIn digital_in(/* pin number */);
```

In `setup()`, you need to call `DigitalIn::setup()` on each pins you defined.
```cpp
void setup() {
    digital_in0.setup();
    digital_in1.setup();
    // ...
}
```

If you want to read value on a pin, call `DigitalIn::read()` on it.
```cpp
void loop() {
    uint8_t value = digital_in.read(); // returns 0 / 1
}
```

### `DigitalOut`
Include `DigitalOut.hpp`
```cpp
#include "DigitalOut.hpp"
```

Initialize like this:
```cpp
gpio::DigitalOut digital_out(/* pin number */);
```

In `setup()`, you need to call `DigitalOut::setup()` on each pins you defined.
```cpp
void setup() {
    digital_out0.setup();
    digital_out1.setup();
    // ...
}
```

If you want to output value to a pin, call `DigitalOut::write()` on it.
```cpp
void loop() {
    uint8_t value = HIGH; //  HIGH / LOW / unsigned integral number
    digital_out.write(value);
}
```

### `AnalogIn`
Include `AnalogIn.hpp`
```cpp
#include "AnalogIn.hpp"
```

Initialize like this:
```cpp
gpio::AnalogIn analog_in(/* pin number */);
```

In `setup()`, you need to call `AnalogIn::setup()` on each pins you defined.
```cpp
void setup() {
    analog_in0.setup();
    analog_in1.setup();
    // ...
}
```

If you want to output value to a pin, call `AnalogIn::read()` on it.
```cpp
void loop() {
    int value = analog_in.read(); // returns integral number (0 ~ 4095)
}
```

### `AnalogOut`
Include `AnalogOut.hpp`
```cpp
#include "AnalogOut.hpp"
```

Initialize like this:
```cpp
gpio::AnalogOut analog_out(/* pin number */, /* ch */,/* freq */, /* resol bits */);
```
- `ch` ... pwm channel
- `freq` ... pwm frequancy
- `resol bits` ... resolution bits (resolution: 2^`resol bits`)

In `setup()`, you need to call `AnalogOut::setup()` on each pins you defined.
```cpp
void setup() {
    analog_out0.setup();
    analog_out1.setup();
    // ...
}
```

If you want to output value to a pin, call `AnalogOut::write()` on it.
```cpp
void loop() {
    analog_out.write(64); // unsinged integral number (0 ~ 2^resol bits - 1)
}
```

### `setupPins()`
**This function is not allowed before c++17**

You can use `setupPins()` to setup multiple pins at the same time.
```cpp
gpio::AnalogIn pin0(0);
gpio::AnalogOut pin1(2);
gpio::DigitalIn pin2(4);
gpio::DigitalOut pin3(5);
void setup() {
    gpio::setupPins(pin0, pin1, pin2, pin3); // setup pin0, pin1, pin2 and pin3 at the same time
}
```
