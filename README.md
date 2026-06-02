# FIREWATCH EDGE NODE

## Integrantes

* Lara Beatriz de Sousa Lima – RM572589
* Livia Laur Pisanello – RM569017
* Rafael Dias Fontes – RM570504
* Gustavo Pereira Inoue – RM570549
* Luca Baccari dos Santos – RM569807



# Descrição do Projeto

O FIREWATCH EDGE NODE é uma estação inteligente de monitoramento ambiental desenvolvida para identificar condições favoráveis ao surgimento de queimadas. O sistema utiliza sensores para coletar dados do ambiente e processa essas informações localmente por meio de um Arduino, gerando alertas em tempo real.



# Objetivo da Solução

Monitorar temperatura e umidade do ambiente para identificar níveis de risco de queimadas e emitir alertas preventivos de forma local, aplicando conceitos de Edge Computing.



# Componentes Utilizados

* Arduino Uno
* Sensor DHT22
* Display LCD 16x2 I2C
* LED Verde
* LED Amarelo
* LED Vermelho
* Buzzer
* Resistores 220Ω
* Protoboard
* Jumpers



# Explicação do Funcionamento

O sensor DHT22 realiza a leitura da temperatura e da umidade do ambiente. O Arduino processa essas informações localmente e classifica o risco de queimadas em três níveis:

* Baixo: LED Verde
* Médio: LED Amarelo
* Alto: LED Vermelho e buzzer

O nível de risco também é exibido no display LCD.



# Estrutura do Circuito

### DHT22

* VCC → 5V
* SDA/DATA → D2
* GND → GND

### LEDs

* LED Verde → D8
* LED Amarelo → D9
* LED Vermelho → D10

### Buzzer

* Positivo → D11
* Negativo → GND

### LCD I2C

* VCC → 5V
* GND → GND
* SDA → A4
* SCL → A5



# Instruções de Execução

1. Abrir o projeto no Wokwi.
2. Montar o circuito conforme as conexões descritas.
3. Inserir o código Arduino no simulador.
4. Iniciar a simulação.
5. Alterar os valores de temperatura e umidade do DHT22 para testar os diferentes níveis de risco.
6. Observar as respostas dos LEDs, LCD e buzzer.
