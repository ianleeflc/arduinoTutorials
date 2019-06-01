//www.elegoo.com
//2016.12.9

/*
  LiquidCrystal Library - Hello World

 Demonstrates the use a 16x2 LCD display.  The LiquidCrystal
 library works with all LCD displays that are compatible with the
 Hitachi HD44780 driver. There are many of them out there, and you
 can usually tell them by the 16-pin interface.

 This sketch prints "Hello World!" to the LCD
 and shows the time.

  The circuit:
 * LCD RS pin to digital pin 7
 * LCD Enable pin to digital pin 8
 * LCD D4 pin to digital pin 9
 * LCD D5 pin to digital pin 10
 * LCD D6 pin to digital pin 11
 * LCD D7 pin to digital pin 12
 * LCD R/W pin to ground
 * LCD VSS pin to ground
 * LCD VCC pin to 5V
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)

 Library originally added 18 Apr 2008
 by David A. Mellis
 library modified 5 Jul 2009
 by Limor Fried (http://www.ladyada.net)
 example added 9 Jul 2009
 by Tom Igoe
 modified 22 Nov 2010
 by Tom Igoe

 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/LiquidCrystal
 */
//// Example: The starting example
//// include the library code:
//#include <LiquidCrystal.h>
//
//// initialize the library with the numbers of the interface pins
//LiquidCrystal lcd(7, 8, 9, 10, 11, 12);
//
//void setup() {
//  // set up the LCD's number of columns and rows:
//  lcd.begin(16, 2);
//  // Print a message to the LCD.
//  lcd.print("Hello, World!");
//}
//
//void loop() {
//  // set the cursor to column 0, line 1
//  // (note: line 1 is the second row, since counting begins with 0):
//  lcd.setCursor(0, 1);
//  // print the number of seconds since reset:
//  lcd.print(millis() / 1000); // Integer division. Counts by one for every 1000 miliseconds
//}

//// Task 1: Change the layout
//// include the library code:
//#include <LiquidCrystal.h>
//
//// initialize the library with the numbers of the interface pins
//LiquidCrystal lcd(7, 8, 9, 10, 11, 12);
//
//void setup() {
//  // set up the LCD's number of columns and rows:
//  lcd.begin(16, 2);
//  lcd.setCursor(1, 0);
//  // Print a message to the LCD.
//  lcd.print("Hello, World!");
//}
//
//void loop() {
//  // set the cursor to column 0, line 1
//  // (note: line 1 is the second row, since counting begins with 0):
//  lcd.setCursor(0, 1);
//  // print the number of seconds since reset:
//  lcd.print(millis() / 1000); // Integer division. Counts by one for every 1000 miliseconds
//}

//// Task 2: Count to a certain number and start over from 0
//// include the library code:
//#include <LiquidCrystal.h>
//// initialize the library with the numbers of the interface pins
//LiquidCrystal lcd(7, 8, 9, 10, 11, 12);
//int cntmax=5;
//int cnt=0;
//
//void setup() {
//  // set up the LCD's number of columns and rows:
//  lcd.begin(16, 2);
//  // Print a message to the LCD.
//  lcd.print("Hello, World!");
//}
//void loop() {
//  for (cnt=0; cnt<=cntmax; cnt++)
//    {
//      lcd.setCursor(0, 1);
//      lcd.print(cnt);
//      delay(1000);
//    }
//  cnt=0;
//}


//// Task 3: Scroll the text on the LCD
//// include the library code:
//#include <LiquidCrystal.h>
//// initialize the library with the numbers of the interface pins
//LiquidCrystal lcd(7, 8, 9, 10, 11, 12);
//
//void setup() {
//  // set up the LCD's number of columns and rows:
//  lcd.begin(16, 2);
//}
//void loop() {
//  for (int i=0;i<16;i++)
//    {
//      if (i==5)
//        {
//           lcd.setCursor(i, 1);
//           lcd.print("Durango");
//           delay(1000);
//           lcd.clear();
//           delay(500);
//           lcd.setCursor(i, 1);
//           lcd.print("Durango");
//           delay(1000);
//           lcd.clear();
//           delay(500);
//           lcd.setCursor(i, 1);
//           lcd.print("Durango");
//           delay(1000);
//           lcd.clear();
//           delay(500);           
//        }
//      lcd.setCursor(i, 1);
//      lcd.print("Durango");
//      delay(200);
//      lcd.clear();
//    }
//}

