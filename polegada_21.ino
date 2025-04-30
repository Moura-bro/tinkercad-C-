float cm = 0.0;
float pol = 0.0;







void setup()
{
   Serial.begin(9600);
}

void loop()
{
    Serial.print(" voce quer coverter quantas polegadas?");
  while( ! Serial.available() );
  pol = Serial.parseFloat();
  
 cm = pol * 2.54;
   
   Serial.println("cemtimetros: " + String(cm));
  
}