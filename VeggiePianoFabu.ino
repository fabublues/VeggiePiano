/*
Fabu Dias - Dezembro de 2015
Veggie Piano 
Estudo sobre toque, usando como base os fundamentos do Makey Makey.
Arduino UNO R3, comum, sem Shield.
A entrada dos Sensores é basicamente composta de uma entrada na Porta Analógica, vindo da base de um resistor de 1M. Na outra base o resistor esta ligado nos 5V.
O exemplo a seguir usa 5 Portas Analogicas.
Disponível no GitHub, com mais explicações.


*/

void setup() {
  // Abre a comunicação com a Porta Serial - 9600 bits per second:
  Serial.begin(9600);
  pinMode(6, OUTPUT); //Estes Pinos são opcionais, usei para ligar alguns Leds e ter uma resposta visual do Sensor. No caso, com 2 Leds.
  pinMode(7, OUTPUT); //Caso não use Leds, simplismente apague estas duas linhas. 
}

void loop() {
  // Leitura nas portas analogicas. 
  int sensorValue = analogRead(A0);
  int sensorValue1 = analogRead(A1);
  int sensorValue2 = analogRead(A2);
  int sensorValue3 = analogRead(A3);
  int sensorValue4 = analogRead(A4);
 
  
  delay(1);    
  if (sensorValue < 500) { //Função IF para acender o LED e Imprimir a letra S na porta Serial - O Valor, no caso "500", varia de acordo com o resistor escolhido. 
    digitalWrite(7, HIGH); 
    Serial.println("s"); //IMPORTANTE: Aqui vai a Letra que sera "Teclada" no PC atraves da porta serial. No caso um "S". 
    delay(100);
  }
  if (sensorValue > 500) {
    digitalWrite(7, LOW);
  }
  if (sensorValue1 < 500) {// Inicia Codigo para a Entrada Analogica A1
    digitalWrite(6, HIGH);
    Serial.println("d"); //Letra para o Serial
    delay(100);
  }
  if (sensorValue1 > 500) {
    digitalWrite(6, LOW);
  }
 if (sensorValue2 < 500) {// Inicia Codigo para entrada Analogia A2
    digitalWrite(8, HIGH);
    Serial.println("f"); //Letra para o Serial
    delay(100);
  }
  if (sensorValue1 > 500) {
    digitalWrite(8, LOW);
  }
   if (sensorValue3 < 500) {// Inicia Codigo para entrada Analogia A3
    digitalWrite(9, HIGH);
    Serial.println("g"); //Letra para o Serial
    delay(100);
  }
  if (sensorValue3 > 500) {
    digitalWrite(9, LOW);
  }
  if (sensorValue4 < 500) {// Inicia Codigo para entrada Analogia A4
    digitalWrite(10, HIGH);
    Serial.println("h"); //Letra para o Serial
    delay(100);
  }
  if (sensorValue4 > 500) {
    digitalWrite(10, LOW);
  }

}
