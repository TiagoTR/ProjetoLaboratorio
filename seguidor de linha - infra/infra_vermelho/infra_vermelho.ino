int infraEsq = 8;
int infraDir = 9;
int valueEsq;
int valueDir;

void setup() {
  pinMode(8,INPUT);
  pinMode(9,INPUT);
  Serial.begin(9600);
}

void loop() {
  valueEsq = digitalRead(infraEsq);
  valueDir = digitalRead(infraDir);
  Serial.println(valueEsq);
  Serial.println(valueDir);
  delay(500);

  // 0 - branco e 1 - preto
  
  //ir pra frente
  if(valueEsq == 0 && valueDir == 0){
    Serial.println("");
    Serial.println("Indo pra frente");
  }

  
  if(valueEsq == 0 && valueDir == 1){
    //Virar o carrinho a direita
    Serial.println("");
    Serial.println("Virando a direita");
  }

  if(valueEsq == 1 && valueDir == 0){
    //Virar o carrinho a esquerda
    Serial.println("");
    Serial.println("Virando a esquerda");
  }
    
}
