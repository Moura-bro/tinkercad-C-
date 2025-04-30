// C++ code
//

int idade = 0;


void setup()
{
  Serial.begin(9600);
}

void loop()
{
  
  Serial.println("Qual a sua Idade?");
  while(! Serial.available ());
  idade = Serial.parseInt ();
  
  
  
  Serial.println("Idade: "+ String(idade));
  
  if( idade >=18)
    Serial.println("Voce e maior de idade!");
     else
    Serial.println("Voce e menor de idade!!");
}