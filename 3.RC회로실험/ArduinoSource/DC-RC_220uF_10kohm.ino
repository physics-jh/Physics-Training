int V0 = 8;

void setup(){
   Serial.begin(9600);
   pinMode(V0,OUTPUT);
   digitalWrite(V0, LOW);
   }
   
unsigned long start_time = millis();

void loop(){
  float read_V = analogRead(A0);
  float cal_V = read_V * 5/1023;
  unsigned long elapsed_time = millis() - start_time;
  digitalWrite(V0, HIGH);
  Serial.print(elapsed_time/1e3);
  Serial.print(",");
  Serial.println(cal_V);
  delay(100);
  if(cal_V >= 5*0.7){
    Serial.end();
  }
  
}
