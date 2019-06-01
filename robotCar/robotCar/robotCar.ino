////Task 2, SR04 ultrasonic sensor starting example
//#include "SR04.h"
//#define TRIG_PIN 12 // change it to the pins on the robot car accordingly. 
//#define ECHO_PIN 11
//SR04 sr04 = SR04(ECHO_PIN,TRIG_PIN);
//long a;
//void setup() {
//   Serial.begin(9600);
//   delay(1000);
//}
//void loop() {
//   a=sr04.Distance();
//   Serial.print(a);
//   Serial.println("cm");
//   delay(1000);
//}

//// Task 3, the servo motor
//#include <Servo.h>
//Servo myservo;  // create servo object to control a servo
//// twelve servo objects can be created on most boards
//int pos = 0;    // variable to store the servo position
//void setup() {
//  myservo.attach(3);  // attaches the servo on pin 3 to the servo object
//}
//void loop() {
//  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
//    // in steps of 1 degree
//    myservo.write(pos);              // tell servo to go to position in variable 'pos'
//    delay(15);                       // waits 15ms for the servo to reach the position
//  }
//  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
//    myservo.write(pos);              // tell servo to go to position in variable 'pos'
//    delay(15);                       // waits 15ms for the servo to reach the position
//  }
//}

//// Task 4, DC motors
//int ENA=6;
//int ENB=5;
//int N1=7;
//int N2=8;
//int N3=9;
//int N4=11;
//void setup(){
////  pinMode(ENA,OUTPUT);
////  pinMode(ENB,OUTPUT);
////You do not need to call pinMode() 
////to set the pin as an output before calling analogWrite().
//  pinMode(N1,OUTPUT);
//  pinMode(N2,OUTPUT);
//  pinMode(N3,OUTPUT);
//  pinMode(N4,OUTPUT);
//}
//void loop(){
//  analogWrite(ENA,100);//The PWM value is 0~255, 0 means always OFF, 255 means always ON. 
//  analogWrite(ENB,100);
//  digitalWrite(N1,HIGH);
//  digitalWrite(N2,LOW);
//  digitalWrite(N3,LOW);
//  digitalWrite(N4,HIGH);
//}

//// Task 5, The line tracker
//int middle=4;
//int right=10;
//int left=2;
//int M=0;
//int R=0;
//int L=0;
//
//void setup(){
//  Serial.begin(9600);
//  pinMode(middle,INPUT);
//  pinMode(right,INPUT);
//  pinMode(left,INPUT);
//}
//
//void loop(){
//  M=digitalRead(middle);
////  R=digitalRead(right);
////  L=digitalRead(left);
//  Serial.println(M);
//  delay(500);
////  Serial.println(R);
////  delay(500);
////  Serial.println(L);
////  delay(500);
//}

