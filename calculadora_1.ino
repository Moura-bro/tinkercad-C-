 
long adn = 0;
long ano = 0;

void setup()
{
 Serial.begin(9600);
  
}

void loop()

{ Serial.print("Digite o ano que naceu?");
  while( ! Serial.available() );
  adn = Serial.parseInt();
  
   Serial.print(" em que ano voce esta?");
  while( ! Serial.available() );
  ano = Serial.parseInt(); 
  
  long idadeano = ano - adn;
  long idademes = idadeano * 12;
  long idadesemanas = idademes * 4;
      
 Serial.println("Idade em semanas: " + String(idadesemanas));
  
  
}
