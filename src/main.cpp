#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Obstacle Detection System using IR Sensor
 * @author YOUR_NAME
 * @date YYYY-MM-DD
 *
 * @details
 * Reads digital input from IR sensor
 * and detects obstacle presence.
 */

#define FSR_PIN A0

int fsrValue = 0;

void setup() {

    Serial.begin(9600);

    Serial.println("=== FSR Force Measurement System Initialized ===");
}

void loop() {

    fsrValue = analogRead(FSR_PIN);

    Serial.print("Raw ADC Value: ");
    Serial.println(fsrValue);

    // TODO 7:
    // If obstacle detected
    //     Print "Obstacle Detected"
    // Else
    //     Print "No Obstacle"

    // TODO 8:
    // Add small delay (200–500ms)
}
