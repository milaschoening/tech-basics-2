
const int pot = A0;
const int led = 3; //PWM

int value = 0;
int brightness = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600); //open the serial port at 9600 bps
  delay(500);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Serial.println("Hello"); // print with new line 
  value = analogRead(pot);

  Serial.print("Pot:");
  Serial.println(value);

  brightness = map(value, 0, 1023, 0, 255);

  analogWrite(led, brightness);
}

