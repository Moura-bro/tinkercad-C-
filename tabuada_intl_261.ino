int Numero = 0;
int Resultado = 0;

void setup()
{
  Serial.begin(9600);

  Serial.println("Tabuada inteligente");
  Serial.println("Seja Bem-vindo");
  Serial.println("Qual tabuada voce quer, que eu exiba?");
  while(! Serial.available ()){}
  Numero = Serial.parseInt ();
  //-------------------^"Menu"--->Cabeça da maquina|  
  for(int contador = 1; contador <=10;contador++){ 
    
  Resultado  = Numero * contador ;

    
Serial.print("("+String(Numero));    
Serial.print(" * ");
Serial.print(contador);
Serial.print(" = "); 
Serial.print(Resultado);
Serial.println(")");
  }


}

void loop()
{

  
  
  
  
  
  
  
}