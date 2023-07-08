//Casa inteligente com o bluetooth HC-05 - Professor Denis Silva
#include <SoftwareSerial.h> //Biblioteca para conectar com o bluetooth
#include <Servo.h> //Biblioteca do servo motor
SoftwareSerial serialdobluetooth(8,9); // Portas para o serial do bluetooth (RX, TX)

#define led1 0 // Pino de conexão do led 1
#define led2 1 // Pino de conexão do led 2
#define led3 2 // Pino de conexão do led 3
#define led1 3 // Pino de conexão do led 4
#define led2 4 // Pino de conexão do led 5
#define led3 5 // Pino de conexão do led 6
#define led1 6 // Pino de conexão do led 7
#define led2 7 // Pino de conexão do led 8
#define led3 10 // Pino de conexão do led 9
#define led1 11 // Pino de conexão do led 10
#define SERVO 6 // Porta ligada o servo motor

Servo s; // Variável Servo
int pos; // Posição Servo



int valordobluetooth; // Responsável por ler o valor de entrada do bluethooth

void setup() 

{
  serialdobluetooth.begin(9600); //Iniciando a conexão serial do bluetooth
  pinMode(led1, OUTPUT); //Responsável por ligar a saída do led 1
  pinMode(led2, OUTPUT); //Responsável por ligar a saída do led 2
  pinMode(led3, OUTPUT); //Responsável por ligar a saída do led 3
  pinMode(led4, OUTPUT); //Responsável por ligar a saída do led 4
  pinMode(led5, OUTPUT); //Responsável por ligar a saída do led 5
  pinMode(led6, OUTPUT); //Responsável por ligar a saída do led 6
  pinMode(led7, OUTPUT); //Responsável por ligar a saída do led 7
  pinMode(led8, OUTPUT); //Responsável por ligar a saída do led 8
  pinMode(led9, OUTPUT); //Responsável por ligar a saída do led 9
  pinMode(led10, OUTPUT); //Responsável por ligar a saída do led 10
  digitalWrite(led1,LOW); //Permite que os leds estejam desligado antes de fazermos a ligação por bluethooth
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);
  digitalWrite(led9,LOW);
  digitalWrite(led10,LOW);
  s.attach(SERVO); //cria a conexão com o servo motor
  Serial.begin(9600); //cria um canal de comunicação com o serial 
  s.write(0); // Inicia o servo motor na posição zero
}

