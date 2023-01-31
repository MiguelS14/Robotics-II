int A = 13;
int B = 12;
int C = 11;
int D = 10;
int E = 9;
int F = 8;
int G = 7;
int H = 6;


void setup(void)
{
 for (int i=6; i<14; i++){
  pinMode(i, OUTPUT);
}
}

int time = 500;
void loop(){
  
  //Zero
  digitalWrite(A, 0);
  digitalWrite(B, 1);
  digitalWrite(C, 1);
  digitalWrite(D, 1);
  digitalWrite(E, 1);
  digitalWrite(F, 1);
  digitalWrite(G, 1);
  digitalWrite(H, 0);
  delay(time);
  
  //One
  digitalWrite(A, 0);
  digitalWrite(B, 0);
  digitalWrite(C, 0);
  digitalWrite(D, 1);
  digitalWrite(E, 0);
  digitalWrite(F, 0);
  digitalWrite(G, 1);
  digitalWrite(H, 0);
  delay(time);
  
  //Two
  digitalWrite(A, 1);
  digitalWrite(B, 0);
  digitalWrite(C, 1);
  digitalWrite(D, 1);
  digitalWrite(E, 1);
  digitalWrite(F, 1);
  digitalWrite(G, 0);
  digitalWrite(H, 0);
  delay(time);
  
  //Three
  digitalWrite(A, 1);
  digitalWrite(B, 0);
  digitalWrite(C, 1);
  digitalWrite(D, 1);
  digitalWrite(E, 0);
  digitalWrite(F, 1);
  digitalWrite(G, 1);
  digitalWrite(H, 0);
  delay(time);
  
  //Four
  digitalWrite(A, 1);
  digitalWrite(B, 1);
  digitalWrite(C, 0);
  digitalWrite(D, 1);
  digitalWrite(E, 0);
  digitalWrite(F, 0);
  digitalWrite(G, 1);
  digitalWrite(H, 0);
  delay(time);
  
  //Five
  digitalWrite(A, 1);
  digitalWrite(B, 1);
  digitalWrite(C, 1);
  digitalWrite(D, 0);
  digitalWrite(E, 0);
  digitalWrite(F, 1);
  digitalWrite(G, 1);
  digitalWrite(H, 0);
  delay(time);
  
  //Six
  digitalWrite(A, 1);
  digitalWrite(B, 1);
  digitalWrite(C, 1);
  digitalWrite(D, 0);
  digitalWrite(E, 1);
  digitalWrite(F, 1);
  digitalWrite(G, 1);
  digitalWrite(H, 0);
  delay(time);
  
  //Seven
  digitalWrite(A, 0);
  digitalWrite(B, 0);
  digitalWrite(C, 1);
  digitalWrite(D, 1);
  digitalWrite(E, 0);
  digitalWrite(F, 0);
  digitalWrite(G, 1);
  digitalWrite(H, 0);
  delay(time);
  
  //Eight
  digitalWrite(A, 1);
  digitalWrite(B, 1);
  digitalWrite(C, 1);
  digitalWrite(D, 1);
  digitalWrite(E, 1);
  digitalWrite(F, 1);
  digitalWrite(G, 1);
  digitalWrite(H, 0);
  delay(time);
  
  //Nine
  digitalWrite(A, 1);
  digitalWrite(B, 1);
  digitalWrite(C, 1);
  digitalWrite(D, 1);
  digitalWrite(E, 0);
  digitalWrite(F, 1);
  digitalWrite(G, 1);
  digitalWrite(H, 0);
  delay(time);

}
