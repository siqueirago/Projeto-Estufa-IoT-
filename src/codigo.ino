const int sensorPin = A0;      // Pinagem do sensor de temperatura
const int motorPin = 8;        // Pinagem do motor
const int ledPin = 12;         // Pinagem do LED vermelho
const int buzzerPin = 7;       // Pinagem da buzina

void setup() {
  pinMode(motorPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
  int sensorValue = analogRead(sensorPin);
  float voltage = sensorValue * (5.0 / 1023.0);
  float temperature = voltage * 100;  // Conversão para temperatura em Celsius
  
  Serial.print("Temperatura: ");
  Serial.print(temperature);
  Serial.println(" °C");
  
  if (temperature >= 30 && temperature <= 50) {
    digitalWrite(motorPin, HIGH);  // Liga o motor se a temperatura for >= 30 °C e <= 50 °C
    digitalWrite(ledPin, LOW);     // Garante que o LED está desligado
    noTone(buzzerPin);             // Garante que a buzina está desligada
  } else if (temperature > 50) {
    digitalWrite(motorPin, LOW);   // Desliga o motor se a temperatura ultrapassar 50 °C
    digitalWrite(ledPin, HIGH);    // Liga o LED se a temperatura for > 50 °C
    tone(buzzerPin, 1000);         // Liga a buzina com tom de 1000 Hz se a temperatura for > 50 °C
  } else {
    digitalWrite(motorPin, LOW);   // Desliga o motor se a temperatura for < 30 °C
    digitalWrite(ledPin, LOW);     // Garante que o LED está desligado
    noTone(buzzerPin);             // Garante que a buzina está desligada
  }
  
  delay(1000);  // Aguarda 1 segundo antes de nova leitura
}


