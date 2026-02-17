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


const int IR_PIN = 2;

int sensorState = 0;

void setup() {

    Serial.begin(9600);

    pinMode(IR_PIN, INPUT);
    Serial.println("IR Obstacle Detection System Initialized");
}

void loop() {

    sensorState = digitalRead(IR_PIN);

    // TODO 7:
    // If obstacle detected
    //     Print "Obstacle Detected"
    // Else
    //     Print "No Obstacle"
    if (sensorState == LOW) {   // Many IR sensors output LOW when obstacle detected
        Serial.println("Obstacle Detected");
    } else {
        Serial.println("No Obstacle");
    }

    // TODO 8:
    // Add small delay (200–500ms)
    delay(300);
}