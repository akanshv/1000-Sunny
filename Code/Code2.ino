#include <Servo.h>

const int photo_res1 = A0;
const int photo_res2 = A1;

const float Bias = -144.944038;
const float Weight1 = 0.26921189;
const float Weight2 = 0.0346417354;

const int Normal = 70;

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
        Serial.println("p1 greater");
        int Angle = Bias + (p_value1*Weight1) + (p_value2*Weight2);
        Serial.println(Normal + Angle);
        my_servo.write(Normal + Angle);
        
      }
      
      if (p_value1 < p_value2){
        Serial.println("p2 greater");
        int Angle = Bias + (p_value2*Weight1) + (p_value1*Weight2);
        Serial.println(Normal - Angle);
        my_servo.write(Normal - Angle);
      }

  }

  else{
    my_servo.write(Normal);
    Serial.println("no change");
  }
  //my_servo.write(120);
  deg += 1;
  delay(500);
  // put your main code here, to run repeatedly:
}