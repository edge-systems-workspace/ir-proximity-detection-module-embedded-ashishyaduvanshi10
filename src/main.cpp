/**
* @file IR_Object_Detection.ino
 * @author Ashish Kumar Yadav
 * @date 2026-02-20
 * @version 1.0
 *
 * @brief Detects object presence using an IR sensor.
 *
 * @details
 * This program reads a digital signal from an IR obstacle detection
 * sensor connected to pin 5. When an object is detected (LOW signal),
 * a message is printed to the Serial Monitor.
 *
 * Sensor Type: IR Obstacle Detection Module
 * Connection:
 * - OUT → Digital Pin 5
 * - VCC → 5V
 * - GND → GND
 *
 * @note
 * Most IR modules output LOW when object is detected.
 *
 * @warning
 * Ambient light may affect detection accuracy.
 */

#include <Arduino.h>

/** @brief Digital pin connected to IR sensor output */
#define IR_PIN 5


/**
 * @brief Initializes IR sensor pin and serial communication.
 */
void setup()
{
    pinMode(IR_PIN, INPUT);
    Serial.begin(9600);
}


/**
 * @brief Main loop function.
 *
 * @details
 * Reads digital value from IR sensor and prints detection status.
 */
void loop()
{
    int irValue = digitalRead(IR_PIN);  ///< Read IR sensor state

    if (irValue == LOW)
    {
        Serial.println("Object Detected");
    }
    else
    {
        Serial.println("No Object");
    }

    delay(200);
}
