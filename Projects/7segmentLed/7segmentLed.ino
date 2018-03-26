int A = 2;
int B = 3;
int C = 4;
int D = 5;
int E = 6;
int F = 7;
int G = 8;
int N = 9;


void setup() {               
  pinMode(A, OUTPUT); //Segmentde "A" kısmı
  pinMode(B, OUTPUT); //Segmentde "B" kısmı
  pinMode(C, OUTPUT); //Segmentde "C" kısmı
  pinMode(D, OUTPUT); //Segmentde "D" kısmı
  pinMode(E, OUTPUT); //Segmentde "E" kısmı
  pinMode(F, OUTPUT); //Segmentde "F" kısmı
  pinMode(G, OUTPUT); //Segmentde "G" kısmı
  pinMode(N, OUTPUT); //Segmentde "DP" kısmı (Nokta kısmı)
}

void loop(){
  for(int i=0; i<= 10;i++){
  printNumber(i);
  if (i % 2 == 0) {
    createDot();
  }
  delay(500);
  }
}

void printNumber(int number){
   switch(number){
   case 0 :
   // "0" Sayısını yazar.
   digitalWrite(A, 1);
   digitalWrite(B, 1);
   digitalWrite(C, 1);
   digitalWrite(D, 1);
   digitalWrite(E, 1);
   digitalWrite(F, 1);
   digitalWrite(G, 0);
   digitalWrite(N, 0);
   break;
   
   case 1:
   // "1" Sayısını yazar.
   digitalWrite(A, 0);
   digitalWrite(B, 1);
   digitalWrite(C, 1);
   digitalWrite(D, 0);
   digitalWrite(E, 0);
   digitalWrite(F, 0);
   digitalWrite(G, 0);
   digitalWrite(N, 0);
   break;
   
   case 2:
   // "2" Sayısını yazar.
   digitalWrite(A, 1);
   digitalWrite(B, 1);
   digitalWrite(C, 0);
   digitalWrite(D, 1);
   digitalWrite(E, 1);
   digitalWrite(F, 0);
   digitalWrite(G, 1);
   digitalWrite(N, 0);
   break;
   
   case 3:
   // "3" Sayısını yazar.
   digitalWrite(A, 1);
   digitalWrite(B, 1);
   digitalWrite(C, 1);
   digitalWrite(D, 1);
   digitalWrite(E, 0);
   digitalWrite(F, 0);
   digitalWrite(G, 1);
   digitalWrite(N, 0);
   break;
   
   
   case 4:
   // "4" Sayısını yazar.
   digitalWrite(A, 0);
   digitalWrite(B, 1);
   digitalWrite(C, 1);
   digitalWrite(D, 0);
   digitalWrite(E, 0);
   digitalWrite(F, 1);
   digitalWrite(G, 1);
   digitalWrite(N, 0);
   break;
   
   case 5:
   // "5" Sayısını yazar.
   digitalWrite(A, 1);
   digitalWrite(B, 0);
   digitalWrite(C, 1);
   digitalWrite(D, 1);
   digitalWrite(E, 0);
   digitalWrite(F, 1);
   digitalWrite(G, 1);
   digitalWrite(N, 0);
   break;
   
   case 6:
   // "6" Sayısını yazar.
   digitalWrite(A, 1);
   digitalWrite(B, 0);
   digitalWrite(C, 1);
   digitalWrite(D, 1);
   digitalWrite(E, 1);
   digitalWrite(F, 1);
   digitalWrite(G, 1);
   digitalWrite(N, 0);
   break;
    
   case 7:
   // "F" Sayısını yazar.
   digitalWrite(A, 1);
   digitalWrite(B, 1);
   digitalWrite(C, 1);
   digitalWrite(D, 0);
   digitalWrite(E, 0);
   digitalWrite(F, 0);
   digitalWrite(G, 0);
   digitalWrite(N, 0);
   break;
   
   case 8:
   // "8" Sayısını yazar.
   digitalWrite(A, 1);
   digitalWrite(B, 1);
   digitalWrite(C, 1);
   digitalWrite(D, 1);
   digitalWrite(E, 1);
   digitalWrite(F, 1);
   digitalWrite(G, 1);
   digitalWrite(N, 0);
   break;
   
   case 9:
   // "9" Sayısını yazar.
   digitalWrite(A, 1);
   digitalWrite(B, 1);
   digitalWrite(C, 1);
   digitalWrite(D, 0);
   digitalWrite(E, 0);
   digitalWrite(F, 1);
   digitalWrite(G, 1);
   digitalWrite(N, 0);
   break;
   case 10:
   //// Hiçbir şey yazmaz. 
  digitalWrite(2, 0);
  digitalWrite(B, 0);
  digitalWrite(C, 0);
  digitalWrite(D, 0);
  digitalWrite(E, 0);
  digitalWrite(F, 0);
  digitalWrite(G, 0);
  digitalWrite(N, 0);
  break;   
   }
}
void createDot(){
 // Sadece "nokta" yazar.
digitalWrite(N, 1); 
}

