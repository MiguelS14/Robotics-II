// The goal of this program is to use arrays to display numbers 0 - 9 by declaring declaring them in a function that is used in the loop with the use of switching between cases e.g "case 0" displays number 0 in the 7-segment

// Declare integer variables for the pin numbers of the 7-segment display

int A = 7;
int B = 8;
int C = 9;
int D = 10;
int E = 11;
int F = 12;
int G = 13;

// Declare an integer array to store the pin numbers of the 7-segment display

int myPins[] = { A, B, C, D, E, F, G };

// Declare integer arrays to store the binary representation of digits 0-9 on the 7-segment display

int Zero[] = { 1, 1, 1, 1, 1, 1, 0 };   // Display 0 in the 7-segment
int One[] = { 0, 1, 1, 0, 0, 0, 0 };    // Display 1 in the 7-segment
int Two[] = { 1, 1, 0, 1, 1, 0, 1 };    // Display 2 in the 7-segment
int Three[] = { 1, 1, 1, 1, 0, 0, 1 };  // Display 3 in the 7-segment
int Four[] = { 0, 1, 1, 0, 0, 1, 1 };   // Display 4 in the 7-segment
int Five[] = { 1, 0, 1, 1, 0, 1, 1 };   // Display 5 in the 7-segment
int Six[] = { 1, 0, 1, 1, 1, 1, 1 };    // Display 6 in the 7-segment
int Seven[] = { 1, 1, 1, 0, 0, 0, 0 };  // Display 7 in the 7-segment
int Eight[] = { 1, 1, 1, 1, 1, 1, 1 };  // Display 8 in the 7-segment
int Nine[] = { 1, 1, 1, 1, 0, 1, 1 };   // Display 9 in the 7-segment

// Set up the pins as outputs in the setup function

void setup(void) {

  for (int i = 6; i < 14; i++) {  // Loop through pins 6 to 13
    pinMode(i, OUTPUT);           // Set each pin as an output
  }
}

// Declare a variable for the delay time
int time = 500;

void zero() {                          // Declares "zero" as a function to display 0 in the 7-segment
  for (int j = 0; j < 7; j++) {        // sets "j" as an integer to read the value of array 0-7
    digitalWrite(myPins[j], Zero[j]);  // Display the binary array for 0
  }
}

void one() {                          // Declares "one" as a function to display 1 in the 7-segment
  for (int j = 0; j < 7; j++) {       // sets "j" as an integer to read the value of array 0-7
    digitalWrite(myPins[j], One[j]);  // Display the binary array for 1
  }
}

void two() {                          // Declares "two" as a function to display 2 in the 7-segment
  for (int j = 0; j < 7; j++) {       // sets "j" as an integer to read the value of array 0-7
    digitalWrite(myPins[j], Two[j]);  // Display the binary array for 2
  }
}

void three() {                          // Declares "three" as a function to display 3 in the 7-segment
  for (int j = 0; j < 7; j++) {         // sets "j" as an integer to read the value of array 0-7
    digitalWrite(myPins[j], Three[j]);  // Display the binary array for 3
  }
}

void four() {                          // Declares "four" as a function to display 4 in the 7-segment
  for (int j = 0; j < 7; j++) {        // sets "j" as an integer to read the value of array 0-7
    digitalWrite(myPins[j], Four[j]);  // Display the binary array for 4
  }
}

void five() {                          // Declares "five" as a function to display 5 in the 7-segment
  for (int j = 0; j < 7; j++) {        // sets "j" as an integer to read the value of array 0-7
    digitalWrite(myPins[j], Five[j]);  // Display the binary array for 5
  }
}

void six() {                          // Declares "six" as a function to display 6 in the 7-segment
  for (int j = 0; j < 7; j++) {       // sets "j" as an integer to read the value of array 0-7
    digitalWrite(myPins[j], Six[j]);  // Display the binary array for 6
  }
}

void seven() {                          // Declares "seven" as a function to display 7 in the 7-segment
  for (int j = 0; j < 7; j++) {         // sets "j" as an integer to read the value of array 0-7
    digitalWrite(myPins[j], Seven[j]);  // Display the binary array for 7
  }
}

void eight() {                          // Declares "eight" as a function to display 8 in the 7-segment
  for (int j = 0; j < 7; j++) {         // sets "j" as an integer to read the value of array 0-7
    digitalWrite(myPins[j], Eight[j]);  // Display the binary array for 8
  }
}

void nine() {                          // Declares "nine" as a function to display 9 in the 7-segment
  for (int j = 0; j < 7; j++) {        // sets "j" as an integer to read the value of array 0-7
    digitalWrite(myPins[j], Nine[j]);  // Display the binary array for 9
  }
}

// Loop through the binary arrays for digits 0-9 and display them on the 7-segment display using functions


void loop() {
  // Calls and intiates the codes of the following functions
  for (int i = 0; i <= 9; i++) {  // Calls a for loop and uses "i" to get a value of 0 - 9 to be used in the switch case
    switch (i) {                  // uses integer "i" to call numbers 0 - 9 that the case will read and further display in the 7-segment

      case 0:
        zero();       // Uses function "zero" to display 0 in the 7-segment
        delay(time);  // Delay "time" for 500 ms
        break;        // Breaks statements between cases

      case 1:
        one();        // Uses function "one" to display 1 in the 7-segment
        delay(time);  // Delay "time" for 500 ms
        break;        // Breaks statements between cases

      case 2:
        two();        // Uses function "two" to display 2 in the 7-segment
        delay(time);  // Delay "time" for 500 ms
        break;        // Breaks statements between cases

      case 3:
        three();      // Uses function "three" to display 3 in the 7-segment
        delay(time);  // Delay "time" for 500 ms
        break;        // Breaks statements between cases

      case 4:
        four();       // Uses function "four" to display 4 in the 7-segment
        delay(time);  // Delay "time" for 500 ms
        break;        // Breaks statements between cases

      case 5:
        five();       // Uses function "five" to display 5 in the 7-segment
        delay(time);  // Delay "time" for 500 ms
        break;        // Breaks statements between cases
      case 6:
        six();        // Uses function "six" to display 6 in the 7-segment
        delay(time);  // Delay "time" for 500 ms
        break;        // Breaks statements between cases
      case 7:
        seven();      // Uses function "seven" to display 7 in the 7-segment
        delay(time);  // Delay "time" for 500 ms
        break;        // Breaks statements between cases
      case 8:
        eight();      // Uses function "eight" to display 8 in the 7-segment
        delay(time);  // Delay "time" for 500 ms
        break;        // Breaks statements between cases
      case 9:
        nine();       // Uses function "nine" to display 9 in the 7-segment
        delay(time);  // Delay "time" for 500 ms
        break;        // Breaks statements between cases
    }
  }
}
