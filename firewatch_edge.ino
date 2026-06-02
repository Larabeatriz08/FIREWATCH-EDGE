#include <DHT.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define DHTPIN 2
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);

LiquidCrystal_I2C lcd(0x27, 16, 2);

int ledVerde = 8;
int ledAmarelo = 9;
int ledVermelho = 10;
int buzzer = 11;

void setup() {

  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(buzzer, OUTPUT);

  dht.begin();

  lcd.init();
  lcd.backlight();

  Serial.begin(9600);
}

void loop() {

  float temperatura = dht.readTemperature();
  float umidade = dht.readHumidity();

  lcd.clear();

  lcd.setCursor(0,0);
  lcd.print("T:");
  lcd.print(temperatura);
  lcd.print("C");

  lcd.setCursor(0,1);
  lcd.print("U:");
  lcd.print(umidade);
  lcd.print("%");

  digitalWrite(ledVerde, LOW);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVermelho, LOW);
  noTone(buzzer);

  if (temperatura < 30 && umidade > 60) {

    digitalWrite(ledVerde, HIGH);

    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("RISCO BAIXO");

  }
  else if (temperatura < 40 && umidade >= 40) {

    digitalWrite(ledAmarelo, HIGH);

    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("RISCO MEDIO");

  }
  else {

    digitalWrite(ledVermelho, HIGH);

    tone(buzzer, 1000);

    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("RISCO ALTO");

  }

  delay(2000);
}
