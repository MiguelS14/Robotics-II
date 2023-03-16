// The goal of this program is to make use of a 7 Segment class that will 

 class SevenSegmentDisplay {  // Defines a new class called SevenSegmentDisplay

private:
  int *pins;  // Declares a private variable that is a pointer to an integer array

  SevenSegmentDisplay(){};  // Private constructor that does nothing
public:
  SevenSegmentDisplay(int pins[7]) {  // Public constructor that takes an integer array of length 7 as an argument
    this->pins = pins;                // Assigns the argument to the private variable
  }

  void init() {                    // Public method that sets the pins as output
    for (int i = 0; i < 8; i++) {  // Loops through the array of pins
      pinMode(pins[i], OUTPUT);    // Sets the pin mode to output
    }
  }

  void display(int num) {  // Public method that displays a number on the seven segment display
    int numbers[10][7] = { // Defines a 2D array that stores the binary representation of each digit from 0-9

    { 1, 1, 1, 1, 1, 1, 0 },
    { 0, 1, 1, 0, 0, 0, 0 },
    { 1, 1, 0, 1, 1, 0, 1 },
    { 1, 1, 1, 1, 0, 0, 1 },
    { 0, 1, 1, 0, 0, 1, 1 },
    { 1, 0, 1, 1, 0, 1, 1 },
    { 1, 0, 1, 1, 1, 1, 1 },
    { 1, 1, 1, 0, 0, 0, 0 },
    { 1, 1, 1, 1, 0, 1, 1 }

    };

    for (int i = 0; i < 7; i++) {              // Loops through each segment of the display
      digitalWrite(pins[i], numbers[num][i]);  // Sets the i-th segment to the i-th element of the binary representation of the input number
    }
  }
};

int my7pins[7]{ 2, 3, 4, 5, 6, 7, 8 };  // Defines an integer array that represents the pins connected to the seven segment display
SevenSegmentDisplay my7(my7pins);       // Creates an instance of the SevenSegmentDisplay class and initializes it with the pins

void setup() {
  my7.init();  // Initializes the SevenSegmentDisplay instance by setting the pins as output
}

void loop() {
  for (int i = 0; i < 10; ++i) {  // Loops through the numbers 0-9
    my7.display(i);               // Displays the i-th number on the seven segment display
    delay(1000);                  // Delays for 1 second (1000 milliseconds)
  }
}
