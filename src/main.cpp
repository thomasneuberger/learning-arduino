#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

// Define the pin connected to the NeoPixel data line
#define LED_PIN 22

// Define the number of NeoPixels in the strip
#define LED_COUNT 12

// Create NeoPixel strip object
Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  // Initialize serial communication for debugging
  Serial.begin(115200);
  
  // Initialize NeoPixel strip
  strip.begin();
  
  // Turn off all pixels initially
  strip.show();
  
  Serial.println("ESP32 NeoPixel setup complete");
}

void loop() {
  // Do nothing - as per requirements
  delay(100);
}
