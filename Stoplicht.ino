/*
  Button

 Turns on and off a light emitting diode(LED) connected to digital
 pin 13, when pressing a pushbutton attached to pin 2.


 The circuit:
 * LED attached from pin 13 to ground
 * pushbutton attached to pin 2 from +5V
 * 10K resistor attached to pin 2 from ground

 * Note: on most Arduinos there is already an LED on the board
 attached to pin 13.


 created 2005
 by DojoDave <http://www.0j0.org>
 modified 30 Aug 2011
 by Tom Igoe

 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/Button
 */

// constants won't change. They're used here to
// set pin numbers:
const int buttonPin = 2;     // the number of the pushbutton pin


const int ledRood =  13;      // the number of the LED pin
const int ledOranje =  12;
const int ledGroen =  11;
int knipperkut;

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledRood, OUTPUT);
  pinMode(ledOranje, OUTPUT);
  pinMode(ledGroen, OUTPUT);


  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:


    delay(2000);

    digitalWrite(ledGroen, HIGH);
    digitalWrite(ledOranje, LOW);
    digitalWrite(ledRood, LOW);

    delay(3000);
    digitalWrite(ledOranje, HIGH);
    digitalWrite(ledGroen, LOW);
    digitalWrite(ledRood, LOW);

    delay(2500);
    digitalWrite(ledOranje, LOW);
    digitalWrite(ledGroen, LOW);
    digitalWrite(ledRood, HIGH);

  }



  else {
    // turn LED off:
    digitalWrite(ledRood, HIGH);

  }
}
