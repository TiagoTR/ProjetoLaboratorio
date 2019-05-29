
#include <SoftwareSerial.h>
#include <AFMotor.h>
char input, dec;
SoftwareSerial mySerial(15, 14); // RX, TX
AF_DCMotor m1(1); //Seleciona o motor 1
AF_DCMotor m2(2); //Seleciona o motor 2
AF_DCMotor m3(3); //Seleciona o motor 3
AF_DCMotor m4(4); //Seleciona o motor 4

void setup(){
  Serial.begin(9600);
  mySerial.begin(9600);
  delay(500);
  Serial.println("Bluetooth conectado.");
}

void loop(){
  input = mySerial.read();
  mySerial.println(input);
  dec = Serial.read();
  Serial.println();
    switch(input){
      case 'a':
        //ir para frente
        m1.setSpeed(255); //Define a velocidade maxima
        m1.run(FORWARD); //Gira o motor sentido horario
        m2.setSpeed(255); //Define a velocidade maxima
        m2.run(FORWARD); //Gira o motor sentido horario
        
        m3.setSpeed(255); //Define a velocidade maxima
        m3.run(FORWARD); //Gira o motor sentido horario
        m4.setSpeed(255); //Define a velocidade maxima
        m4.run(FORWARD); //Gira o motor sentido horario
      break;
      case 'b':
        //ir para tras
        m1.setSpeed(255); //Define a velocidade maxima
        m1.run(BACKWARD); //Gira o motor sentido horario
        m2.setSpeed(255); //Define a velocidade maxima
        m2.run(BACKWARD); //Gira o motor sentido horario
        
        m3.setSpeed(255); //Define a velocidade maxima
        m3.run(BACKWARD); //Gira o motor sentido horario
        m4.setSpeed(255); //Define a velocidade maxima
        m4.run(BACKWARD); //Gira o motor sentido horario
      break;
      default:
        m1.setSpeed(0);
        m1.run(RELEASE); //Desliga o motor
        m2.setSpeed(0);
        m2.run(RELEASE); //Desliga o motor
        m3.setSpeed(0);
        m3.run(RELEASE); //Desliga o motor
        m4.setSpeed(0);
        m4.run(RELEASE); //Desliga o motor
         
     }
 }
