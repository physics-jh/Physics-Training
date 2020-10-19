void setup() {
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void loop() {
    analogWrite(9,255);
    dealy(100);
    analogWrite(9,125);
    dealy(100);
    analogWrite(9,60);
    dealy(100);
    analogWrite(9,30);
  }
