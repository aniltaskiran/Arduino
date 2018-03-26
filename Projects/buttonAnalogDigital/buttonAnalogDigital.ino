const byte ledPin = 9;
const byte Button = 8;

byte ButtonState;
byte lastState = LOW;
bool isDigital = false;

void setup() {

  pinMode(ledPin, OUTPUT);
  pinMode(Button, INPUT_PULLUP);
}

void loop() {
  checkButtonState();
  
  if (isDigital) {
  digitalWrite(ledPin, HIGH);  
  delay(250);                 
  digitalWrite(ledPin, LOW);   
  delay(250);    
  } else {
         for (int i=0; i <= 255; i++){
            checkButtonState();
      analogWrite(ledPin, i);
      delay(10);
   }  
  }
}
void checkButtonState(){
    ButtonState = digitalRead(Button);

  if(ButtonState && ButtonState != lastState){
    isDigital = !isDigital;
  } 
  lastState = ButtonState;
}


