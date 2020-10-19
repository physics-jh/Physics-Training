void setup() {
  Serial.begin(9600);
}

void loop() {
    int read_val = analogRead(A0);
    Serial.println(read_val);
    delay(500);
}