//// Task4: thermistor
//#include <LiquidCrystal.h>
//int tempPin = 0;
////                BS  E  D4 D5  D6 D7
//LiquidCrystal lcd(7, 8, 9, 10, 11, 12);
//void setup()
//{
//  lcd.begin(16, 2);
//}
//void loop()
//{
//  int tempReading = analogRead(tempPin);
//  // This is OK
//  double tempK = log(10000.0 * ((1024.0 / tempReading - 1)));
//  tempK = 1 / (0.001129148 + (0.000234125 + (0.0000000876741 * tempK * tempK )) * tempK );       //  Temp Kelvin
//  float tempC = tempK - 273.15;            // Convert Kelvin to Celcius
//  float tempF = (tempC * 9.0)/ 5.0 + 32.0; // Convert Celcius to Fahrenheit
//  // Display Temperature in C
//  lcd.setCursor(0, 0);
//  lcd.print("Temp         C  ");
//  // Display Temperature in F
//  //lcd.print("Temp         F  ");
//  lcd.setCursor(6, 0);
//  // Display Temperature in C
//  lcd.print(tempC);
//  // Display Temperature in F
//  //lcd.print(tempF);
//  delay(500);
//}

//// Task 5: DHT11
//#include <LiquidCrystal.h>
//#include <SimpleDHT.h>
////                BS  E  D4 D5  D6 D7
//LiquidCrystal lcd(7, 8, 9, 10, 11, 12);
//// for DHT11, 
////      VCC: 5V or 3V
////      GND: GND
////      DATA: 2
//int pinDHT11 = 2;
//SimpleDHT11 dht11;
//void setup() {
//  lcd.begin(16, 2);
//}
//void loop() {
//  lcd.setCursor(0, 0);
//  lcd.print("Temp     C");
//  lcd.setCursor(6, 0);
//  byte temperature = 0;
//  byte humidity = 0;
//  byte data[40] = {0};
//  dht11.read(pinDHT11, &temperature, &humidity, data);
//  lcd.print((int)temperature);
//  lcd.setCursor(0, 1);
//  lcd.print("Humidity     %");
//  lcd.setCursor(10, 1);
//  lcd.print((int)humidity);
//  // DHT11 sampling rate is 0.5HZ.
//  delay(2000);
//}
//
//// Task 6: TMP36 temperature sensor IC
//#include <LiquidCrystal.h>
////                BS  E  D4 D5  D6 D7
//LiquidCrystal lcd(7, 8, 9, 10, 11, 12);
//const int sensorPin=A0;
//void setup() {
//   lcd.begin(16, 2);
//}
//
//void loop() {
//  int sensorVal=analogRead(sensorPin);
//  float voltage = (sensorVal/1024.0)*5.0;
//  float temperature = (voltage-0.5)*100; //0.5 V represent 0 celsius degree. 
//  //every 10 mV change represents 1 celsius degree change, so 1 V represents 100 celsius change.
//  lcd.setCursor(0,0);
//  lcd.print("Temp         C  ");
//  lcd.setCursor(6,0);
//  lcd.print(temperature);
//  delay(2000);//delay for 2 seconds
//}

