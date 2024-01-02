#include<Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;

int poten1 = A1;
int poten2 = A2;
int poten3 = A3;

int servo1_angle;
int servo2_angle;
int servo3_angle;

int poten1_val;
int poten2_val;
int poten3_val;


void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(9600);
  
  servo1.attach(9);
  servo2.attach(10);
  servo3.attach(11);
  
  pinMode(poten1, INPUT);
  pinMode(poten2, INPUT);
  pinMode(poten3, INPUT);

}

void loop() {
  poten1_val = analogRead(poten1);
  poten2_val = analogRead(poten2);
  poten3_val = analogRead(poten3);
  


  servo1_angle = map(poten1_val,0,1023,2,178);
  servo2_angle = map(poten2_val,0,1023,2,178);
  servo3_angle = map(poten3_val,0,1023,2,178);
  
  servo1.write(servo1_angle);
  servo2.write(servo2_angle);
  servo3.write(servo3_angle);
  delay(10);
  Serial.print(poten1_val);
  Serial.print(' ');
  Serial.println(servo1_angle);


}
