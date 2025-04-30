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
  
  if( idade >=16 , idade<=71)
    Serial.println("Voto obrigatorio");
     else
    Serial.println("Sem idade para votar");
}



