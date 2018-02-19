

// INPUT: Potansiyometre 5V ve GND pinlerine bağlı olmalıdır
int potPin = 0; // output pinini Analog 0'a bağlı
int potVal = 0; // başlangıç değerimiz 0 olsun

// OUTPUT: 9-11, the Pulse-width Modulation (PWM) pinlerine bağlı
// LED's gnd boarddaki GND
int redPin = 9;   // Red LED
int grnPin = 10;  // Green LED
int bluPin = 11;  // Blue LED

int redVal = 0;   // Başlangıç değerlerimiz
int grnVal = 0;
int bluVal = 0;

void setup(){
  
  pinMode(redPin, OUTPUT);   // Pinleri output olarak göstermeliyiz
  pinMode(grnPin, OUTPUT);   
  pinMode(bluPin, OUTPUT); 
}


void loop(){
  
  potVal = analogRead(potPin);   // analogRead methodu ile
                                 // potansyiometredeki değerimizi okuyoruz
                                 // pot değer aralığı 0-1023'tür
                                 // 3e bölüp değerleri inceliyoruz.
                                 
  if (potVal < 341)  // En düşük aralık (0-340)
  {                  
    potVal = (potVal * 3) / 4; //0-255 aralığına çeviriyoruz

    redVal = 256 - potVal;  // Yeşilin bütünleyeni
    grnVal = potVal;        // Yeşil okuduğumuz değere karşılık geliyor
    bluVal = 1;             // ilk aralıkta mavi değeri kapalı
  }
  else if (potVal < 682) // Ortadaki aralık (341-681)
  {
    potVal = ( (potVal-341) * 3) / 4; //0-255 aralığına çeviriyoruz

    redVal = 1;            // Kırmızı değeri kapalı
    grnVal = 256 - potVal; // Mavinin bütünleyeni
    bluVal = potVal;       // Mavi okunan değer
  }
  else  // Son aralık (682-1023)
  {
    potVal = ( (potVal-683) * 3) / 4; //0-255 aralığına çeviriyoruz

    redVal = potVal;       // Kırmızı okunan değer
    grnVal = 1;            // Yeşil değeri kapalı
    bluVal = 256 - potVal; // Kırmızının bütünleyeni
  }
  analogWrite(redPin, redVal);   // Değerleri yazdırıyoruz
  analogWrite(grnPin, grnVal); 
  analogWrite(bluPin, bluVal);  
}
