/*Calcule a média entre DUAS notas.
Verifique se o aluno foi APROVADO.
Aprovado se média é MAIOR OU IGUAL A 6 e SE A frequência É MAIOR OU IGUAL 75%.
Caso contrário, exiba se foi reprovado por nota
Exiba se foi REPROVADO por frequência.
Exiba se foi REPROVADO 

frequência e média da nota .
Se a média for exatamente 10, exiba: "Parabéns! Nota máxima!".
*/

float nt =0 , nt2 = 0 ; 
int fre = 0;
String nome = "";

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  
  Serial.println("Qual o seu Nome?");
  while(! Serial.available());
  nome = Serial.readString ();
  
   Serial.println("Insira sua primera Nota?");
  while(! Serial.available());
  nt = Serial.parseFloat ();
  
  
  Serial.println("Insira sua Segunda Nota?");
  while(! Serial.available());
  nt2 = Serial.parseFloat ();
  

  
   Serial.println("Agora insira sua frequencia");
  while(! Serial.available());
  fre = Serial.parseInt ();
  
  float md = (nt+nt2) /2 ;
  
  Serial.println("" + nome);
  
    if (md >= 6 && md <=9 && fre >=75 ) {
    Serial.println("Aprovado!");
  }else if(md < 6 && fre >= 75){
    Serial.println( "REPROVADO POR NOTA!");
  }else if(md >=6 && md <=10 && fre < 75 ){
      Serial.println("REPROVADO POR FALTA!");
    }else if(md >= 10 && fre == 100){
    Serial.println("Parabens! Nota maxima!");
    }else{
      Serial.println("REPROVADO");
    }
  
  
  
}
    