// The goal of this program is to make a PB class that is split into different files (.ino , .cpp, .h) or a library that will read the button states using "INPUT_PULLUP"

// Main File that contains the user-friendly version of the code

#include "PButton.h"  // Includes the header file for the PButton class

PButton Button1(13);  // Creates an instance of the PButton class called "Button1" and initializes it with the pin number 13

void setup() {

  Serial.begin(9600);  // Initializes serial communication with a baud rate of 9600
  Button1.init();      // Initializes the "Button1" object by setting its pin mode to input
}

void loop() {

  Button1.readState();  // Reads the state of the "Button1" object (i.e. whether the button is pressed or not) and likely performs some action based on that state
}
