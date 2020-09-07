#include <stdio.h>
#include <stdlib.h>

void setup(){

pinMode(LED_BUILTIN,OUTPUT);        //LED is the built-in LED on the Arduino board
Serial.begin(9600);
}


float time;
float time2;
int i=0;
float A;
float B;
float c;

void loop(){
while(i<20){
    A = millis() / 1000.00;


    digitalWrite(LED_BUILTIN,HIGH);
    delay(random(50,1000));

    serial.print("Total Time Elapsed:  ");
    time = A;
    serial.println(time,3);

    digitalWrite(LED_BUILTIN,LOW);
    delay(random(50,1000));

    B = millis() / 1000.00;

    c = B-A;

    time2 = c;

    serial.print("Blink Time Difference:  ");



}

}









