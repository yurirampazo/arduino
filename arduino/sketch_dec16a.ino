 // definindo uma variável inteira chamada led que assume o valor 13:
  int led = 13;

// rotina de configuração  
  
void setup() 
{
 // inicializa o pino LED (13) como saída digital:
 pinMode (led, OUTPUT);
 

}
// rotina de execução
void loop() 
{
  digitalWrite(led, HIGH); // acende LED - HIGH = 5V
// apaga LED - LOW = 0V
}
