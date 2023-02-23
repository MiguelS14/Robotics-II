//Interface or Header

#ifndef LED_H // if not defined 
#define LED_H

#include<Arduino.h>

class Led{

private:
int _pin;

public:
Led(){};         // default constructor
Led(int pin);    // the constructor

void init();     //  to initialize the pin as an output 
void on();       // to turn the LED on
void off();      // to turn the LED off


};






#endif