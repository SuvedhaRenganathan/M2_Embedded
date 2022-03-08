#include <Arduino.h>
#include <LiquidCrystal.h>                  // includes the LiquidCrystal Library
#include <Servo.h>                          //includes the Servo library

LiquidCrystal lcd(1, 2, 4, 5, 6, 7);        // Creates an LCD object. Parameters: (rs, enable, d4, d5, d6, d7)
const int trigpin1 = 13,trigpin2 = 3;        // Attaches  to the Trigger Pin
const int echopin1 = 12,echopin2 = 2 ;       //Attaches  to the Echo Pin
int buzzer=1;
unsigned long value1,value2,distance1,distance2;                             //Set long variable duration as the time between Trigger and Echo

Servo motorservo1;                              //create servo object to control a servo
Servo motorservo2;                              //create servo object to control a servo
int position1 = 0;                              //variable to store the servo position


void setup() {
  lcd.begin(16, 2);                        // Initializes the interface to the LCD screen, and specifies the dimensions (width and height) of the display
  pinMode(trigpin1, OUTPUT);
  pinMode(echopin1, INPUT);
  motorservo1.attach(13);                   // Attaches pin 13 to the servo object

  lcd.begin(16, 2);                        // Initializes the interface to the LCD screen, and specifies the dimensions (width and height) of the display
  pinMode(trigpin2, OUTPUT);
  pinMode(echopin2, INPUT);
  motorservo2.attach(13);  

  pinMode(trigpin1, OUTPUT);
  pinMode(trigpin2, OUTPUT);
  pinMode(buzzer, OUTPUT);
 
  pinMode(echopin1, INPUT);
  pinMode(echopin2, INPUT);
  motorservo1.attach(8);
  motorservo2.attach(7);

  Serial.begin(9600);
}

void loop()
{
                   
  digitalWrite(trigpin1, LOW);                   //Send out a low pulse from Trigger Pin
  delayMicroseconds(2);                         //A sharp delay of 2 microseconds before...
  digitalWrite(trigpin1, HIGH);                   //...sending out a high pulse from the Trigger Pin
  delayMicroseconds(10);                        //A longer delay of 10 microseconds before...
  digitalWrite(trigpin1, LOW);                    //...sending out a low pulse again.
  value1 = pulseIn(echopin1, HIGH);            //duration is defined as the time at which the echopin detects a high pulse
  distance1= (value1 * 0.034) / 2;            //distance calculation based on known speed of pulse wave and the detected time

  digitalWrite(trigpin2, LOW);                   //Send out a low pulse from Trigger Pin
  delayMicroseconds(2);                         //A sharp delay of 2 microseconds before...
  digitalWrite(trigpin2, HIGH);                   //...sending out a high pulse from the Trigger Pin
  delayMicroseconds(10);                        //A longer delay of 10 microseconds before...
  digitalWrite(trigpin2, LOW);                    //...sending out a low pulse again.
  value2 = pulseIn(echopin2, HIGH);            //duration is defined as the time at which the echopin detects a high pulse
  distance2= (value1 * 0.034) / 2;            //distance calculation based on known speed of pulse wave and the detected time

  lcd.setCursor(0, 0);                             // Sets the location at which subsequent text written to the LCD will be displayed
  lcd.print("Distance: ");                        // Prints string "Distance" on the LCD
  lcd.print(distance2);                          // Prints the distance value from the sensor
  delay(10);
  lcd.setCursor(0, 1);
  delay(10);

  motorservo1.write(position1);                          //set the servo to the position - on the first run it initializes to 0
  if (distance2 < 4.00)                           //which means an object is detected above the Ultrasound Sensor
  {
    lcd.print("Gate is opening!");                //first describe the Gate action
    if (position1 < 90)                                 //if the Servo is not already upright
    {
      delay(1500);                                //delay 1.5 seconds before reacting - this mimics the lagged response of toll gates in reality (for safety purposes).
      for (position1 = 0; position1 <= 90; position1++)             //gradually moves through 90 degrees
      {
        motorservo1.write(position1);
        delay(10);
      }
    }
    else                                    //Servo is already upright - this accounts for when the train remains stationary before the gate
    {
      position1 = 90;                             //maintain the upright position
      delay(10);
    }
  }
  else                                      //no object is detected above the Ultrasound Sensor
  {
    lcd.print("Gate is closed.");
    if (position1 > 0)                           //Gate is upright and needs to close
    {
      delay(1500);                         //delay 1.5 seconds before reacting
      for (position1 = 90; position1 >= 0; position1--)      //gradually moves through 90 degrees
      {
        motorservo1.write(position1);
        delay(10);
      }
    }
    else                                 //Gate is already down
    {
      position1 = 0;                          //remain down
      delay(10);
    }
  }

 
   motorservo2.write(position1);                          //set the servo to the position - on the first run it initializes to 0
  if (distance2 < 4.00)                           //which means an object is detected above the Ultrasound Sensor
  {
    lcd.print("Gate is opening!");                //first describe the Gate action
    if (position1 < 90)                                 //if the Servo is not already upright
    {
      delay(1500);                                //delay 1.5 seconds before reacting - this mimics the lagged response of toll gates in reality (for safety purposes).
      for (position1 = 0; position1 <= 90; position1++)             //gradually moves through 90 degrees
      {
        motorservo2.write(position1);
        delay(10);
      }
    }
    else                                    //Servo is already upright - this accounts for when the train remains stationary before the gate
    {
      position1 = 90;                             //maintain the upright position
      delay(10);
    }
  }
   else                                      //no object is detected above the Ultrasound Sensor
  {
    lcd.print("Gate is closed.");
    if (position1 > 0)                           //Gate is upright and needs to close
    {
      delay(1500);                         //delay 1.5 seconds before reacting
      for (position1 = 90; position1 >= 0; position1--)      //gradually moves through 90 degrees
      {
        motorservo2.write(position1);
        delay(10);
      }
    }
    else                                 //Gate is already down
    {
      position1 = 0;                          //remain down
      delay(10);
    }
  }
  digitalWrite(buzzer,LOW);
  delay(200);
}

