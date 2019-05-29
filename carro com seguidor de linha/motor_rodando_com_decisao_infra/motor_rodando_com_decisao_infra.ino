#include <AFMotor.h>

AF_DCMotor m1(1); //Seleciona o motor 1
AF_DCMotor m2(2); //Seleciona o motor 2
AF_DCMotor m3(3); //Seleciona o motor 3
AF_DCMotor m4(4); //Seleciona o motor 4


int infraEsq = 32;
int infraDir = 50;
int valueEsq;
int valueDir;

void setup() {
  pinMode(infraEsq,INPUT);
  pinMode(infraDir,INPUT);
  Serial.begin(9600);
}

void loop() {
  valueEsq = digitalRead(infraEsq);
  valueDir = digitalRead(infraDir);
  Serial.println(valueEsq);
  Serial.println(valueDir);

  // 0 - branco e 1 - preto
  
  //ir pra frente
  if(valueEsq == 1 && valueDir == 1){
    Serial.println("");
    Serial.println("Indo pra frente");
    m1.setSpeed(255); //Define a velocidade maxima
    m1.run(BACKWARD); //Gira o motor sentido horario
    m2.setSpeed(255); //Define a velocidade maxima
    m2.run(BACKWARD); //Gira o motor sentido horario
    
    m3.setSpeed(255); //Define a velocidade maxima
    m3.run(FORWARD); //Gira o motor sentido horario
    m4.setSpeed(255); //Define a velocidade maxima
    m4.run(FORWARD); //Gira o motor sentido horario 
  }

  
  if(valueEsq == 0 && valueDir == 1){
    //Virar o carrinho a direita
    Serial.println("");
    Serial.println("Virando a direita");
    m1.setSpeed(200); //Define a velocidade maxima
    m1.run(BACKWARD); //Gira o motor sentido horario
    m2.setSpeed(200); //Define a velocidade maxima
    m2.run(BACKWARD); //Gira o motor sentido horario
    
    m3.setSpeed(200); //Define a velocidade maxima
    m3.run(BACKWARD); //Gira o motor sentido horario
    m4.setSpeed(200); //Define a velocidade maxima
    m4.run(BACKWARD); //Gira o motor sentido horario 
  }

  if(valueEsq == 1 && valueDir == 0){
    //Virar o carrinho a esquerda
    Serial.println("");
    Serial.println("Virando a esquerda");
    m1.setSpeed(200); //Define a velocidade maxima
    m1.run(FORWARD); //Gira o motor sentido horario
    m2.setSpeed(200); //Define a velocidade maxima
    m2.run(FORWARD); //Gira o motor sentido horario
    
    m3.setSpeed(200); //Define a velocidade maxima
    m3.run(FORWARD); //Gira o motor sentido horario
    m4.setSpeed(200); //Define a velocidade maxima
    m4.run(FORWARD); //Gira o motor sentido horario 
  }
    
}
