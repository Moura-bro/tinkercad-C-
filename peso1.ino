//Faça um programa que receba o nome, o peso e a altura de uma
//pessoa. Calcule e imprima o nome e o IMC dessa pessoa - IMC = peso
 //(altura * altura).

float altura = 0.0;
float peso = 0.0;
String nome = " ";



void setup()
{
    Serial.begin(9600);
}

void loop()
{
   Serial.print("Qual e o seu nome?");
  while( ! Serial.available() );
  nome = Serial.readString();
  
  
  Serial.print("Qual e o sua altura?");
  while( ! Serial.available() );
  altura = Serial.parseFloat();
  
  
   Serial.print("Qual e o seu peso?");
  while( ! Serial.available() );
  peso = Serial.parseFloat();
  
  
float IMC = peso /(altura * altura);
   
   
   Serial.println("nome Informado: " + nome);
   Serial.println("altura: " + String(altura));
   Serial.println("peso: " + String(peso));
   Serial.println("IMC: " + String(IMC));
}