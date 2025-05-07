float salario = 0;




void setup()
{
  Serial.begin(9600);
}

void loop()
{
  
  
    Serial.println("Quanto voce ganha?");
    while( ! Serial.available()  );
    salario = Serial.parseFloat ();
 
  
  
  if(salario <= 500){;
    float SalarioAC = salario + (salario * 0.30);    
  Serial.println("Esse e seu salario:  "+ String(SalarioAC));
                    }else{
    Serial.println("voce nao tem direito ao aumento");
  }
  
  
   
  
  
  
  
  
  
}






