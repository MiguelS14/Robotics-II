// CPP File that contains the implementation of the functions declared in a corresponding header file.

#include "PButton.h"  // Includes the header file for the PButton class

PButton::PButton(int pin) {  // Constructor for the PButton class which takes an integer parameter "pin"
  this->pin = pin;           // Sets the "pin" member variable of the object to the value of the parameter
}

void PButton::init() {   // Method of the PButton class which initializes the button
  pinMode(pin, OUTPUT);  // Sets the mode of the "pin" to OUTPUT
}

void PButton::readState() {  // Method of the PButton class which reads the state of the button
  state = digitalRead(pin);  // Reads the state of the button using the "pin" member variable
  Serial.println(state);     // Prints the state of the button to the serial monitor
}