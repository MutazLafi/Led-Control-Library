#include <LedControl.h>

LedControl Led;  // Object For Library

const int LedPin = 13;  // const int variable to The Led Pin

void setup() {

  Led.Begin(LedPin);  // Begin The Led Pin
  
  Led.OFF(LedPin);     // Make The Led OFF (LOW)
  delay(3000);
}

void loop() {
   // Nothing in Loop

}
