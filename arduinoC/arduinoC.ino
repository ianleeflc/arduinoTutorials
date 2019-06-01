

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //set up the 'serial communication' rate is 9600 bits/second
  //Serial.println("test"); // print a line of "test". You need the double quatation for a String data type
}


// Test the printing function
//void loop() {
//  // put your main code here, to run repeatedly:
//  //char a[]="test"; // must use var[] to store long strings
////  int a=1;
////  int b=3;
////  int c=a+b;
//  int a=1 & 0;
//  boolean b=1 | 0;
//  boolean c=!1;
//  Serial.println(a);
//  Serial.println(b);
//  Serial.println(c);
//  Serial.end();
//}

//// Control Structures, if statement
//void loop()
//{
//  int x=1;
//  if (x==1)
//  {
//    Serial.println(x);
//    Serial.end();
//  }
//}

//// for loops
//void loop()
//{
//  for(int i=1; i<10; i++)
//  {
//    Serial.println(i);
//  }
//  Serial.end();
//}

//// for loops and if statement
//void loop()
//{
//  for (int i=1; i<10; i++)
//  {
//    if (i%2==0)
//    {
//      Serial.println(i); // directly print the even numbers
//    }
//    else
//    {
//      Serial.println(i*100); 
//      // if it is odd, times 100 before print it out. 
//    }
//  }
//  Serial.end();
//}

//// The 'while' loops
//int i=0;
//void loop ()
//{
//  while (i<10)
//  {
//    Serial.println(i);
//    i+=1;
//  }
//  Serial.end();
//}

// The 'switch' statement: 

void loop ()
{
  for (int i=1; i<10; i++)
  {
    switch (i)
    {
      case 3: Serial.println("Now it is 3");
      break;
      case 6: Serial.println("Now it is 6");
      break;    
    }    
  }
  Serial.end();
}




