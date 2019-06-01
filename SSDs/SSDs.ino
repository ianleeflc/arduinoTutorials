//// shift LEDs
//int latchPin=11;
//int clockPin=9;
//int dataPin=12;
//
//byte leds=0;
//
//void setup()
//{
//  pinMode(latchPin,OUTPUT);
//  pinMode(dataPin,OUTPUT);
//  pinMode(clockPin,OUTPUT);
//}
//
//void loop() 
//{
//  leds=0;
//  updateShiftRegister();
//  delay(500);
//  for(int i=0;i<8;i++)
//    {
//      bitSet(leds,i); // set a bit to 1 in the byte
//      updateShiftRegister();
//      delay(500);
//    }
//}
//
//void updateShiftRegister()
//{
//  digitalWrite(latchPin,LOW); // disable latch/pass
//  shiftOut(dataPin,clockPin,LSBFIRST,leds);
//  digitalWrite(latchPin,HIGH); // rising edge latches/passes data through
//}

//// shift LEDs not using bitSet()
//
//int latchPin=11;
//int clockPin=9;
//int dataPin=12;
//
//byte leds=0x01; // 0x indicates a HEX number. 0x01 is actually 0000 0001 in binary
//
//void setup()
//{
//  pinMode(latchPin,OUTPUT);
//  pinMode(dataPin,OUTPUT);
//  pinMode(clockPin,OUTPUT);
//}
//
//void loop() 
//{
//  leds=0x01;
//  updateShiftRegister();
//  delay(500);
//  for(int i=0;i<8;i++)
//    {
//      leds=leds<<1; // 'left shift' the '1' in the byte
//      updateShiftRegister();
//      delay(500);
//    }
//}
//
//void updateShiftRegister()
//{
//  digitalWrite(latchPin,LOW); // disable latch/pass
//  shiftOut(dataPin,clockPin,LSBFIRST,leds);
//  digitalWrite(latchPin,HIGH); // rising edge latches/passes data through
//}


//// SSD, single
//int latchPin=11;
//int clockPin=9;
//int dataPin=12;
//
//byte SSDs=0x7f; // in binary, it is 0111 1111, which only turns off G, will display 0 
//
//void setup()
//{
//  pinMode(latchPin,OUTPUT);
//  pinMode(dataPin,OUTPUT);
//  pinMode(clockPin,OUTPUT);
//}
//
//void loop() 
//{
//  updateShiftRegister();
//  delay(500);
//}
//
//void updateShiftRegister()
//{
//  digitalWrite(latchPin,LOW); // disable latch/pass
//  shiftOut(dataPin,clockPin,MSBFIRST,SSDs);
//  digitalWrite(latchPin,HIGH); // rising edge latches/passes data through
//}

//// SSD, single, counts
//int latchPin=11;
//int clockPin=9;
//int dataPin=12;
//
//byte SSDs=0x7E; // in binary, it is 0111 1111, which only turns off G, will display 0 
//
//void setup()
//{
//  pinMode(latchPin,OUTPUT);
//  pinMode(dataPin,OUTPUT);
//  pinMode(clockPin,OUTPUT);
//}
//
//void loop() 
//{
//  SSDs=0x0C; //00001100, 1
//  updateShiftRegister();
//  delay(500);
//  SSDs=0xB6; //10110110, 2
//  updateShiftRegister();
//  delay(500);
//  SSDs=0x9E; //10011110, 3
//  updateShiftRegister();
//  delay(500);
//  SSDs=0xCC; //11001100, 4
//  updateShiftRegister();
//  delay(500);
//  SSDs=0xDA; //11011010, 5
//  updateShiftRegister();
//  delay(500);
//  SSDs=0xFA; //11111010, 6
//  updateShiftRegister();
//  delay(500);
//  SSDs=0x0E; //00001110, 7
//  updateShiftRegister();
//  delay(500);
//  SSDs=0xFE; //11111110, 8
//  updateShiftRegister();
//  delay(500);
//  SSDs=0xDE; // 11011110, 9
//  updateShiftRegister();
//  delay(500);
//  SSDs=0x7E; // 01111110, 0
//  updateShiftRegister();
//  delay(500);
//}
//
//void updateShiftRegister()
//{
//  digitalWrite(latchPin,LOW); // disable latch/pass
//  shiftOut(dataPin,clockPin,MSBFIRST,SSDs);
//  digitalWrite(latchPin,HIGH); // rising edge latches/passes data through
//}

