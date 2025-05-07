long numero = 0, numero2 = 0;




void setup()
{
  Serial.begin(9600);
}

void loop()
{
  
  
    Serial.println("insira um numero?");
    while( ! Serial.available()  );
    numero = Serial.parseInt ();
  
   Serial.println("insira o segundo numero?");
    while( ! Serial.available()  );
    numero2 = Serial.parseInt ();
  
  
  
  
 
  
  
    if(numero >= numero2){;
  Serial.println("o primeiro numero e maior que o segundo");
  }else{
    Serial.println("o segundo e maior do que o primeiro");
  }
  
  


}