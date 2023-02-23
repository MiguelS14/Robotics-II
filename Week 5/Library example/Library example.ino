class Led{

private:

int pin;


public:

Led(){};
Led(int pin){
this->pin = pin;

}
void init(){
pinMode(pin,OUTPUT);
}

void on(){
digitalWrite(pin,1);
}


void off(){
digitalWrite(pin,0);
}

};

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