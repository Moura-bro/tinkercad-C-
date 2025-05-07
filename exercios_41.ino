float numero = 0;




void setup()
{
  Serial.begin(9600);
}

void loop()
{
  
  
    Serial.println("Incira um numero?");
    while( ! Serial.available()  );
    numero = Serial.parseFloat ();
 
  
  
  if(numero >=0){;
      
  Serial.println("Esse numero e positivo");
                    }else{
    Serial.println("esse numero e negativo");
  }
  
  
  
  }