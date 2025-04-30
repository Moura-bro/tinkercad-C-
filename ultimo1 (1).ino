// C++ code
//
String nome = "";
String cargo = "";
float salario = 0.0;




void setup()
 
{
  Serial.begin(9600);
}

void loop()
{
  Serial.print("Qual e o seu nome?");
  while( ! Serial.available() );
  nome = Serial.readString();
  
   Serial.print("Qual e o seu cargo?");
  while( ! Serial.available() );
 cargo = Serial.readString();
  
  Serial.print("Qual e o seu salario?");
  while( ! Serial.available() );
  salario = Serial.parseFloat();
  
  float salarioacrecido = salario * 0.10;
  float sal = salario + salarioacrecido;
  
   Serial.println("Nome: " + nome);
   Serial.println("cargo: " + cargo);
  Serial.println("salario*10%: " + String(sal));
  
  
}