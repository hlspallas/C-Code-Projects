
//Hunter Spallas
//04-2020
//Arduino Blinking code



#include <stdio.h>                  //Include all neccesary libraries
#include <stdlib.h>

void setup(){

pinMode(LED_BUILTIN,OUTPUT);        //LED is the built-in LED on the Arduino board
Serial.begin(9600);                 //Data stream on Arduino
}


float time;                         //Declaration of all variables
float time2;
int i=0;
float A;
float B;
float c;

void loop(){
while(i<20){                        //Go through a stage of blinking for 20 times
    A = millis() / 1000.00;         //Convert to seconds from milliseconds


    digitalWrite(LED_BUILTIN,HIGH);
    delay(random(50,1000));         //Creates a random delay between every LED blink

    serial.print("Total Time Elapsed:  ");
    time = A;                       //Initializes time once the LED is turned on
    serial.println(time,3);         //Prints time to three decimal points

    digitalWrite(LED_BUILTIN,LOW);  //Turn off the LED
    delay(random(50,1000));

    B = millis() / 1000.00;

    c = B-A;                        //Measures the time between turning the LED on and off

    time2 = c;

    serial.print("Blink Time Difference:  ");       //Prints the time differences to the serial port



}

}









