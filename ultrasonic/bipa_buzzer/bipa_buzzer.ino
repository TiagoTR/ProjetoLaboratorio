#include <Ultrasonic.h>
#define p_trig 4
#define p_echo 5 
#define atuador A3
Ultrasonic ultrasonic(p_trig, p_echo);
int distance;

void setup() {
  Serial.begin(9600);
  pinMode(atuador, OUTPUT);
}

void loop() {
  // Pass INC as a parameter to get the distance in inches
  distance = ultrasonic.read();
  
  Serial.print("Distance in CM: ");
  Serial.println(distance);
  delay(1000);
  if(distance < 15){
    Serial.println("Opa!");
    // bipar buzzer 
    analogWrite(atuador, 180);
  }else{
    analogWrite(atuador, 0);
  }
}
