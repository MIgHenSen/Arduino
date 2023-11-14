// Variáveis de tipo byte(0-255)
byte contLoop = 0, contSetup = 0;

// Função de Inicialização da placa arduino
void setup() {
  // Define como saída o pino 13
  pinMode(13, OUTPUT);
  if(contSetup < 3){
    // Coloca o pino 13 em nível lógico 1
    digitalWrite(13, HIGH);
    // Gera um atraso de 1 segundo
    delay(1000);

    // Coloca o pino 13 em nível lógico 0
    digitalWrite(13, LOW);
    // Gera um atraso de 1 segundo
    delay(1000);
    contSetup ++;
    setup();
  }
}

void loop() {
  if(contLoop < 4){
    // Coloca o pino 13 em nível lógico 1
    digitalWrite(13, HIGH);
    // Gera um atraso de 1 segundo
    delay(500);

    // Coloca o pino 13 em nível lógico 1
    digitalWrite(13, LOW);
    // Gera um atraso de 1 segundo
    delay(500);
    contLoop ++;
  }
}
