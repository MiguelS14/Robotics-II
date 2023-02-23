// Main
#include "Led.h"

Led Red(13);

void setup(){
Red.init();
}

void loop(){
Red.on();
delay(1000);
Red.off();
delay(1000);

}