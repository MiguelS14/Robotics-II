// The goal of this program is to make use of the STL chip called "74HC595" that uses the shift register function  "series in parallel out" SIPO to display 4 different numbers in the-
// 4-Display 7 Segment simultaneously using a minimum amount of pin.

// Set up the pins and digit patterns
int latch = 4;                    // Pin to latch
int cs = 5;                       // Clock pin
int data = 3;                     // Pin to pass the information
int dPins[4] = { 11, 10, 9, 8 };  // Pins that control the digits, in order: 4-3-2-1

const byte digits[10] =  // Indicates which pins to turn on/off to display each number
  {
    B00111111,  // 0
    B00000110,  // 1
    B01011011,  // 2
    B01001111,  // 3
    B01100110,  // 4
    B01101101,  // 5
    B01111101,  // 6
    B0000111,   // 7
    B01111111,  // 8
    B01101111   // 9
  };

void setup() {

  pinMode(latch, OUTPUT);  // Set up the pin for "latch" as an output
  pinMode(cs, OUTPUT);     // Set up the pin for "cs" as an output
  pinMode(data, OUTPUT);   // Set up the "data" as an output
  pinMode(11, OUTPUT);     // Set up pin "11" as an output
  pinMode(10, OUTPUT);     // Set up pin  "10" as an output
  pinMode(9, OUTPUT);      // Set up pin  "9" as an output
  pinMode(8, OUTPUT);      // Set up pin  "8" as an output
}

// Display numbers on each digit in a loop

void loop() {

  // Display 0 on first digit

  digitalWrite(11, HIGH);  // Set the pins to control the first digit
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(latch, LOW);                 // Latch the output
  shiftOut(data, cs, MSBFIRST, digits[0]);  // Shift out the digit pattern for 0
  digitalWrite(latch, HIGH);
  delay(5);  // 5 millisecond delay

  // Display 3 on second digit

  digitalWrite(11, HIGH);  // Set the pins to control the second digit
  digitalWrite(10, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(latch, LOW);                 // Latch the output
  shiftOut(data, cs, MSBFIRST, digits[3]);  // Shift out the digit pattern for 3
  digitalWrite(latch, HIGH);
  delay(5);  // 5 millisecond delay

  // Display 0 on third digit

  digitalWrite(11, HIGH);  // Set the pins to control the third digit
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(latch, LOW);                 // Latch the output
  shiftOut(data, cs, MSBFIRST, digits[0]);  // Shift out the digit pattern for 0
  digitalWrite(latch, HIGH);
  delay(5);  // 5 millisecond delay

  // Display 0 on fourth digit

  digitalWrite(11, LOW);  // Set the pins to control the fourth digit
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(latch, LOW);                 // Latch the output
  shiftOut(data, cs, MSBFIRST, digits[0]);  // Shift out the digit pattern for 0
  digitalWrite(latch, HIGH);
  delay(5);  // 5 millisecond delay
}
