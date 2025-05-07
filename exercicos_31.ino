float preco = 0 ,  pers = 0;




void setup()
{
  Serial.begin(9600);
}

void loop()
{
  
  
    Serial.println("Qual o Preco?");
    while( ! Serial.available()  );
    preco = Serial.parseFloat ();
 
   Serial.println("Qual o Percentual?");
    while( ! Serial.available()  );
    pers = Serial.parseFloat ();
  
    float precoAC = preco + (preco * pers);    
  Serial.println("Preco:  "+ String(precoAC));
  
  if(pers >= 0.50){;
  Serial.println("sua margen de lucro sera boa ");
    }else{
    Serial.println("o produto sera vendido com uma margem muito pequena de lucro.");
  } 
  
  
  
  
  
  
  }