// Blink an LED on board
//int led = 13; // pin 13 is connected to an LED on the board by the manufacturer
//void setup() {
//  // put your setup code here, to run once:
//    pinMode(led, OUTPUT); // set pin led as an OUTPUT mode. 
//}
//
//void loop() {
//  // put your main code here, to run repeatedly:
//    digitalWrite(led, HIGH); // turn the LED on (HIGH is the voltage level)
//    delay(100); // wait for 1000 mili second
//    digitalWrite(led, LOW);
//    delay(100); 
//}

//// Blink an external LED
//int led = 3; // pin 3 is connected to an external LED
//void setup() {
//  // put your setup code here, to run once:
//    pinMode(led, OUTPUT); // set pin led as an OUTPUT mode. 
//}
//
//void loop() {
//  // put your main code here, to run repeatedly:
//    digitalWrite(led, HIGH); // turn the LED on (HIGH is the voltage level)
//    delay(100); // wait for 1000 mili second
//    digitalWrite(led, LOW);
//    delay(100); 
//}

//// Running LED
//int led2 = 2; // pin 3 is connected to an external LED
//int led3 = 3;
//int led4 = 4;
//int led5 = 5;
//int led6 = 6;
//
//void setup() {
//  // put your setup code here, to run once:
//    pinMode(led2, OUTPUT); // set pin led as an OUTPUT mode.
//    pinMode(led3, OUTPUT);
//    pinMode(led4, OUTPUT);
//    pinMode(led5, OUTPUT);
//    pinMode(led6, OUTPUT); 
//}
//
//void loop() {
//  // put your main code here, to run repeatedly:
//    digitalWrite(led2, HIGH); // turn the LED on (HIGH is the voltage level)
//    delay(100); // wait for 1000 mili second
//    digitalWrite(led2, LOW);
//    delay(100); 
//
//    digitalWrite(led3, HIGH); 
//    delay(100); 
//    digitalWrite(led3, LOW);
//    delay(100); 
//
//    digitalWrite(led4, HIGH); 
//    delay(100); 
//    digitalWrite(led4, LOW);
//    delay(100); 
//
//    digitalWrite(led5, HIGH); 
//    delay(100); 
//    digitalWrite(led5, LOW);
//    delay(100); 
//
//    digitalWrite(led6, HIGH); 
//    delay(100); 
//    digitalWrite(led6, LOW);
//    delay(100); 
//}

//// Push to turn off
//int led_read = 3;
//int led_write = 4;
//int val = 0;
//void setup() {
//    pinMode(led_read, INPUT);
//    pinMode(led_write, OUTPUT);
//}
//
//void loop() {
//        val = digitalRead(led_read);
//    if (val == HIGH) {
//        digitalWrite(led_write, HIGH);
//    }
//    else {
//        digitalWrite(led_write, LOW);
//    }
//}
//
//// Push to blink
//int led_read = 3;
//int led_write = 4;
//int val = 0;
//void setup() {
//    pinMode(led_read, INPUT);
//    pinMode(led_write, OUTPUT);
//}
//
//void loop() {
//        val = digitalRead(led_read);
//        if (val == HIGH) {
//            digitalWrite(led_write, LOW); 
//    }
//        while (val == LOW) {
//            val = digitalRead(led_read); // why do we need this? 
//            digitalWrite(led_write, HIGH);
//            delay(1000);
//            digitalWrite(led_write, LOW);
//            delay(1000);        
//    }    
//}


// Push to change frequency (not provided in the tutorial)
int led_read = 3;
int led_write = 4;
int val = 0;
void setup() {
    pinMode(led_read, INPUT);
    pinMode(led_write, OUTPUT);
}

void loop() {
        val = digitalRead(led_read);
        while (val == HIGH) {
            digitalWrite(led_write, HIGH);
            delay(125); // four cycles a second
            digitalWrite(led_write, LOW);
            delay(125);    
            val = digitalRead(led_read); // why do we need this?                 
    } 
        while (val == LOW) {
            digitalWrite(led_write, HIGH);
            delay(500); // one cycle a second
            digitalWrite(led_write, LOW);
            delay(500);    
            val = digitalRead(led_read); // why do we need this?                 
    }           
}


















