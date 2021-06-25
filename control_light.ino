void setup() {
  pinMode(10, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  int valorRecebido;
  int luz = analogRead(1);
  Serial.println(luz);
  delay(500);
  valorRecebido = Serial.read();
  if (valorRecebido == '0') {
    digitalWrite(10, LOW);
    } else {
      digitalWrite(10, HIGH)
      }
}
