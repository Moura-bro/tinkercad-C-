// C++ code
//

String cor = "";
String vermelho = "";
String verde = "";

void setup()
{
  Serial.begin(9600);
}

void loop()
{
    Serial.println("qual a cor do sinal ?");
  while ( !Serial.available() ); 
  cor = Serial.readString();
  
  if (cor == vermelho , cor == verde)
    Serial.println("Pare");
  else
     Serial.println("Em frente");
 
  
 delay (4000);
}