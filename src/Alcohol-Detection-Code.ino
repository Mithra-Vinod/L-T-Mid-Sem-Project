#include <LiquidCrystal.h>

// MQ-3 Sensor
#define MQ3_PIN A0

// Output devices
#define GREEN_LED 2
#define RED_LED 3
#define BUZZER 4
#define RELAY 5

// LCD connections (RS, E, D4, D5, D6, D7)
LiquidCrystal lcd(7, 6, 8, 9, 10, 11);

void setup() {
  pinMode(MQ3_PIN, INPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);
  pinMode(BUZZER, OUTPUT);
  pinMode(RELAY, OUTPUT);

  lcd.begin(16, 2);
  lcd.print("Alcohol Detector");
  delay(2000);
  lcd.clear();
}

void loop() {
  int sensorValue = analogRead(MQ3_PIN);

  lcd.setCursor(0, 0);
  lcd.print("Value: ");
  lcd.print(sensorValue);

  lcd.setCursor(0, 1);

  if (sensorValue < 300) {
    lcd.print("Status: SAFE   ");
    digitalWrite(GREEN_LED, HIGH);
    digitalWrite(RED_LED, LOW);
    digitalWrite(BUZZER, LOW);
    digitalWrite(RELAY, HIGH); // Engine ON
  }
  else if (sensorValue >= 300 && sensorValue < 600) {
    lcd.print("Status: ALERT  ");
    digitalWrite(GREEN_LED, LOW);
    digitalWrite(RED_LED, HIGH);
    tone(BUZZER, 1000, 200);
    digitalWrite(RELAY, LOW);  // Engine OFF
  }
  else {
    lcd.print("Status: DANGER ");
    digitalWrite(GREEN_LED, LOW);
    digitalWrite(RED_LED, HIGH);
    digitalWrite(BUZZER, HIGH);
    digitalWrite(RELAY, LOW);  // Engine OFF
  }

  delay(500);
}