//// Smart car tournament, Mode 1: let's go places
//#include <IRremote.h>
//int receiver = 12; // Signal Pin of IR receiver to Arduino Digital Pin 12
//IRrecv irrecv(receiver);     // create instance of 'irrecv'
//decode_results results;      // create instance of 'decode_results'
//
//int middle=4; // Line tracker
//int right=10;
//int left=2;
//int M=0;
//int R=0;
//int L=0;
//
//int ENA=6; // DC motor
//int ENB=5;
//int N1=7;
//int N2=8;
//int N3=9;
//int N4=11;
//
//int Mode=0;
//
//void setup()
//{
//  irrecv.enableIRIn(); // Start the receiver
//
//  pinMode(middle,INPUT);// Line tracker
//  pinMode(right,INPUT);
//  pinMode(left,INPUT);
//
//  pinMode(N1,OUTPUT); // DC motor
//  pinMode(N2,OUTPUT);
//  pinMode(N3,OUTPUT);
//  pinMode(N4,OUTPUT);
//}
//void loop()  
//{
//  if (irrecv.decode(&results)) // have we received an IR signal?
//  {
//    modeCheck();
//    translateIR();
//    irrecv.resume(); // receive the next value
//  }  
//}
//void modeCheck(){
//    if (results.value==0xFF6897)
//    {
//      Mode=1;
//    }
//    else if (results.value==0xFF9867){
//      Mode=2;
//    }
//    else if (results.value==0xFFB04F){
//      Mode=3;
//    }
//}
//void translateIR() // takes action based on IR code received
//{
//  if (Mode==1){
//      switch(results.value)
//      {
//      case 0xFF629D: goForward(); break;
//      case 0xFF22DD: turnLeft(); break;
//      case 0xFF02FD: stopCar(); break;
//      case 0xFFC23D: turnRight(); break;
//      case 0xFFA857: goBack(); break;
//    //  case 0xFF9867: lcd.print("2     "); break;
//    //  case 0xFFB04F: lcd.print("3     "); break;
//    //  case 0xFF6897: lcd.print("1     ");    break;
//    //  case 0xFF30CF: lcd.print("4     ");    break;
//    //  case 0xFF18E7: lcd.print("5     ");    break;
//    //  case 0xFF7A85: lcd.print("6     ");    break;
//    //  case 0xFF10EF: lcd.print("7     ");    break;
//    //  case 0xFF38C7: lcd.print("8     ");    break;
//    //  case 0xFF5AA5: lcd.print("9     ");    break;
//    //  case 0xFF42BD: lcd.print("STAR  ");    break;
//    //  case 0xFF4AB5: lcd.print("0     ");    break;
//    //  case 0xFF52AD: lcd.print("HASH ");    break;
//    //  case 0xFFFFFFFF: lcd.print("REPEAT");delay(1000); lcd.clear();break;  
//    //  default: 
//    //  lcd.print("INVALID");
//      }
//    }
//} //END translateIR
//
//void goForward(){
//  analogWrite(ENA,120);//The PWM value is 0~255, 0 means always OFF, 255 means always ON. 
//  analogWrite(ENB,120);
//  digitalWrite(N1,HIGH);
//  digitalWrite(N2,LOW);
//  digitalWrite(N3,LOW);
//  digitalWrite(N4,HIGH);
//}
//void goBack(){
//  analogWrite(ENA,120);//The PWM value is 0~255, 0 means always OFF, 255 means always ON. 
//  analogWrite(ENB,120);
//  digitalWrite(N1,LOW);
//  digitalWrite(N2,HIGH);
//  digitalWrite(N3,HIGH);
//  digitalWrite(N4,LOW);
//}
//void turnLeft(){
//  analogWrite(ENA,200);//The PWM value is 0~255, 0 means always OFF, 255 means always ON. 
//  analogWrite(ENB,200);
//  digitalWrite(N1,LOW);
//  digitalWrite(N2,HIGH);
//  digitalWrite(N3,LOW);
//  digitalWrite(N4,HIGH);  
//}
//void turnRight(){
//  analogWrite(ENA,200);//The PWM value is 0~255, 0 means always OFF, 255 means always ON. 
//  analogWrite(ENB,200);
//  digitalWrite(N1,HIGH);
//  digitalWrite(N2,LOW);
//  digitalWrite(N3,HIGH);
//  digitalWrite(N4,LOW);  
//}
//void stopCar(){
//  analogWrite(ENA,0);//The PWM value is 0~255, 0 means always OFF, 255 means always ON. 
//  analogWrite(ENB,0);
//  digitalWrite(N1,HIGH);
//  digitalWrite(N2,HIGH);
//  digitalWrite(N3,HIGH);
//  digitalWrite(N4,HIGH);  
//}

