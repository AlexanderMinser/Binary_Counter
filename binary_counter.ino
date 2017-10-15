//binary counter program
//lights up leds in binary count sequence, from 0 to 7
//Alexander Minser, 10/14/2017


//gloabl variables
int mostSigBit = 7;
int midSigBit = 4;
int leastSigBit = 2;

void setup() {
  //setup output pins for LEDs
  pinMode(mostSigBit, OUTPUT);
  pinMode(midSigBit, OUTPUT);
  pinMode(leastSigBit, OUTPUT);

}

void loop() {
  digitalWrite(mostSigBit, LOW);
  digitalWrite(midSigBit, LOW);
  digitalWrite(leastSigBit, LOW);
  delay 3000;
  int i;
  int lastBit;  //stores bits to set HIGH/LOW in LEDs

  //loops through 0 to 7, setting LEDs to appropriate state 
  for (i = 0; i < 8; i++) {
    lastBit = i & 1;
    digitalWrite(leastSigBit, lastBit);
    lastBit = (i >> 1) & 1;
    digitalWrite(midSigBit, lastBit);
    lastBit = (i >> 2) & 1;
    digitalWrite(mostSigBit, lastBit);
  }

}





