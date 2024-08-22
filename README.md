# Projeto-Estufa-IoT
Este projeto é uma demonstração prática das habilidades e conhecimentos adquiridos na Formação Specialist da [DIO](https://www.dio.me), aplicados à automação e controle em um ambiente agrícola.
O objetivo é desenvolver um sistema automatizado para o controle de uma estufa de hortaliças utilizando o simulador [Tinkercad](https://WWW.tinkercad.com/). 

## Funcionalidade do Sistema
* **Monitoramento da Temperatura:**
O sensor de temperatura realiza leituras contínuas da temperatura interna da estufa.

* **Controle do Ventilador:**
O ventilador é ativado quando a temperatura atinge ou excede 30°C, ajudando a resfriar a estufa. O ventilador é desligado quando a temperatura retorna a níveis seguros.

* **Alertas de Emergência:**
Quando a temperatura ultrapassa 50°C, o LED vermelho e a buzina são acionados para alertar sobre uma condição de emergência.

## Componentes Utilizados:
* Arduino Uno
* Sensor de temperatura (ex.: LM35)
* Motor DC
* Transistor NPN (ex.: 2N2222) - para controlar o motor
* Diodo (ex.: 1N4007) - para proteger contra a corrente inversa do motor
* Resistores (220Ω para o LED, 10kΩ para o transistor)
* LED vermelho
* Buzina (Piezo Speaker)
* Fonte de alimentação (ou usar a alimentação do próprio Arduino)
* Protoboard e fios de conexão
## Passo a Passo:
### 1. Montagem do Circuito:
#### Sensor de Temperatura:

* Conecte o pino VCC do sensor ao 5V do Arduino.
* Conecte o pino GND ao GND do Arduino.
* Conecte o pino de saída de sinal (Vout) a um pino analógico do Arduino (ex.: A0).
  
#### Motor:

* Conecte o terminal positivo do motor ao coletor do transistor NPN.
* Conecte o emissor do transistor ao GND do Arduino.
* Conecte a base do transistor a um pino digital do Arduino (ex.: D9) através de um resistor de 10kΩ.
* Coloque um diodo em paralelo com o motor, com o catodo conectado ao terminal positivo e o anodo ao terminal negativo, para proteção.
#### LED Vermelho:

* Conecte o anodo do LED ao pino digital do Arduino (ex.: D8) através de um resistor de 220Ω.
* Conecte o catodo ao GND.
#### Buzina:

* Conecte o terminal positivo da buzina a um pino digital do Arduino (ex.: D7).
* Conecte o terminal negativo ao GND.
## Estrutura Física do Projeto  
![_Projeto Estufa IoT](https://github.com/user-attachments/assets/c061c737-d2c5-40ec-be90-73f393701e1a)

## Referências

- [Documentação do Arduino](https://www.arduino.cc/en/Guide)
