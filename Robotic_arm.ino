#include <Servo.h>
int potValue = 0;    
Servo myservo1; // Servo
Servo myservo2; 
Servo myservo3;
Servo myservo4;
Servo myservo5;

int potpin1 = 0; // pin to connect the potentiometer
int potpin2 = 1; 
int potpin3 = 2;
int potpin4 = 3;
int potpin5 = 4;
int val1;  // variable to read the value from the analog pin
int val2; 
int val3;
int val4;
int val5;

void setup() {
  myservo1.attach(9);  //servo attaching pins 
  myservo2.attach(10); 
  myservo3.attach(11);
  myservo4.attach(12);
  myservo5.attach(13);  
  Serial.begin(9600);
}

void loop() {   //servo1
  potValue = analogRead(0);     
  val1 = analogRead(potpin1);            // reads the value of the potentiometer (value between 0 and 1023)
  val1 = map(val1, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  myservo1.write(val1);                  // sets the servo position according to the scaled value
  Serial.print("Potentiometer Value: ");
  Serial.print(potValue);
  Serial.print("   Degrees: ");
  Serial.println(val1);
  delay(70);                           // waits for the servo to get there

//servo2
  val2 = analogRead(potpin2);            
  val2 = map(val2, 0, 1023, 0, 180);     
  myservo2.write(val2);                  
  delay(70); 
                            
//servo3
  val3 = analogRead(potpin3);            
  val3= map(val3, 0, 1023, 0, 180);     
  myservo3.write(val3);                  
  delay(70);
                             
//servo4
  val4 = analogRead(potpin4);            
  val4 = map(val4, 0, 1023, 0, 180);     
  myservo4.write(val4);                  
  delay(70);

//servo5
  val5 = analogRead(potpin5);            
  val5 = map(val5, 0, 1023, 0, 180);     
  myservo5.write(val5);                  
  delay(70);                                    
}
