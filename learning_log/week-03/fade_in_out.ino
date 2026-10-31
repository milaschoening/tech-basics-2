void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  // fade in
  for (int i = 0; i <= 255; i += 5){
    analogWrite(3, i);
    delay(20);
  }

  // fade out
  for (int i = 255; i >= 0; i -= 5){
    analogWrite(3, i);
    delay(20);
  }
}
