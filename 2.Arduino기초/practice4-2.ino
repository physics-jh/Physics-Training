void setup() {
  int blue = 9;
}

void loop() {
  for(int i =0; i<255; i++){
    analogWrite(9,i);
    delay(10);
  }
}
