#include <Servo.h>

Servo servo_1;

int buttonState = 0;   

void setup()
{

  pinMode(A0, INPUT);
 
  pinMode(4, INPUT);
  pinMode(5, INPUT);

  
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  
  servo_1.attach(13);
  servo_1.write(0);  

}

void loop() {
  int buttonState2 = digitalRead(2);
  int buttonState3 = digitalRead(3);

  if (buttonState2 == HIGH) {
    servo_1.write(0);
   
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    
  } else if(buttonState3 == HIGH){
    servo_1.write(150);
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    
  }



}
