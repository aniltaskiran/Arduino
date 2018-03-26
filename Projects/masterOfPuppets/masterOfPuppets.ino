
#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978

int notes;
int duration;
int buzzer = 12;

// This is for an Arduino with a speaker attached. Is simply plays in single-note form the song Master of Puppets.
// note durations: 4 = quarter note, 8 = eighth note, etc.:

int intro1[] = {NOTE_E3, 0, NOTE_D4, NOTE_CS4, NOTE_C4};
int intro1NoteDurations[] = {4, 2, 4, 4, 1 };
int intro1Count = 5;


int intro2[] = {NOTE_E3, NOTE_E3, NOTE_E4, NOTE_E3, NOTE_E3, NOTE_DS4, NOTE_E3, NOTE_E3, NOTE_D4, NOTE_CS4, NOTE_C4};
int intro2NoteDurations[] = {8, 8, 8, 8, 8, 8, 8, 8, 4, 4, 2};
int intro2Count = 11;

int intro3[] = {NOTE_E3, NOTE_E3, NOTE_B3, NOTE_E3, NOTE_E3, NOTE_AS3, NOTE_E3, NOTE_E3, NOTE_A3, NOTE_E3, NOTE_GS3, NOTE_E3, NOTE_G3, NOTE_E3, NOTE_FS3, NOTE_E3};
int intro3NoteDurations[] = {8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,};
int intro3Count = 16;

int preverse1[] = {NOTE_E3, NOTE_F3, NOTE_B3, NOTE_E3, NOTE_F3, NOTE_C4, NOTE_E3, NOTE_F3, NOTE_CS4, NOTE_E3, NOTE_F3, NOTE_C4, NOTE_E3, NOTE_F3, NOTE_B3, NOTE_B3};
int preverse1NoteDurations[] = {8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, };
int preverse1Count = 16;

int preverse2[] = {NOTE_E3, NOTE_F3, NOTE_B3, NOTE_E3, NOTE_F3, NOTE_C4, NOTE_E3, NOTE_F3, NOTE_CS4, NOTE_E3, NOTE_F3, NOTE_C4, NOTE_E3, NOTE_F3, NOTE_B3, 0};
int preverse2NoteDurations[] = {8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, };
int preverse2Count =  16;

int preverse3[] = {NOTE_E3, NOTE_F3, NOTE_B3, NOTE_E3, NOTE_F3, NOTE_C4, NOTE_E3, NOTE_F3, NOTE_G3, NOTE_FS3, NOTE_E3, NOTE_G3, NOTE_FS3, NOTE_E3, NOTE_G3, NOTE_FS3};
int preverse3NoteDurations[] = {8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, };
int preverse3Count = 16;

int endIntro[] = {NOTE_G3, NOTE_FS3, NOTE_E3, NOTE_G3, NOTE_FS3, NOTE_E3, NOTE_G3, NOTE_FS3, NOTE_E3, NOTE_DS4, NOTE_A5, NOTE_E3, NOTE_DS4, NOTE_A5, NOTE_E3, NOTE_DS4, NOTE_A5, NOTE_E3, NOTE_DS4, NOTE_A5, NOTE_E3, NOTE_DS4, NOTE_A5};
int endIntroNoteDurations[] = { 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 2 };
int endIntroCount = 23;

int eightVampE[]{ NOTE_E3, NOTE_E3, NOTE_E3, NOTE_E3, NOTE_E3, NOTE_E3, NOTE_E3, NOTE_E3, };
int eightVampENoteDurations[] = { 8, 8, 8, 8, 8, 8, 8, 8,  };
int eightVampECount = 8;

int verse1[] { 0, NOTE_G3, NOTE_A3, 0, NOTE_AS3, NOTE_A3, NOTE_G3, NOTE_A3};
int verse1NoteDurations[] { 8, 8, 8, 8, 8, 8, 8, 8};
int verse1Count = 8;

int verse2[] { NOTE_A3, 0, NOTE_A3, 0 };
int verse2NoteDurations[] {8, 8, 8, 8,};
int verse2Count = 4;

int eightVampFSharp[]{ NOTE_FS3, NOTE_FS3, NOTE_FS3, NOTE_FS3, NOTE_FS3, NOTE_FS3, NOTE_FS3, NOTE_FS3, };
int eightVampFSharpNoteDurations[]{ 8, 8, 8, 8, 8, 8, 8, 8, };
int eightVampFSharpCount = 8;

void playInput(int notes[], int durations[], int count){
  
  int pulledCount = sizeof(durations)/sizeof(int);
  
  for (int thisNote = 0; thisNote < count; thisNote++) {
    int noteDuration = 1000 / durations[thisNote];
    tone(buzzer, notes[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(buzzer);
  }
  
}


void setup() {

  //intro 
  

  playInput(intro1, intro1NoteDurations, intro1Count);

  playInput(intro2, intro2NoteDurations, intro2Count);

  playInput(intro3, intro3NoteDurations, intro3Count);

  playInput(intro2, intro2NoteDurations, intro2Count);

  playInput(intro3, intro3NoteDurations, intro3Count);

  playInput(preverse1, preverse1NoteDurations, preverse1Count);

  playInput(preverse2, preverse2NoteDurations, preverse2Count);

  playInput(preverse1, preverse1NoteDurations, preverse1Count);

  playInput(preverse3, preverse3NoteDurations, preverse3Count);

  playInput(endIntro, endIntroNoteDurations, endIntroCount);
  


  //verse 1
  
  playInput(eightVampE, eightVampENoteDurations, eightVampECount); 
  
  playInput(verse1, verse1NoteDurations, verse1Count);
  
  playInput(eightVampE, eightVampENoteDurations, eightVampECount); 
  
  playInput(verse2, verse2NoteDurations, verse2Count);


  playInput(eightVampE, eightVampENoteDurations, eightVampECount); 
  
  playInput(verse1, verse1NoteDurations, verse1Count);
  
  playInput(eightVampE, eightVampENoteDurations, eightVampECount); 
  
  playInput(verse2, verse2NoteDurations, verse2Count);



  
  playInput(eightVampFSharp, eightVampFSharp, eightVampFSharpCount);

  
  noTone(buzzer);
}

void loop() {
  // no need to repeat the melody.
}
