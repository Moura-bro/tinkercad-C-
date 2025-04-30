

void setup() {
  Serial.begin(9600); 
  while (!Serial);
  
  Serial.println("Calculadora de IMC");
  Serial.println("------------------");
}

void loop() {
  String nome;
  float peso, altura, imc;
  
 
  while (Serial.available()) Serial.read();
  

  Serial.println("\nDigite seu nome:");
  while (!Serial.available()); 
  nome = Serial.readStringUntil('\n');
  nome.trim();
  
 
  Serial.println("Digite seu peso (kg):");
  while (!Serial.available());
  peso = Serial.parseFloat();
  while (Serial.available()) Serial.read(); 
  
  Serial.println("Digite sua altura (m):");
  while (!Serial.available());
  altura = Serial.parseFloat();
  while (Serial.available()) Serial.read(); 
  imc = peso / (altura * altura);
  

  Serial.println("\nResultados:");
  Serial.print("Nome: ");
  Serial.println(nome);
  Serial.print("Peso: ");
  Serial.print(peso);
  Serial.println(" kg");
  Serial.print("Altura: ");
  Serial.print(altura);
  Serial.println(" m");
  Serial.print("IMC: ");
  Serial.println(imc, 2); // Mostra com 2 casas decimais
  
  // Classificação do IMC
  Serial.print("Classificacao: ");
  if (imc < 18.5) {
    Serial.println("Abaixo do peso");
  } else if (imc < 25) {
    Serial.println("Peso normal");
  } else if (imc < 30) {
    Serial.println("Sobrepeso");
  } else if (imc < 35) {
    Serial.println("Obesidade Grau I");
  } else if (imc < 40) {
    Serial.println("Obesidade Grau II");
  } else {
    Serial.println("Obesidade Grau III");
  }
  
  Serial.println("------------------");
  delay(3000); // Espera 3 segundos antes de reiniciar
}