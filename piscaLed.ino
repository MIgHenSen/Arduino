// Função de Inicialização da placa arduino
void setup() {
  // Define como saída o pino 13
  pinMode(13, OUTPUT);
}

// Função de loop infinito
void loop() {
  // Coloca o pino 13 em nível lógico 1
  digitalWrite(13, HIGH);
  // Gera um atraso de 1 segundo
  delay(500);
  
  // Coloca o pino 13 em nível lógico 0
  digitalWrite(13, LOW);
  // Gera um atraso de 1 segundo
  delay(500);
}
