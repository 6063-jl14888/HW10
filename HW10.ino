void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);

}

void loop() {
  int p2v = (millis() / 10000) % 6+2;
  int p3v = (millis() / 10000) % 6+2;
  int p4v = (millis() / 10000) % 6+2;
  int p5v = (millis() / 10000) % 6+2;
  int p6v = (millis() / 10000) % 6+2;
  int p7v = (millis() / 10000) % 6+2;

  for (int i = 2; i <= 7; i++) {
    if (i == p2v || i == p3v || i == p4v || i == p5v || i == p6v || i == p7v) {
      digitalWrite(i, HIGH);
    } else {
      digitalWrite(i, LOW);
    }
  }
}