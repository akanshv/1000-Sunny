#include <Servo.h>

const int photo_res1 = A0;
const int photo_res2 = A1;

int Normal = 100;
int Previous = 0;
int Current = 0;

const int solarValue = analogRead(A2);
// const float Bias = -144.944038;
// const float Weight1 = 0.26921189;
// const float Weight2 = 0.0346417354;


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
      if(p_value1 > p_value2 && Normal < 150){
        Current = p_value1;
        Serial.println("p1 greater");


        Serial.println("Current and Previous :");
        Serial.println(Current);
        Serial.println(Previous);
        if(abs(Current-Previous)>5){
          if(Current < Previous){
            Normal = Normal - 5;
            Serial.println(" C<P Angle: ");
            Serial.println(Normal);
            Previous = Current;

          }
          else{
            Normal = Normal + 5;
            Serial.println("C>P Angle: ");
            Serial.println(Normal);
            Previous = Current;

          }
        }
       
      }

      
      if (p_value1 < p_value2 && Normal > 50 ){
        Current = p_value2;
        Serial.println("p2 greater");


        Serial.println("Current and Previous :");
        Serial.println(Current);
        Serial.println(Previous);
        if(abs(Current-Previous)>5){
          if(Current < Previous){
            Normal = Normal + 5;
            Serial.println("C<P Angle: ");
            Serial.println(Normal);
            Previous = Current;

          }
          else{
            Normal = Normal - 5;
            Serial.println("C>P Angle: ");
            Serial.println(Normal);
            Previous = Current;

          }

        }
      }

  }
  else{
    Normal = 100;
    Previous = p_value1;

  }
  
  my_servo.write(Normal);
  Serial.println("Angle Final: ");
  Serial.println(Normal);
  Serial.println("Solar Output: ");
  Serial.println(solarValue);
  deg += 1;
  delay(500);
}