//// Mode 1 and Mode 2. Works perfectly. 
//#include <IRremote.h>
//int receiver = 12; // Signal Pin of IR receiver to Arduino Digital Pin 12
//IRrecv irrecv(receiver);     // create instance of 'irrecv'
//decode_results results;      // create instance of 'decode_results'
//int Mode=0;
//
//int ENA=6; // DC motor
//int ENB=5;
//int N1=7;
//int N2=8;
//int N3=9;
//int N4=11;
//
//int middle=4; // Line tracker
//int right=10;
//int left=2;
//int M=0;
//int R=0;
//int L=0;
//
//void setup(){
//  irrecv.enableIRIn();
//  Serial.begin(9600);
//  pinMode(N1,OUTPUT); // DC motor
//  pinMode(N2,OUTPUT);
//  pinMode(N3,OUTPUT);
//  pinMode(N4,OUTPUT);
//
//  pinMode(middle,INPUT);// Line tracker
//  pinMode(right,INPUT);
//  pinMode(left,INPUT);
//}
//void loop(){
//  if (irrecv.decode(&results)){
//      modeCheck();
//      irrecv.resume(); // receive the next value
//  }
//  translateIR(); // Move this out of the IF statement above is SUPER important
//}
//void modeCheck(){
//    if (results.value==0xFF6897)
//    {
//      Mode=1;
//    }
//    else if (results.value==0xFF9867)
//    {
//      Mode=2;
//    }
//    else if (results.value==0xFF30CF){
//      Mode=4; // Just stop
//    }
//}
//
//void translateIR() // takes action based on IR code received
//{
//  if (Mode==1){
//      switch(results.value)
//      {
//      case 0xFF629D: goForward(); break;
//      case 0xFF22DD: turnLeft(); break;
//      case 0xFF02FD: stopCar(); break;
//      case 0xFFC23D: turnRight(); break;
//      case 0xFFA857: goBack(); break;
//      }
//  }
//  else if (Mode==2){
//      M=digitalRead(middle);
//      R=digitalRead(right);
//      L=digitalRead(left);
//      if (M==0 && R==1 && L==1){
//        goForward();
//      }
//      else if (R==0 && L==1){
//        turnRight();
//      }
//      else if (R==1 && L==0){
//        turnLeft();
//      }
//  }
//  else if (Mode==4){
//      stopCar();
//   }
//}
//void goForward(){
//  analogWrite(ENA,120);//The PWM value is 0~255, 0 means always OFF, 255 means always ON. 
//  analogWrite(ENB,120);
//  digitalWrite(N1,HIGH);
//  digitalWrite(N2,LOW);
//  digitalWrite(N3,LOW);
//  digitalWrite(N4,HIGH);
//}
//void goBack(){
//  analogWrite(ENA,120);//The PWM value is 0~255, 0 means always OFF, 255 means always ON. 
//  analogWrite(ENB,120);
//  digitalWrite(N1,LOW);
//  digitalWrite(N2,HIGH);
//  digitalWrite(N3,HIGH);
//  digitalWrite(N4,LOW);
//}
//void turnLeft(){
//  analogWrite(ENA,200);//The PWM value is 0~255, 0 means always OFF, 255 means always ON. 
//  analogWrite(ENB,200);
//  digitalWrite(N1,LOW);
//  digitalWrite(N2,HIGH);
//  digitalWrite(N3,LOW);
//  digitalWrite(N4,HIGH);  
//}
//void turnRight(){
//  analogWrite(ENA,200);//The PWM value is 0~255, 0 means always OFF, 255 means always ON. 
//  analogWrite(ENB,200);
//  digitalWrite(N1,HIGH);
//  digitalWrite(N2,LOW);
//  digitalWrite(N3,HIGH);
//  digitalWrite(N4,LOW);  
//}
//void stopCar(){
//  analogWrite(ENA,0);//The PWM value is 0~255, 0 means always OFF, 255 means always ON. 
//  analogWrite(ENB,0);
//  digitalWrite(N1,HIGH);
//  digitalWrite(N2,HIGH);
//  digitalWrite(N3,HIGH);
//  digitalWrite(N4,HIGH);  
//}

// Mode 3, obstacle avoider
#include <SR04.h> // Untrosonic sensor
#define TRIG_PIN A5
#define ECHO_PIN A4
SR04 sr04 = SR04(ECHO_PIN,TRIG_PIN);
long a;

#include <Servo.h>
Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards
int pos = 90;    // variable to store the servo position

#include <IRremote.h> // Remote controller
int receiver = 12; // Signal Pin of IR receiver to Arduino Digital Pin 12
IRrecv irrecv(receiver);     // create instance of 'irrecv'
decode_results results;      // create instance of 'decode_results'
int Mode=0;

int ENA=6; // DC motor
int ENB=5;
int N1=7;
int N2=8;
int N3=9;
int N4=11;

int middle=4; // Line tracker
int right=10;
int left=2;
int M=0;
int R=0;
int L=0;

