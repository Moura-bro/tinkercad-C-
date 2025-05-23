int contador = 0, SN = 0;  
int ledVEMELHO = 13;
int ledAMARELO = 12;
int ledVERDE = 11;
void setup()
{
  Serial.begin(9600);
  pinMode(ledVEMELHO, OUTPUT);
  pinMode(ledAMARELO, OUTPUT);
  pinMode(ledVERDE, OUTPUT);

}// fim do stp
//-----------------------------------------------
void loop()
{
 
   do{
     
  Serial.println("Bem-vindo(a) A INTERFACE LED");
                                      delay(700);
Serial.println();
  Serial.println("Voce gostaria de ligar as luzes?");
Serial.println("-----------------------------------");
                                           delay(700);
  Serial.println("1)-Ligar Led Verde");
Serial.println("-----------------------------------");
                                            delay(70);
  Serial.println("2)-Desligar Led Verde");
Serial.println("-----------------------------------"); 
                                            delay(70);
  Serial.println("3)-Ligar Led Amarelo");
Serial.println("-----------------------------------");
                                            delay(70);
  Serial.println("4)-Desligar Led Amarelo");
Serial.println("-----------------------------------");
                                            delay(70);
  Serial.println("5)-Ligar Led Vermelho");
Serial.println("-----------------------------------");
                                           delay(700);
  Serial.println("6)-Desligar Led Vermelho");
Serial.println("-----------------------------------");
                                            delay(70);
  Serial.println("7)-Ligar Todos os Leds");
Serial.println("-----------------------------------");
                                            delay(70);
  Serial.println("8)-Desligar Todos os Leds");
Serial.println("-----------------------------------");
                                            delay(70);
  Serial.println("9)-Sair");
Serial.println("-----------------------------------");
                                            delay(70);
  while(!Serial.available()){}
  SN = Serial.parseInt();
 
    
    switch(SN){
    case 1:      
        digitalWrite(ledVERDE, HIGH);
      	break;
          
      case 2: 
      digitalWrite(ledVERDE, LOW);      
     	break;
          	
      case 3: 
        digitalWrite(ledAMARELO, HIGH);     
      	break;
          	
      case 4:       
      digitalWrite(ledAMARELO, LOW);      
      	break;
      
      case 5:       
        digitalWrite(ledVEMELHO, HIGH);         
         break;
      
      case 6:             
      digitalWrite(ledVEMELHO, LOW);     
         break;
            
      case 7:      
        digitalWrite(ledVERDE, HIGH);
          digitalWrite(ledVEMELHO, HIGH);
             digitalWrite(ledAMARELO, HIGH);
       break;
      
      case 8: 
      digitalWrite(ledVERDE, LOW);
         digitalWrite(ledVEMELHO, LOW);
            digitalWrite(ledAMARELO, LOW);     
         break;      
       
      case 9:
     Serial.println("Saindo");
     Serial.print("Obrigado por usar nosso sistema");
      
      default:
      	 Serial.println("!!!OPCAO INVALIDA!!!");

    }//fim do switch 
Serial.println();
delay(2000);
  }//fim do "DO" 
  while(contador != 0 );

}//fim do loop