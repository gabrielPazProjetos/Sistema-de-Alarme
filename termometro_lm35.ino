int sensor = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int leitura = analogRead(sensor);
  float temperatura = leitura * 0.488;
  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.println(" °C");
  delay(1000);
}
