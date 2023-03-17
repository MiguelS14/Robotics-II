int A = 7;
int B = 8;
int C = 9;
int D = 10;
int E = 11;
int F = 12;
int G = 13;

int myPins[] = {A,B,C,D,E,F,G};

int Zero[] = {1,1,1,1,1,1,0};
int One[] = {0,1,1,0,0,0,0};
int Two[] = {1,1,0,1,1,0,1};
int Three[] = {1,1,1,1,0,0,1};
int Four[] = {0,1,1,0,0,1,1};
int Five[] = {1,0,1,1,0,1,1};
int Six[] = {1,0,1,1,1,1,1};
int Seven[] = {1,1,1,0,0,0,0};
int Eight[] = {1,1,1,1,1,1,1};
int Nine[] = {1,1,1,1,0,1,1};

void setup(void)
{
for (int i=6; i<14; i++){
 pinMode(i, OUTPUT);
}
}

int time = 500;
void loop(){
  
for (int j=0; j<7; j++){
digitalWrite(myPins[j],Zero[j]);
}
delay(time);
  
for (int j=0; j<7; j++){
digitalWrite(myPins[j],One[j]);
}
delay(time);
  
for (int j=0; j<7; j++){
digitalWrite(myPins[j],Two[j]);
}
delay(time);

for (int j=0; j<7; j++){
digitalWrite(myPins[j],Three[j]);
}
delay(time);
  
for (int j=0; j<7; j++){
digitalWrite(myPins[j],Four[j]);
}
delay(time);

for (int j=0; j<7; j++){
digitalWrite(myPins[j],Five[j]);
}
delay(time);

for (int j=0; j<7; j++){
digitalWrite(myPins[j],Six[j]);
}
delay(time);
  
for (int j=0; j<7; j++){
digitalWrite(myPins[j],Seven[j]);
}
delay(time);
  
for (int j=0; j<7; j++){
digitalWrite(myPins[j],Eight[j]);
}
delay(time);
  
for (int j=0; j<7; j++){
digitalWrite(myPins[j],Nine[j]);
}
delay(time);
}
