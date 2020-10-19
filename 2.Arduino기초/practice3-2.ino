int blue = 8;
void setup() {
  pinMode(blue, OUTPUT);
  Serial.begin(9600);
}

void loop() {
    int read_val = analogRead(A0);
    int intensity = map(read_val,0,1023,0,100);
    int Intensity = constrain(intensity,0,100);
    if(Intensity<30){
      digitalWrite(blue, HIGH);
    }
    else{
      digitalWrite(blue, LOW);
    }
    Serial.println(Intensity);
    delay(500);
}
