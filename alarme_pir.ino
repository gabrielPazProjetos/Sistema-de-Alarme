int pirSensor = 2;
int alarme = 13;

void setup() {
  pinMode(pirSensor, INPUT);
  pinMode(alarme, OUTPUT);
  digitalWrite(alarme, LOW);
}

void loop() {
  int movimento = digitalRead(pirSensor);
  if (movimento == HIGH) {
    digitalWrite(alarme, HIGH);
    delay(5000);
    digitalWrite(alarme, LOW);
  }
  delay(100);
}
