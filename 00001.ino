const int ledvermelho = 13;
const int ledverd = 12;
 int ledazl1 = 4;
 int ledazl2 = 3;
 int ledazl3 = 2;

void desenhapontinhos(int qtdpontos =5, int tempo = 700){
 for(int i = 1; i <=5; i++)
    {
      Serial.print(".");
        delay(tempo);
    }
 Serial.println();
  
}

void desenhacabecalho(){
 Serial.println("");
     Serial.println("");
           Serial.println("---PROGRAMA JOGO DE DADOS");
     Serial.println("");
  Serial.println("");
}

String devolveTexto()
{
  String texto = "uma linha de texto\n";
         texto += "Mais uma linha de texto\n";
         texto += "Terceira linha\n";
    return texto;
}

void acertos(int numerodeacer = 3){
  for (int n = 0; n <=3; n++){
    digitalWrite(ledazl1, HIGH);
    digitalWrite(ledazl2, HIGH);
    digitalWrite(ledazl3, HIGH);
  
  
  } 

}



void setup()
{
 Serial.begin(9600);
   randomSeed(analogRead(0));//inicia e normaliza a porta randomica para evitar o mesmo numero
pinMode(ledvermelho, OUTPUT);
  pinMode(ledverd, OUTPUT);
   pinMode(ledazl1, OUTPUT);
   pinMode(ledazl2, OUTPUT);
   pinMode(ledazl3, OUTPUT);



}

void loop()
{
  
 desenhacabecalho();
 /*String meuTexto = devolveTexto();
 Serial.println(meuTexto);*/
  
  
      Serial.println("Quanatas vezes voce que jogar?");
    while (!Serial.available());
int qtdRodadas = Serial.parseInt();
  
 int vetPalpites[qtdRodadas];
 int vetResultados[qtdRodadas]; 
  
  for(int r = 0;r < qtdRodadas; r++){
  
      Serial.println("Digite um palpite de 1 a 6");
    while (!Serial.available());
int palpite = Serial.parseInt();

Serial.print("Jogando Dado");
    
desenhapontinhos();
    
   
    
    
    int numeroSorteado =3; //random (1,7);// gera um numero aleatorio entre min e max -1
     Serial.println("palpite " +String(palpite));
    Serial.println("Numero " +String(numeroSorteado));

   vetPalpites[r]= palpite;          
   vetResultados[r]=numeroSorteado;  
    
    
  if(numeroSorteado == palpite){
   Serial.println("Voce acertou");
     digitalWrite(ledverd, HIGH);
  delay(700);
    digitalWrite(ledverd, LOW);
    acertos();
  }
    else{ 
     Serial.println("Voce Errou");
   digitalWrite(ledvermelho, HIGH);
  delay(700);
    digitalWrite(ledvermelho, LOW);
  }

  
 
}//fim do for 
  

  
  Serial.println();
  Serial.println("estatisticas do jogo");
  Serial.println();
 
  for(int i = 0; i <qtdRodadas; i++){
  Serial.println("Rodada " + String(i + 1)+ ":");
  Serial.println("Palpites:  " + String(vetPalpites[i]));  
  Serial.println(" Dado:  " + String(vetResultados[i]));
    
    
   
   Serial.println("Resultado: " + String(vetPalpites[i] == vetResultados[i] ? "Acertou" : "Errou"));                
    
    
    
  Serial.println("------------------");
  Serial.println();
  }//fim do for 2 

  
 Serial.println("FIM DO JOGO, RENICIANDO O SISTEMA!!");
delay(600); 
}//Fim do loop