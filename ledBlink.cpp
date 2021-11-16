#include <iostream>
#include <wiringPi.h>
using namespace std;
int ledPin = 29; 
void setup(){
pinMode(ledPin,OUTPUT);
cout<<"Hello World" << endl;
}
void loop(){
digitalWrite(ledPin,HIGH);
delay(100);
digitalWrite(ledPin,LOW);
delay(100);
cout<<"Blink the LED" << endl;
}

int main(void)
{
if(wiringPiSetup()<0){
cout<<"setup wiring pi failed"<<endl;
return 1;
}
setup();
while(1){
loop();
}
return 0;
}