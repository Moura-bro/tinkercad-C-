long idadeMinutos = 0;
long idadeHoras = 0;
long idadedias = 0;
int idadeMeses = 0;
int idade = 0;



void setup()
  
{
  Serial.begin(9600);
}


void loop()
{ Serial.print("Digite sua idade em anos?");
  while( ! Serial.available() );
  idade = Serial.parseInt();
 
 idadeMeses = idade * 12;
 idadedias = idadeMeses * 365;
 idadeHoras = idadedias * 24;
 idadeMinutos = idadeHoras * 60;
 
  Serial.println("Idade em Meses: " + String(idadeMeses));
 Serial.println("Idade em Dias: " + String(idadedias));
 Serial.println("Idade em Horas: " + String(idadeHoras));
  Serial.println("Idade em Minutos: " + String(idadeMinutos));
 
 
 
}
