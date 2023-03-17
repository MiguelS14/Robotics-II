// The goal of this program is to use arrays to display numbers 0 - 9 by declaring pins of the 7-segment and declare which pins turns on using arrays Zero - Nine.

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

// Loop through the binary arrays for digits 0-9 and display them on the 7-segment display
void loop() {

  for (int j = 0; j < 7; j++) {        // sets "j" as an integer to read the value of array 0-7
    digitalWrite(myPins[j], Zero[j]);  // Display the binary array for 0
  }
  delay(time);  // Delay "time" for 500 ms

  for (int j = 0; j < 7; j++) {       // sets "j" as an integer to read the value of array 0-7
    digitalWrite(myPins[j], One[j]);  // Display the binary array for 1
  }
  delay(time);  // Delay "time" for 500 ms

  for (int j = 0; j < 7; j++) {       // sets "j" as an integer to read the value of array 0-7
    digitalWrite(myPins[j], Two[j]);  // Display the binary array for 2
  }
  delay(time);  // Delay "time" for 500 ms

  for (int j = 0; j < 7; j++) {         // sets "j" as an integer to read the value of array 0-7
    digitalWrite(myPins[j], Three[j]);  // Display the binary array for 3
  }
  delay(time);  // Delay "time" for 500 ms

  for (int j = 0; j < 7; j++) {        // sets "j" as an integer to read the value of array 0-7
    digitalWrite(myPins[j], Four[j]);  // Display the binary array for 4
  }
  delay(time);  // Delay "time" for 500 ms

  for (int j = 0; j < 7; j++) {        // sets "j" as an integer to read the value of array 0-7
    digitalWrite(myPins[j], Five[j]);  // Display the binary array for 5
  }
  delay(time);  // Delay "time" for 500 ms

  for (int j = 0; j < 7; j++) {       // sets "j" as an integer to read the value of array 0-7
    digitalWrite(myPins[j], Six[j]);  // Display the binary array for 6
  }
  delay(time);  // Delay "time" for 500 ms

  for (int j = 0; j < 7; j++) {         // sets "j" as an integer to read the value of array 0-7
    digitalWrite(myPins[j], Seven[j]);  // Display the binary array for 7
  }
  delay(time);  // Delay "time" for 500 ms

  for (int j = 0; j < 7; j++) {         // sets "j" as an integer to read the value of array 0-7
    digitalWrite(myPins[j], Eight[j]);  // Display the binary array for 8
  }
  delay(time);  // Delay "time" for 500 ms

  for (int j = 0; j < 7; j++) {        // sets "j" as an integer to read the value of array 0-7
    digitalWrite(myPins[j], Nine[j]);  // Display the binary array for 9
  }
  delay(time);  // Delay "time" for 500 ms
}
