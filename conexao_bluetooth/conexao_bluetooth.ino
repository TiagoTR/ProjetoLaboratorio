char input;
int led=8;

void setup(){
  pinMode(led, OUTPUT);
  pinMode(13, OUTPUT);  
  digitalWrite(13, LOW);
  Serial.begin(9600);
  delay(500);
  Serial.println("Bluetooth conectado.");
}

void loop(){
  input=Serial.read();
    switch(input){
      case 'a':
        digitalWrite(led,LOW);
        delay(500);
        Serial.println("Led off");
      break;
      case 'b':
        digitalWrite(led,HIGH);
        delay(500);
        Serial.println("Led on");
      break;
      default:
        delay(500);
        Serial.println("introduza a ou b");
     }
 }
