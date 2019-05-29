#include <AFMotor.h>
 
AF_DCMotor motor1(1); //Seleciona o motor 1
AF_DCMotor motor2(2); //Seleciona o motor 1
AF_DCMotor motor3(3); //Seleciona o motor 1
AF_DCMotor motor4(4); //Seleciona o motor 1
 
void setup()
{}
 
void loop()
{
motor1.setSpeed(255); //Define a velocidade maxima
motor1.run(FORWARD); //Gira o motor sentido horario
motor2.setSpeed(255); //Define a velocidade maxima
motor2.run(FORWARD); //Gira o motor sentido horario

motor3.setSpeed(255); //Define a velocidade maxima
motor3.run(FORWARD); //Gira o motor sentido horario
motor4.setSpeed(255); //Define a velocidade maxima
motor4.run(FORWARD); //Gira o motor sentido horario

delay(2000);
motor1.setSpeed(0);
motor1.run(RELEASE); //Desliga o motor
motor2.setSpeed(0);
motor2.run(RELEASE); //Desliga o motor
motor3.setSpeed(0);
motor3.run(RELEASE); //Desliga o motor
motor4.setSpeed(0);
motor4.run(RELEASE); //Desliga o motor
 
delay(2000);
//motor.setSpeed(50); //Define velocidade baixa
//motor.run(BACKWARD); //Gira o motor sentido anti-horario
// 
//delay(2000);
//motor.setSpeed(0);
//motor.run(RELEASE); //Desliga o motor
 

}
