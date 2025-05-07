long numero = 0;




void setup()
{
  Serial.begin(9600);
}

void loop()
{
  
  
    Serial.println("insira um numero?");
    while( ! Serial.available()  );
    numero = Serial.parseInt ();
 
  long numerof = numero %2;
  
    if(numerof == 0){;
  Serial.println("Esse Numero e par");
  }else{
    Serial.println("Esse Numero e impar");
  }
  
  


}