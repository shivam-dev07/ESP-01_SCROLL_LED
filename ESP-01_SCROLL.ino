// Define the pins for LEDs
const int ledPins[] = {3,2,0,1}; // Pins 0, 1, 2, 3 for LEDs

// Define delay time (in milliseconds) for scrolling
const int scrollDelay = 50;

void setup() {
  // Set LED pins as output
  for (int i = 0; i < 4; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // Turn off all LEDs before scrolling
  turnOffAllLEDs();

  // Scroll LEDs from left to right
  for (int i = 0; i < 4; i++) {
    // Turn on one LED at a time
    digitalWrite(ledPins[i], HIGH);
    delay(scrollDelay);
    // Turn off the LED before moving to the next one
    digitalWrite(ledPins[i], LOW);
  }

  // Scroll back to the left
  for (int i = 2; i >= 0; i--) {
    // Turn on one LED at a time
    digitalWrite(ledPins[i], HIGH);
    delay(scrollDelay);
    // Turn off the LED before moving to the next one
    digitalWrite(ledPins[i], LOW);
  }
}

// Function to turn off all LEDs
void turnOffAllLEDs() {
  for (int i = 0; i < 4; i++) {
    digitalWrite(ledPins[i], LOW);
  }
}

