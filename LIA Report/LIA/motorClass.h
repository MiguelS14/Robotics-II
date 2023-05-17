#ifndef MOTORCLASS_H
#define MOTORCLASS_H

#include <Arduino.h>

class motorClass {
private:
  int PWMA;   // Pin for controlling motor PWM A
  int PWMB;   // Pin for controlling motor PWM B
  int AIN1;   // Pin for controlling motor direction A1
  int BIN1;   // Pin for controlling motor direction B1
  int speed;  // Motor speed

public:
  motorClass(){};               // Default constructor
  motorClass(int multiPins[]);  // Constructor with pin configuration

  void init();                              // Initialize the motor pins
  void changeMotors(int multiPins[]);       // Change the motor pin configuration
  void move(bool a, int x, bool b, int y);  // Move the motors with specified PWM values
  void setSpeed(int speed);                 // Set the motor speed
  void forward(int x);                      // Move the motors forward
  void backward(int x);                     // Move the motors backward
  void left(int x);                         // Turn the motors left
  void right(int x);                        // Turn the motors right
  void forwardLeft(int x);                  // Move diagonally forward-left
  void forwardRight(int x);                 // Move diagonally forward-right
  void backwardLeft(int x);                 // Move diagonally backward-left
  void backwardRight(int x);                // Move diagonally backward-right
  void stop();                              // Stop the motors
};

#endif
