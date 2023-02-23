// Interface or Header

#ifndef Segment_H
#define Segment_H

#include<Arduino.h>

class Seg{

private:
int* pins;
Seg(){};
public:

Seg (int pins[7]);

void init();
void display();
};


#endif