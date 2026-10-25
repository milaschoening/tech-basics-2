# 13.10.2026
## Introduction to Physical Computing
Inside the Starter Kit:
- Arduino UNO: open-source platform for prototyping electronic projects using easy-to-use hardware and software
- Microcontroller: small, self-contained computer system on a single chip that controls electronic components
- Breadboard: used to build and test electronic circuits without soldering
- Jumper wires: wires with female and/or male connectors, used to connect components
- LED (Light Emitting Diode): long leg is positive (+) and short leg is negative (-)
Software:
- Arduino IDE, used to write and upload code to the Arduino

## Exercise: Blinking LED 
- connected an LED to pin 13 and GND
- used pinMode(), digitalWrite() and delay() to control the LED
- experimented with the delay value to change the blinking speed

## Code:
void setup() {
  pinMode(13, OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(13, HIGH); // on - 5v
  delay(1000); // 1000 milisecond

  digitalWrite(13, LOW); // off - 0v
  delay(1000); // 1000 milisecond
  
  // put your main code here, to run repeatedly:
