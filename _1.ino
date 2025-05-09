int idade = 0;



void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Bem vindo ao CineMark");
  Serial.println();
    Serial.println("Qual sua iadade?");
    while( ! Serial.available()  );
    .idade = Serial.parseInt ();
  
  
  
  
  
  
  
  
  if(idade >= 1 && idade <= 9){
  Serial.println("Apenas filmes infantis");
  } 
  else if(idade >= 10 && idade < 13){
  Serial.println("Filmes infantis e infantojuvenis");
  } 
  else if(idade >= 14 && idade < 17){
  Serial.println("Filmes ate classificao 14 anos");
  }
  else if(idade >= 18 && idade < 59){
  Serial.println("Todos os tipos de filmes");
  } 
  else if(idade >= 60 && idade <120){
  Serial.println("Todos os tipos de filmes + desconto para idosos");
  }else{
     Serial.println("Idade invalida, verifique os dados");
  
  } 

 delay(10000);


}