  int ledPins[] = {13, 12, 11, 10, 9, 8, 7, 6}; // LED pins
  int ledCount = 8;
  
  
  const byte leftButton = 4;
  byte leftButtonState;
  byte leftLastState = LOW;
  
  const byte rightButton = 5;
  byte rightButtonState;
  byte rightLastState = LOW;
  
  bool isToTheLeft = true;
  

  void setup(){
     pinMode(leftButton, INPUT_PULLUP);
     pinMode(rightButton, INPUT_PULLUP);
     for(int i = 0; i < ledCount; i++){
         pinMode(ledPins[i], OUTPUT); 
     }
  }
  
  void loop(){
  checkButtonState(leftButton, leftButtonState, leftLastState);  
  checkButtonState(rightButton, rightButtonState, rightLastState);  
  blinkButtons(isToTheLeft);
  }
  
  void blinkButtons(bool isLeft){
    int blinkLed = 0;
     for(int i = 0; i < ledCount; i++){
        
  checkButtonState(leftButton, leftButtonState, leftLastState);  
  checkButtonState(rightButton, rightButtonState, rightLastState);
          if (isLeft != isToTheLeft ){
            break;
          }
        if (isLeft) {
          blinkLed = i;
        } else {
          blinkLed = ledCount - i - 1;
        }
        
         digitalWrite(ledPins[blinkLed], HIGH);
         delay(100);   
         digitalWrite(ledPins[blinkLed], LOW);
         delay(100);   
     }
  }
  
  void checkButtonState(byte button, byte buttonState, byte lastState){
      buttonState = digitalRead(button);
  
    if(buttonState && buttonState != lastState){
      if (button == leftButton){
        isToTheLeft = true;
      } else {
        isToTheLeft = false;
      } 
    }
    lastState = buttonState;
  }