//// Task 7: IR receiver (The remote sensor is bad. The receiver is fine) (Code was given to students)
//#include <IRremote.h>
//#include <LiquidCrystal.h>
////                BS  E  D4 D5  D6 D7
//LiquidCrystal lcd(7, 8, 9, 10, 11, 12);
//int receiver = 5; // Signal Pin of IR receiver to Arduino Digital Pin 11
//IRrecv irrecv(receiver);     // create instance of 'irrecv'
//decode_results results;      // create instance of 'decode_results'
//void translateIR() // takes action based on IR code received
//{
//  switch(results.value)
//  {
//  case 0xFFA25D: lcd.print("POWER         "); break;
//  case 0xFFE21D: lcd.print("FUNC/STOP     "); break;
//  case 0xFF629D: lcd.print("VOL+          "); break;
//  case 0xFF22DD: lcd.print("FAST BACK     ");  break;
//  case 0xFF02FD: lcd.print("PAUSE         ");  break;
//  case 0xFFC23D: lcd.print("FAST FORWARD  ");  break;
//  case 0xFFE01F: lcd.print("DOWN          ");  break;
//  case 0xFFA857: lcd.print("VOL-          ");  break;
//  case 0xFF906F: lcd.print("UP            ");   break;
//  case 0xFF9867: lcd.print("EQ            ");  break;
//  case 0xFFB04F: lcd.print("ST/REPT       ");   break;
//  case 0xFF6897: lcd.print("0             ");    break;
//  case 0xFF30CF: lcd.print("1             ");    break;
//  case 0xFF18E7: lcd.print("2             ");    break;
//  case 0xFF7A85: lcd.print("3             ");    break;
//  case 0xFF10EF: lcd.print("4             ");    break;
//  case 0xFF38C7: lcd.print("5             ");    break;
//  case 0xFF5AA5: lcd.print("6             ");    break;
//  case 0xFF42BD: lcd.print("7             ");    break;
//  case 0xFF4AB5: lcd.print("8             ");    break;
//  case 0xFF52AD: lcd.print("9             ");    break;
//  case 0xFFFFFFFF: lcd.print("REPEAT      ");break;  
//  default: 
//  lcd.print("INVALID          ");
//  }
//  delay(500); // Do not get immediate repeat
//} //END translateIR
//void setup()
//{
//  lcd.begin(16,2);
//  irrecv.enableIRIn(); // Start the receiver
//}
//void loop()  
//{
//  if (irrecv.decode(&results)) // have we received an IR signal?
//  {
//    lcd.setCursor(0,0);
//    lcd.print(results.value);
//    lcd.setCursor(0,1);
//    translateIR();
//    irrecv.resume(); // receive the next value
//  }  
//}

//// Task 7: IR receiver (Use the remote controller in the Robot kit).(Code was not given to students)
//#include <IRremote.h>
//#include <LiquidCrystal.h>
////                BS  E  D4 D5  D6 D7
//LiquidCrystal lcd(7, 8, 9, 10, 11, 12);
//int receiver = 5; // Signal Pin of IR receiver to Arduino Digital Pin 11
//IRrecv irrecv(receiver);     // create instance of 'irrecv'
//decode_results results;      // create instance of 'decode_results'
//void translateIR() // takes action based on IR code received
//{
//  switch(results.value)
//  {
//  case 0xFF629D: lcd.print("GO    "); break;
//  case 0xFF22DD: lcd.print("LEFT  "); break;
//  case 0xFF02FD: lcd.print("OK    "); break;
//  case 0xFFC23D: lcd.print("RIGHT "); break;
//  case 0xFFA857: lcd.print("BACK  "); break;
//  case 0xFF9867: lcd.print("2     "); break;
//  case 0xFFB04F: lcd.print("3     "); break;
//  case 0xFF6897: lcd.print("1     ");    break;
//  case 0xFF30CF: lcd.print("4     ");    break;
//  case 0xFF18E7: lcd.print("5     ");    break;
//  case 0xFF7A85: lcd.print("6     ");    break;
//  case 0xFF10EF: lcd.print("7     ");    break;
//  case 0xFF38C7: lcd.print("8     ");    break;
//  case 0xFF5AA5: lcd.print("9     ");    break;
//  case 0xFF42BD: lcd.print("STAR  ");    break;
//  case 0xFF4AB5: lcd.print("0     ");    break;
//  case 0xFF52AD: lcd.print("HASH ");    break;
//  case 0xFFFFFFFF: lcd.print("REPEAT");delay(1000); lcd.clear();break;  
//  default: 
//  lcd.print("INVALID");
//  }
//  delay(500); // Do not get immediate repeat
//} //END translateIR
//void setup()
//{
//  lcd.begin(16,2);
//  irrecv.enableIRIn(); // Start the receiver
//}
//void loop()  
//{
//  if (irrecv.decode(&results)) // have we received an IR signal?
//  {
//    lcd.setCursor(0,0);
//    lcd.print(results.value);
//    lcd.setCursor(0,1);
//    translateIR();
//    irrecv.resume(); // receive the next value
//  }  
//}