void loop() {
  if (serialdobluetooth.available()) //Se o bluetooth estiver em funcionamento, ele vai ler o comando enviado do celular para o bluethooth HC-05
  {
  valordobluetooth = serialdobluetooth.read();
  }

 if (valordobluetooth=='A') //se a Leitura do valor do bluetooth for essa, ele acende o led 1 
 {
  digitalWrite (led1,HIGH);
  }

    if (valordobluetooth=='a') //se a Leitura do valor do bluetooth for essa, ele apaga o led 1
 {
  digitalWrite (led1,LOW);
  }

    if (valordobluetooth=='B') //se a Leitura do valor do bluetooth for essa, ele acende o led 2 
 {
  digitalWrite (led2,HIGH);
  }

    if (valordobluetooth=='b') //se a Leitura do valor do bluetooth for essa, ele apaga o led 2
 {
  digitalWrite (led2,LOW);
 }

 if (valordobluetooth=='C') //se a Leitura do valor do bluetooth for essa, ele acende o led 3
 {
  digitalWrite (led3,HIGH);
  }

    if (valordobluetooth=='c') //se a Leitura do valor do bluetooth for essa, ele apaga o led 3
 {
  digitalWrite (led3,LOW);
  }
  if (valordobluetooth=='D') //se a Leitura do valor do bluetooth for essa, ele acende o led 4
 {
  digitalWrite (led4,HIGH);
  }

    if (valordobluetooth=='d') //se a Leitura do valor do bluetooth for essa, ele apaga o led 4
 {
  digitalWrite (led4,LOW);
  }
  if (valordobluetooth=='E') //se a Leitura do valor do bluetooth for essa, ele acende o led 5
 {
  digitalWrite (led5,HIGH);
  }

    if (valordobluetooth=='e') //se a Leitura do valor do bluetooth for essa, ele apaga o led 5
 {
  digitalWrite (led5,LOW);
  }
  if (valordobluetooth=='F') //se a Leitura do valor do bluetooth for essa, ele acende o led 6
 {
  digitalWrite (led6,HIGH);
  }

    if (valordobluetooth=='f') //se a Leitura do valor do bluetooth for essa, ele apaga o led 6
 {
  digitalWrite (led6,LOW);
  }
  if (valordobluetooth=='G) //se a Leitura do valor do bluetooth for essa, ele acende o led 7
 {
  digitalWrite (led7,HIGH);
  }

    if (valordobluetooth=='g') //se a Leitura do valor do bluetooth for essa, ele apaga o led 7
 {
  digitalWrite (led7,LOW);
  }
  if (valordobluetooth=='H') //se a Leitura do valor do bluetooth for essa, ele acende o led 8
 {
  digitalWrite (led8,HIGH);
  }

    if (valordobluetooth=='h') //se a Leitura do valor do bluetooth for essa, ele apaga o led 8
 {
  digitalWrite (led8,LOW);
  }
  if (valordobluetooth=='I') //se a Leitura do valor do bluetooth for essa, ele acende o led 9
 {
  digitalWrite (led9,HIGH);
  }

    if (valordobluetooth=='i') //se a Leitura do valor do bluetooth for essa, ele apaga o led 9
 {
  digitalWrite (led9,LOW);
  }
  if (valordobluetooth=='J') //se a Leitura do valor do bluetooth for essa, ele acende o led 10
 {
  digitalWrite (led10,HIGH);
  }

    if (valordobluetooth=='j') //se a Leitura do valor do bluetooth for essa, ele apaga o led 10
 {
  digitalWrite (led10,LOW);
  }
  if (valordobluetooth=='K') //se a Leitura do valor do bluetooth for essa, ele acende os 5 primeiros leds
 {
  digitalWrite (led1,HIGH);
  digitalWrite (led2,HIGH);
  digitalWrite (led3,HIGH);
  digitalWrite (led4,HIGH);
  digitalWrite (led5,HIGH);
  }

    if (valordobluetooth=='k') //se a Leitura do valor do bluetooth for essa, ele apaga os 5 primeiros leds
 {
  digitalWrite (led1,LOW);
  digitalWrite (led2,LOW);
  digitalWrite (led3,LOW);
  digitalWrite (led4,LOW);
  digitalWrite (led5,LOW);
  }
  if (valordobluetooth=='L') //se a Leitura do valor do bluetooth for essa, ele acende os 5 últimos leds
 {
  digitalWrite (led6,HIGH);
  digitalWrite (led7,HIGH);
  digitalWrite (led8,HIGH);
  digitalWrite (led9,HIGH);
  digitalWrite (led10,HIGH);
  }

    if (valordobluetooth=='l') //se a Leitura do valor do bluetooth for essa, ele apaga os 5 últimos leds
 {
  digitalWrite (led6,LOW);
  digitalWrite (led7,LOW);
  digitalWrite (led8,LOW);
  digitalWrite (led9,LOW);
  digitalWrite (led10,LOW);
  }
  if (valordobluetooth=='M') //se a Leitura do valor do bluetooth for essa, ele acende os 5 últimos leds
 {
   for(pos = 0; pos < 90; pos++)
  {
    s.write(pos);
  delay(15);
  }
  }

    if (valordobluetooth=='m') //se a Leitura do valor do bluetooth for essa, ele apaga os 5 últimos leds
 {
  for(pos = 90; pos >= 0; pos--)
  {
    s.write(pos);
    delay(15);
  }
  }

 
}
