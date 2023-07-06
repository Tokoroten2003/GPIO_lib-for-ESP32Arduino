#include <Arduino.h>
#include <gtest/gtest.h>

void setup() {
    Serial.begin(9600);
    Serial.println();
    ::testing::InitGoogleTest();
    // Run tests
    RUN_ALL_TESTS();
}

void loop() {}
