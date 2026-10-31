# 27.10.2026
### Class Notes:
- *PWM (Pulse-Width Modulation)*: way to control power by switching a signal on and off very quickly, e.g. used to dim LEDs
- Duty Cycle: how long the signal stays on during one cycle
- Oscilloscope: device that measures voltage and displays it as a graph
- Analog vs. digital signals: analog signals are continuous, while digital signals have seperate states (0 and 1)
  -> digitalRead(): reads a digital input (HIGH or LOW)
  -> analogRead(): reads an analog input and returns a value between 0 and 1023
- ADC: converts an analog signal into a digital value
- Tilt switch: detects when an object is tilted
- Potentiometer: adjustable resistor , often used to control volume
- Photoresistor (LDR): a light-sensitive resistor, its resistance decreases when more light hits it
- INPUT_PULLUP: uses the Arduino's internal pull-up resistor to avoid unstable input readings
- Serial Monitor: displays information from the Arduino, we used: serial.print() and serial.println()
- Baud rate: communication speed between devices (we used 9600 bps)

### Exercises:
1. Fade in and fade out
2. DigitalRead() with Tilt Switch
3. AnalogRead() with Potentiometer
<img width="2216" height="2954" alt="potentiometer" src="https://github.com/user-attachments/assets/46528f84-5c4c-41d0-a399-5867a9568d62" />

4. Serial Input
5. Photoresistor
<img width="2284" height="3045" alt="photoresistor" src="https://github.com/user-attachments/assets/d6b634c8-87d3-4f1f-a551-ab428323f7fa" />
