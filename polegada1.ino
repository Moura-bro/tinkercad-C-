// C++ code
/*faça um programa que receba a medida em centímetros e exiba esse
número em polegadas. OBS: Uma polegada equivale a 2.54
centímetros.*/

float cm = 0.0;
float pol = 0.0;







void setup()
{
   Serial.begin(9600);
}

void loop()
{
    Serial.print(" voce quer coverter quantos cemtimetros?");
  while( ! Serial.available() );
  cm = Serial.parseFloat();
  
 pol = cm / 2.54;
   
   Serial.println("polegadas: " + String(pol));
  
}