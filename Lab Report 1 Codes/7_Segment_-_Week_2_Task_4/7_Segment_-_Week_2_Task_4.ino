int A = 7;
int B = 8;
int C = 9;
int D = 10;
int E = 11;
int F = 12;
int G = 13;

int myPins[] = { A, B, C, D, E, F, G };

int Zero[] = { 1, 1, 1, 1, 1, 1, 0 };
int One[] = { 0, 1, 1, 0, 0, 0, 0 };
int Two[] = { 1, 1, 0, 1, 1, 0, 1 };
int Three[] = { 1, 1, 1, 1, 0, 0, 1 };
int Four[] = { 0, 1, 1, 0, 0, 1, 1 };
int Five[] = { 1, 0, 1, 1, 0, 1, 1 };
int Six[] = { 1, 0, 1, 1, 1, 1, 1 };
int Seven[] = { 1, 1, 1, 0, 0, 0, 0 };
int Eight[] = { 1, 1, 1, 1, 1, 1, 1 };
int Nine[] = { 1, 1, 1, 1, 0, 1, 1 };

void setup(void) {
  for (int i = 6; i < 14; i++) {
    pinMode(i, OUTPUT);
  }
}

int time = 500;

void zero() {
  for (int j = 0; j < 7; j++) {
    digitalWrite(myPins[j], Zero[j]);
  }
}

void one() {
  for (int j = 0; j < 7; j++) {
    digitalWrite(myPins[j], One[j]);
  }
}

void two() {
  for (int j = 0; j < 7; j++) {
    digitalWrite(myPins[j], Two[j]);
  }
}

void three() {
  for (int j = 0; j < 7; j++) {
    digitalWrite(myPins[j], Three[j]);
  }
}

void four() {
  for (int j = 0; j < 7; j++) {
    digitalWrite(myPins[j], Four[j]);
  }
}

void five() {
  for (int j = 0; j < 7; j++) {
    digitalWrite(myPins[j], Five[j]);
  }
}

void six() {
  for (int j = 0; j < 7; j++) {
    digitalWrite(myPins[j], Six[j]);
  }
}

void seven() {
  for (int j = 0; j < 7; j++) {
    digitalWrite(myPins[j], Seven[j]);
  }
}

void eight() {
  for (int j = 0; j < 7; j++) {
    digitalWrite(myPins[j], Eight[j]);
  }
}

void nine() {
  for (int j = 0; j < 7; j++) {
    digitalWrite(myPins[j], Nine[j]);
  }
}

void loop() {
  zero();
  delay(time);

  one();
  delay(time);

  two();
  delay(time);

  three();
  delay(time);

  four();
  delay(time);

  five();
  delay(time);

  six();
  delay(time);

  seven();
  delay(time);

  eight();
  delay(time);

  nine();
  delay(time);
}