//// SSD, multiple, initial code. If delay is added, can see ghost numbers, blurring.
//// If delay is removed, it becomes 9201 instead of 2019. Bad
//
//int latchPin=11;
//int clockPin=9;
//int dataPin=12;
//int ssd_6_DIG4=7;
//int ssd_8_DIG3=6;
//int ssd_9_DIG2=5;
//int ssd_12_DIG1=4;
//
//byte SSDs=0x7E; // in binary, it is 0111 1111, which only turns off G, will display 0 
//
//void setup()
//{
//  pinMode(latchPin,OUTPUT);
//  pinMode(dataPin,OUTPUT);
//  pinMode(clockPin,OUTPUT);
//  pinMode(ssd_6_DIG4,OUTPUT);
//  pinMode(ssd_8_DIG3,OUTPUT);
//  pinMode(ssd_9_DIG2,OUTPUT);
//  pinMode(ssd_12_DIG1,OUTPUT);  
//}
//
//void loop() 
//{  
//  digitalWrite(ssd_6_DIG4,LOW);
//  digitalWrite(ssd_8_DIG3,HIGH);
//  digitalWrite(ssd_9_DIG2,HIGH);
//  digitalWrite(ssd_12_DIG1,HIGH);
//  SSDs=0xDE; // 11011110, 9
//  updateShiftRegister();
//  delay(2);
//
//  digitalWrite(ssd_6_DIG4,HIGH);
//  digitalWrite(ssd_8_DIG3,LOW);
//  digitalWrite(ssd_9_DIG2,HIGH);
//  digitalWrite(ssd_12_DIG1,HIGH);
//  SSDs=0x0C; //00001100, 1
//  updateShiftRegister();
//  delay(2);
////
//
//  digitalWrite(ssd_6_DIG4,HIGH);
//  digitalWrite(ssd_8_DIG3,HIGH);
//  digitalWrite(ssd_9_DIG2,LOW);
//  digitalWrite(ssd_12_DIG1,HIGH);
//  SSDs=0x7E; // 01111110, 0
//  updateShiftRegister();
//  delay(2);
//
//  digitalWrite(ssd_6_DIG4,HIGH);
//  digitalWrite(ssd_8_DIG3,HIGH);
//  digitalWrite(ssd_9_DIG2,HIGH);
//  digitalWrite(ssd_12_DIG1,LOW);
//  SSDs=0xB6; //10110110, 2
//  updateShiftRegister();
//  delay(2);
//}
//
//void updateShiftRegister()
//{
//  digitalWrite(latchPin,LOW); // disable latch/pass
//  shiftOut(dataPin,clockPin,MSBFIRST,SSDs);
//  digitalWrite(latchPin,HIGH); // rising edge latches/passes data through
//}

// SSD, multiple, problem solved
int latchPin=11;
int clockPin=9;
int dataPin=12;
int ssd_6_DIG4=7;
int ssd_8_DIG3=6;
int ssd_9_DIG2=5;
int ssd_12_DIG1=4;

byte SSDs=0x7E; // in binary, it is 0111 1110, which only turns off G, will display 0 

void setup()
{
  pinMode(latchPin,OUTPUT);
  pinMode(dataPin,OUTPUT);
  pinMode(clockPin,OUTPUT);
  pinMode(ssd_6_DIG4,OUTPUT);
  pinMode(ssd_8_DIG3,OUTPUT);
  pinMode(ssd_9_DIG2,OUTPUT);
  pinMode(ssd_12_DIG1,OUTPUT);  
}

void loop() 
{  
  SSDs=0xDE; // 11011110, 9
  updateShiftRegister();
  digitalWrite(ssd_6_DIG4,LOW);
  digitalWrite(ssd_8_DIG3,HIGH);
  digitalWrite(ssd_9_DIG2,HIGH);
  digitalWrite(ssd_12_DIG1,HIGH);

  SSDs=0x0C; //00001100, 1
  updateShiftRegister();
  digitalWrite(ssd_6_DIG4,HIGH);
  digitalWrite(ssd_8_DIG3,LOW);
  digitalWrite(ssd_9_DIG2,HIGH);
  digitalWrite(ssd_12_DIG1,HIGH);
    
  SSDs=0x7E; // 01111110, 0
  updateShiftRegister();
  digitalWrite(ssd_6_DIG4,HIGH);
  digitalWrite(ssd_8_DIG3,HIGH);
  digitalWrite(ssd_9_DIG2,LOW);
  digitalWrite(ssd_12_DIG1,HIGH);

  SSDs=0xB6; //10110110, 2
  updateShiftRegister();
  digitalWrite(ssd_6_DIG4,HIGH);
  digitalWrite(ssd_8_DIG3,HIGH);
  digitalWrite(ssd_9_DIG2,HIGH);
  digitalWrite(ssd_12_DIG1,LOW);
}

void updateShiftRegister()
{
  digitalWrite(latchPin,LOW); // disable latch/pass
  shiftOut(dataPin,clockPin,MSBFIRST,SSDs);
  digitalWrite(latchPin,HIGH); // rising edge latches/passes data through
}













