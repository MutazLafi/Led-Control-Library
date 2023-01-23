#include <LedControl.h>

LedControl Led; // Object For Library

const int LedPin = 13; // Const int Variable For The Led Pin

void setup() {
  
  Led.Begin(LedPin);  // Begin The Led Pin
}

void loop() {
 
  Led.Blink(LedPin , 1000 , 5);  /* Blink Function That Contain Parameters : 
                                    Pin , The Delay Time Betwen Every Blink , How Many Times You Want To Blink
                                    */
                                  
}
