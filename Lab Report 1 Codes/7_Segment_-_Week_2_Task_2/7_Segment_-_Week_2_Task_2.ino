// The goal of this program is to use for loop method to declare the pins of the seven segment while using the simplest coding language to display numbers in the 7 Segment display.

// Assigning pin numbers to the segments of the 7-segment display

int A = 7;
int B = 8;
int C = 9;
int D = 10;
int E = 11;
int F = 12;
int G = 13;

// Setting the mode of the pins to output.

void setup(void) {
  for (int i = 7; i < 14; i++) { // uses for loop to declare pin numbers 7 - 13
    pinMode(i, OUTPUT); // Sets pin 7 - 13 as an OUTPUT for the 7 Segment
  }
}

int time = 500;  // The delay time in milliseconds for each digit

// The main loop that displays the digits from 0 to 9.

void loop() {

 // Zero
  digitalWrite(A, 1);  // Turn on segment A
  digitalWrite(B, 1);  // Turn on segment B
  digitalWrite(C, 1);  // Turn on segment C
  digitalWrite(D, 1);  // Turn on segment D
  digitalWrite(E, 1);  // Turn on segment E
  digitalWrite(F, 1);  // Turn on segment F
  digitalWrite(G, 0);  // Turn off segment G
  delay(time);         // Wait for ""time" 500ms

  // One
  digitalWrite(A, 0);  // Turn off segment A
  digitalWrite(B, 1);  // Turn on segment B
  digitalWrite(C, 1);  // Turn on segment C
  digitalWrite(D, 0);  // Turn off segment D
  digitalWrite(E, 0);  // Turn off segment E
  digitalWrite(F, 0);  // Turn off segment F
  digitalWrite(G, 0);  // Turn off segment G
  delay(time);         // Wait for ""time" 500ms

  // Two
  digitalWrite(A, 1);  // Turn on segment A
  digitalWrite(B, 1);  // Turn on segment B
  digitalWrite(C, 0);  // Turn off segment C
  digitalWrite(D, 1);  // Turn on segment D
  digitalWrite(E, 1);  // Turn on segment E
  digitalWrite(F, 0);  // Turn off segment F
  digitalWrite(G, 1);  // Turn on segment G
  delay(time);         // Wait for ""time" 500ms

  // Three
  digitalWrite(A, 1);  // Turn on segment A
  digitalWrite(B, 1);  // Turn on segment B
  digitalWrite(C, 1);  // Turn on segment C
  digitalWrite(D, 1);  // Turn on segment D
  digitalWrite(E, 0);  // Turn off segment E
  digitalWrite(F, 0);  // Turn off segment F
  digitalWrite(G, 1);  // Turn on segment G
  delay(time);         // Wait for ""time" 500ms

  // Four
  digitalWrite(A, 0);  // Turn off segment A
  digitalWrite(B, 1);  // Turn on segment B
  digitalWrite(C, 1);  // Turn on segment C
  digitalWrite(D, 0);  // Turn off segment D
  digitalWrite(E, 0);  // Turn off segment E
  digitalWrite(F, 1);  // Turn on segment F
  digitalWrite(G, 1);  // Turn on segment G
  delay(time);         // Wait for ""time" 500ms

  // Five
  digitalWrite(A, 1);  // Turn on segment A
  digitalWrite(B, 0);  // Turn off segment B
  digitalWrite(C, 1);  // Turn on segment C
  digitalWrite(D, 1);  // Turn on segment D
  digitalWrite(E, 0);  // Turn off segment E
  digitalWrite(F, 1);  // Turn on segment F
  digitalWrite(G, 1);  // Turn on segment G
  delay(time);         // Wait for ""time" 500ms


  // Six
  digitalWrite(A, 1);  // Turn on segment A
  digitalWrite(B, 0);  // Turn off segment B
  digitalWrite(C, 1);  // Turn on segment C
  digitalWrite(D, 1);  // Turn on segment D
  digitalWrite(E, 1);  // Turn on segment E
  digitalWrite(F, 1);  // Turn on segment F
  digitalWrite(G, 1);  // Turn on segment G
  delay(time);         // Wait for ""time" 500ms

  // Seven
  digitalWrite(A, 1);  // Turn on segment A
  digitalWrite(B, 1);  // Turn on segment B
  digitalWrite(C, 1);  // Turn on segment C
  digitalWrite(D, 0);  // Turn off segment D
  digitalWrite(E, 0);  // Turn off segment E
  digitalWrite(F, 0);  // Turn off segment F
  digitalWrite(G, 0);  // Turn off segment G
  delay(time);         // Wait for ""time" 500ms

  // Eight
  digitalWrite(A, 1);  // Turn on segment A
  digitalWrite(B, 1);  // Turn on segment B
  digitalWrite(C, 1);  // Turn on segment C
  digitalWrite(D, 1);  // Turn on segment D
  digitalWrite(E, 1);  // Turn on segment E
  digitalWrite(F, 1);  // Turn on segment F
  digitalWrite(G, 1);  // Turn on segment G
  delay(time);         // Wait for ""time" 500ms

  // Nine
  digitalWrite(A, 1);  // Turn on segment A
  digitalWrite(B, 1);  // Turn on segment B
  digitalWrite(C, 1);  // Turn on segment B
  digitalWrite(D, 0);  // Turn off segment D
  digitalWrite(E, 0);  // Turn off segment E
  digitalWrite(F, 1);  // Turn on segment F
  digitalWrite(G, 1);  // Turn on segment G
  delay(time);         // Wait for ""time" 500ms
}
