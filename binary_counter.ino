//binary counter program
//lights up leds in binary count sequence, from 0 to 7
//Alexander Minser, 10/14/2017


//gloabl variables
int mostSigBit = 7;
int midSigBit = 4;
int lowSigBit = 2;

void setup() {
  //setup output pins for LEDs
  pinMode(mostSigBit, OUTPUT);
  pinMode(midSigBit, OUTPUT);
  pinMode(lowSigBit, OUTPUT);

}

void loop() {
  digitalWrite(mostSigBit, LOW);
  digitalWrite(mostSigBit, LOW);
  digitalWrite(mostSigBit, LOW);
  int i;
  
  for (i = 0; i < 8; i++) {
    
  }

}





