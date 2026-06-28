void setup() {
  pinMode(D0, INPUT);
  pinMode(D1, OUTPUT);
  pinMode(TX, OUTPUT);
  pinMode(RX, OUTPUT);
  pinMode(D13, OUTPUT);
  pinMode(D14, OUTPUT);
    if (digitalRead(D0) == LOW) {
    digitalWrite(D1, HIGH);
  } else if (digitalRead(D0) == HIGH) {
    digitalWrite(TX, HIGH);
    digitalWrite(RX, HIGH);
  }
  if (analogRead(A0) > 85) {
    digitalWrite(RX, LOW);
    digitalWrite(D13, HIGH);
  }
  for (int count=0 ; count<3 ; count++) {
    delay(500);
    digitalWrite(D14, HIGH);
    delay(500);
    digitalWrite(D14, LOW);
  }

}

void loop() {
    delay(1000);

}