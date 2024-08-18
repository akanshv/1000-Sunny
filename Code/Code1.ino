#include <Servo.h>

const int photo_res1 = A0;
const int photo_res2 = A1;

Servo my_servo;
int deg;

void setup() {

  Serial.begin(9600);
  my_servo.attach(9);
  //pinMode(photo_res, INPUT);
  // put your setup code here, to run once:

}

void loop() {
  int p_value1 = analogRead(photo_res1);
  int p_value2 = analogRead(photo_res2);
  Serial.println("Light 1 val: ");
  Serial.println(p_value1);
  Serial.println("Light 2 val: ");
  Serial.println(p_value2);
  int rotation = 0;
  if(abs(p_value1 - p_value2) > 100){
      if(p_value1 > p_value2){
        my_servo.write(40);
        Serial.println("p1 greater");
      }if (p_value1 < p_value2){
        my_servo.write(100);
        Serial.println("p2 greater");
      }
  }else{
    my_servo.write(70);
    Serial.println("no change");
  }
  //my_servo.write(120);
  deg += 1;
  delay(500);
  // put your main code here, to run repeatedly:
}