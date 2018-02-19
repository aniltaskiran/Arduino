#include <Servo.h>
Servo myservo;

// pot 0.analog girişte
int potpin = 0;
int val;

void setup(){
// servo 9. analog çıkışta
myservo.attach(9);
}

void loop(){
  
val = analogRead(potpin);  
// pot en düşük 0 en yüksek 1023 alır
// servo en düşük 0 en yüksek 180    
val = map(val, 0, 1023, 0, 180); 
                
myservo.write(val);    
         
delay(15);      
}
