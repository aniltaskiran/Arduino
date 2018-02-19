int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
}

// sonsuza kadar dönen bir döngü
void loop() {
  digitalWrite(ledPin, HIGH);   // Ledi yak, pine 1 veya HIGH gönderiyoruz
  delay(1000);                  // 1 saniye 1000ms bekle
  digitalWrite(ledPin, LOW);    // Ledi yak, pine 1 veya HIGH gönderiyoruz
  delay(1000);                  // 1 saniye 1000ms bekle
}
