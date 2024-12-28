#include <Arduino.h>

// Define the LED pin (you can change this based on your wiring)
#define LED_PIN 2  // GPIO2 is commonly used for the onboard LED

void setup() {
  // Initialize the LED pin as an output
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // Turn the LED on
  digitalWrite(LED_PIN, HIGH);
  delay(1000);  // Wait for 1 second

  // Turn the LED off
  digitalWrite(LED_PIN, LOW);
  delay(1000);  // Wait for 1 second
}
