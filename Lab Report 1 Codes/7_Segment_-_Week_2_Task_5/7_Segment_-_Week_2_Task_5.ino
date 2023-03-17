//7 Segment Count 0-9 V5

// intitiates an array of the pins of the 7 segment that classifies the letter of the 7 segment display as pins on the Arduino
int pins[] = { 7, 8, 9, 10, 11, 12, 13 };

// Initiates an array of the numbers of the 7 segment as a set of true and false outputs to display certain numbers
int zero[] = { 1, 1, 1, 1, 1, 1, 0 };
int one[] = { 0, 1, 1, 0, 0, 0, 0 };
int two[] = { 1, 1, 0, 1, 1, 0, 1 };
int three[] = { 1, 1, 1, 1, 0, 0, 1 };
int four[] = { 0, 1, 1, 0, 0, 1, 1 };
int five[] = { 1, 0, 1, 1, 0, 1, 1 };
int six[] = { 1, 0, 1, 1, 1, 1, 1 };
int seven[] = { 1, 1, 1, 0, 0, 0, 0 };
int eight[] = { 1, 1, 1, 1, 1, 1, 1 };
int nine[] = { 1, 1, 1, 0, 0, 1, 1 };

void setup() {

  // Initializes pin A to G as an output
  for (int i = 0; i <= 7; i++) {  // for loop
    pinMode(pins[i], OUTPUT);
  }
}

void Zero() {
  // Number 0
  for (int i = 0; i <= 7; i++) {
    digitalWrite(pins[i], zero[i]);
  }
}

void One() {
  // Number 1
  for (int i = 0; i <= 7; i++) {
    digitalWrite(pins[i], one[i]);
  }
}

void Two() {
  // Number 2
  for (int i = 0; i <= 7; i++) {
    digitalWrite(pins[i], two[i]);
  }
}

void Three() {
  // Number 3
  for (int i = 0; i <= 7; i++) {
    digitalWrite(pins[i], three[i]);
  }
}

void Four() {
  // Number 4
  for (int i = 0; i <= 7; i++) {
    digitalWrite(pins[i], four[i]);
  }
}

void Five() {
  // Number 5
  for (int i = 0; i <= 7; i++) {
    digitalWrite(pins[i], five[i]);
  }
}

void Six() {
  // Number 6
  for (int i = 0; i <= 7; i++) {
    digitalWrite(pins[i], six[i]);
  }
}

void Seven() {
  // Number 7
  for (int i = 0; i <= 7; i++) {
    digitalWrite(pins[i], seven[i]);
  }
}

void Eight() {
  // Number 8
  for (int i = 0; i <= 7; i++) {
    digitalWrite(pins[i], eight[i]);
  }
}

void Nine() {
  // Number 9
  for (int i = 0; i <= 7; i++) {
    digitalWrite(pins[i], nine[i]);
  }
}

void loop() {
  // Calls and intiates the codes of the following functions
  for (int i = 0; i <= 9; i++) {
    switch (i) {

      case 0:
        Zero();
        delay(1000);
        break;

      case 1:
        One();
        delay(1000);
        break;

      case 2:
        Two();
        delay(1000);
        break;

      case 3:
        Three();
        delay(1000);
        break;

      case 4:
        Four();
        delay(1000);
        break;

      case 5:
        Five();
        delay(1000);
        break;
      case 6:
        Six();
        delay(1000);
        break;
      case 7:
        Seven();
        delay(1000);
        break;
      case 8:
        Eight();
        delay(1000);
        break;
      case 9:
        Nine();
        delay(1000);
        break;
    }
  }
}
