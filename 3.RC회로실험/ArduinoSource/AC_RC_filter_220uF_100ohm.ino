float pi = 3.141592;
float freq_L = 1.0;
float freq_H[] = {20,40,60,80,100};

void setup() {
Serial.begin(9600);
  for(float t=0.01; t<3; t+=0.01){
    float V_in = 1.0 + 0.8*sin(2.0*pi*freq_L*t) + 0.2*sin(2.0*pi*freq_H[3]*t);
    int V_IN = V_in*(255/2.0);
    analogWrite(3, V_IN);

    
    float V_f = 2.0*analogRead(A0)/1023;
    Serial.print(V_in);
    Serial.print(",");
    Serial.println(V_f);
  }
}

void loop() {

}
