
/*The simplest code for testing Arduino control over Non-addressable 
LED strips (not Neo-pixle) . Requires a single N-channel Mosfet
(just fades the green LEDs . . . if connected to green) . 
This is the proof of concept to know we can power these cheap 
strips if we need them. */

#define GREENPIN 10
#define FADESPEED 5 // make this higher to slow down
int potpin = 0;  // analog pin used to connect the potentiometer
int val;    // variable to read the value from the analog pin 

void setup() {
  // put your setup code here, to run once:
pinMode(GREENPIN, OUTPUT);
}

void loop() {
  val = analogRead(potpin);    // reads the value of the potentiometer (value between 0 and 1023)
  val = map(val, 0, 1023, 0, 255);     // scale it to choose a color
  analogWrite(GREENPIN, val);

/*
int g=0;
 for (g = 0; g < 256; g++) {
analogWrite(GREENPIN, g);
delay(FADESPEED);
} 
*/
}
