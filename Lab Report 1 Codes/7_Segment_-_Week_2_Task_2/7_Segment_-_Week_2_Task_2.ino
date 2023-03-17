int A = 7;
int B = 8;
int C = 9;
int D = 10;
int E = 11;
int F = 12;
int G = 13;

void setup(void) {
  for (int i = 6; i < 14; i++) {
    pinMode(i, OUTPUT);
  }
}

int time = 500;
void loop() {

  //Zero
  digitalWrite(A, 1);
  digitalWrite(B, 1);
  digitalWrite(C, 1);
  digitalWrite(D, 1);
  digitalWrite(E, 1);
  digitalWrite(F, 1);
  digitalWrite(G, 0);
  delay(time);

  //One
  digitalWrite(A, 0);
  digitalWrite(B, 1);
  digitalWrite(C, 1);
  digitalWrite(D, 0);
  digitalWrite(E, 0);
  digitalWrite(F, 0);
  digitalWrite(G, 0);
  delay(time);

  //Two
  digitalWrite(A, 1);
  digitalWrite(B, 1);
  digitalWrite(C, 0);
  digitalWrite(D, 1);
  digitalWrite(E, 1);
  digitalWrite(F, 0);
  digitalWrite(G, 1);
  delay(time);

  //Three
  digitalWrite(A, 1);
  digitalWrite(B, 1);
  digitalWrite(C, 1);
  digitalWrite(D, 1);
  digitalWrite(E, 0);
  digitalWrite(F, 0);
  digitalWrite(G, 1);
  delay(time);

  //Four
  digitalWrite(A, 0);
  digitalWrite(B, 1);
  digitalWrite(C, 1);
  digitalWrite(D, 0);
  digitalWrite(E, 0);
  digitalWrite(F, 1);
  digitalWrite(G, 1);
  delay(time);

  //Five
  digitalWrite(A, 1);
  digitalWrite(B, 0);
  digitalWrite(C, 1);
  digitalWrite(D, 1);
  digitalWrite(E, 0);
  digitalWrite(F, 1);
  digitalWrite(G, 1);
  delay(time);

  //Six
  digitalWrite(A, 1);
  digitalWrite(B, 0);
  digitalWrite(C, 1);
  digitalWrite(D, 2);
  digitalWrite(E, 1);
  digitalWrite(F, 1);
  digitalWrite(G, 1);
  delay(time);

  //Seven
  digitalWrite(A, 1);
  digitalWrite(B, 1);
  digitalWrite(C, 1);
  digitalWrite(D, 0);
  digitalWrite(E, 0);
  digitalWrite(F, 0);
  digitalWrite(G, 0);
  delay(time);

  //Eight
  digitalWrite(A, 1);
  digitalWrite(B, 1);
  digitalWrite(C, 1);
  digitalWrite(D, 1);
  digitalWrite(E, 1);
  digitalWrite(F, 1);
  digitalWrite(G, 1);

  delay(time);

  //Nine
  digitalWrite(A, 1);
  digitalWrite(B, 1);
  digitalWrite(C, 1);
  digitalWrite(D, 0);
  digitalWrite(E, 0);
  digitalWrite(F, 1);
  digitalWrite(G, 1);
  delay(time);
}