void setup(){
//  Serial.begin(9600);
  myservo.attach(3);  // attaches the servo on pin 3 to the servo object

  myservo.write(90);  // initialize servo position

  pinMode(TRIG_PIN,OUTPUT);
  pinMode(ECHO_PIN,INPUT);
  
  irrecv.enableIRIn(); // IR remote
//  Serial.begin(9600);
  pinMode(N1,OUTPUT); // DC motor
  pinMode(N2,OUTPUT);
  pinMode(N3,OUTPUT);
  pinMode(N4,OUTPUT);

  pinMode(middle,INPUT);// Line tracker
  pinMode(right,INPUT);
  pinMode(left,INPUT);
}
void loop(){
  if (irrecv.decode(&results)){
      modeCheck();
      irrecv.resume(); // receive the next value
  }
  translateIR();
}
void modeCheck(){
    if (results.value==0xFF6897)
    {
      Mode=1; // Enter Mode 1, Go places
    }
    else if (results.value==0xFF9867)
    {
      Mode=2; // Enter Mode 2, Line tracker
    }
    else if (results.value==0xFFB04F){
      Mode=3; // Enter Mode 3, obstacle avoider
    }
    else if (results.value==0xFF30CF){
      Mode=4; // Just stop
    }
}

void translateIR() // takes action based on IR code received
{
  if (Mode==1){Serial.println(results.value);
      switch(results.value)
      {
      case 0xFF629D: goForward(); break;
      case 0xFF22DD: turnLeft(); break;
      case 0xFF02FD: stopCar(); break;
      case 0xFFC23D: turnRight(); break;
      case 0xFFA857: goBack(); break;
      }
  }
  else if (Mode==2){
      M=digitalRead(middle);
      R=digitalRead(right);
      L=digitalRead(left);
      if (M==0 && R==1 && L==1){
        goForward();
      }
      else if (R==0 && L==1){
        turnRight();
      }
      else if (R==1 && L==0){
        turnLeft();
      }
  }
  else if (Mode==3){
      goForward();
      a=sr04.Distance(); 
      Serial.println(a);     
      if (a<20){
        stopCar();
        myservo.write(180);
        delay(400);
        int leftDist=sr04.Distance();
        myservo.write(0);
        delay(400);
        int rightDist=sr04.Distance();
        myservo.write(90);
        delay(400);
        if (rightDist>leftDist){
          turnRight(); // how to make it turn for 90 degree?
          delay(1000);
          translateIR();
        }
        else if (rightDist<leftDist){
          turnLeft(); // how to make it turn for 90 degrees?
          delay(1000);
          translateIR();          
        }
        else if ((rightDist<=10) || (leftDist<=10)){
          goBack(); // how to make it go back for a certian distance
          delay(800);
          translateIR();
        }
        else {
          goForward();
        }
      }
      else {
        goForward();
      }
  }      
  else if (Mode==4){
      stopCar();
   }
}
void goForward(){
  analogWrite(ENA,120);//The PWM value is 0~255, 0 means always OFF, 255 means always ON. 
  analogWrite(ENB,120);
  digitalWrite(N1,HIGH);
  digitalWrite(N2,LOW);
  digitalWrite(N3,LOW);
  digitalWrite(N4,HIGH);
}
void goBack(){
  analogWrite(ENA,120);//The PWM value is 0~255, 0 means always OFF, 255 means always ON. 
  analogWrite(ENB,120);
  digitalWrite(N1,LOW);
  digitalWrite(N2,HIGH);
  digitalWrite(N3,HIGH);
  digitalWrite(N4,LOW);
}
void turnLeft(){
  analogWrite(ENA,200);//The PWM value is 0~255, 0 means always OFF, 255 means always ON. 
  analogWrite(ENB,200);
  digitalWrite(N1,LOW);
  digitalWrite(N2,HIGH);
  digitalWrite(N3,LOW);
  digitalWrite(N4,HIGH);  
}
void turnRight(){
  analogWrite(ENA,200);//The PWM value is 0~255, 0 means always OFF, 255 means always ON. 
  analogWrite(ENB,200);
  digitalWrite(N1,HIGH);
  digitalWrite(N2,LOW);
  digitalWrite(N3,HIGH);
  digitalWrite(N4,LOW);  
}
void stopCar(){
  analogWrite(ENA,0);//The PWM value is 0~255, 0 means always OFF, 255 means always ON. 
  analogWrite(ENB,0);
  digitalWrite(N1,HIGH);
  digitalWrite(N2,HIGH);
  digitalWrite(N3,HIGH);
  digitalWrite(N4,HIGH);  
}
