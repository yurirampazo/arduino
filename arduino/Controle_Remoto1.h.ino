/* Yuri Mina Rampazo
  Controle Remoto - led infra e fototransistor - entrada A0
  */
  // constantes não são alteradas

  const int entradaAnalog = A0;        // Entrada analógica do fototransistor;
  const int led1 = 13;
  const int led2 = 12;
  const int led3 = 11;
  int sensor = 0;                      // Leitura do sensor;
  int conta = 0;
   
void setup()
 {
  // Inicializa a comunicação serial;
  Serial.begin(9600);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
}

void loop()
{
  // Faz a leitura da entrada analógica;
  sensor = analogRead(entradaAnalog);

  Serial.print("sensor = ");
  Serial.print(sensor);
  Serial.print("conta = ");
  Serial.print(conta);

  if(sensor < 400)
{
    conta = conta + 1;
}
  if( conta == 0)
{
 digitalWrite(led1,LOW);
 digitalWrite(led2,LOW);
 digitalWrite(led3,LOW);
}
  else if( conta == 1)
{
 digitalWrite(led1,HIGH);
 digitalWrite(led2,LOW);
 digitalWrite(led3,LOW);
}
 else if( conta == 2)
{
 digitalWrite(led1,LOW);
 digitalWrite(led2,HIGH);
 digitalWrite(led3,LOW);
}
 else if( conta == 3)
{
 digitalWrite(led1,LOW);
 digitalWrite(led2,LOW);
 digitalWrite(led3,HIGH);
}
else 
{
 digitalWrite(led1,LOW);
 digitalWrite(led2,LOW);
 digitalWrite(led3,LOW);
   conta = 0;
}
 delay(400);
}
