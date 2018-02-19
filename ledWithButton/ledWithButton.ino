 int buttonPin = 8;     
 int ledPin =  9;     

int buttonState = 0;

void setup() {
  pinMode(ledPin, OUTPUT);      
  pinMode(buttonPin, INPUT_PULLUP);   
}

void loop(){
  buttonState = digitalRead(buttonPin);

  if (buttonState == LOW) { 
      digitalWrite(ledPin, LOW);
    }else{
      digitalWrite(ledPin, HIGH);
    }    
  
}
