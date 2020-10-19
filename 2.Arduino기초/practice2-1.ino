void setup() {
  Serial.begin(9600);
  pinMode(7, INPUT);
  pinMode(8, OUTPUT); 
}

void loop() {
    int read_val = digitalRead(7);
    Serial.println(read_val);
    if(read_val == HIGH){
      digitalWrite(8, HIGH);
    }
    else{
      digitalWrite(8, LOW);
    }
  }
