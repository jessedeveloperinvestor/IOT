void setup() {
  pinMode(10, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  int valurRcv;
  if(Serial.available()) {
    valueRcv = Serial.read();
    if (valueRcv == '0') {
      digitalWrite(10, LOW);
    } else {
      digitalWrite(10, HIGH);
    }
  }
}
