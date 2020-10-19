void setup() {
  Serial.begin(9600);
  pinMode(8, OUTPUT);

}

void loop() {
  if(Serial.available()){
    char input = Serial.read();

    switch(input){
      case 'n':
        digitalWrite(8,HIGH);
        break;
  
      case 'f':
        digitalWrite(8,LOW);
        break;
      
      default:
        break;
    }
  }
}
