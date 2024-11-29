#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Inisialisasi LCD I2C dengan alamat 0x27
LiquidCrystal_I2C lcd(0x27, 16, 2);

// Pin sensor HC-SR04
const int trigPin = 9;
const int echoPin = 10;

void setup() {
  // Inisialisasi LCD
  lcd.init();
  lcd.backlight();

  // Inisialisasi pin sensor
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  // Menampilkan pesan awal
  lcd.setCursor(0, 0);
  lcd.print("HC-SR04 & LCD");
  delay(2000);
  lcd.clear();
}

void loop() {
  // Mengirim sinyal trigger
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Membaca sinyal echo
  long duration = pulseIn(echoPin, HIGH);

  // Menghitung jarak (dalam cm)
  float distance = duration * 0.034 / 2;

  // Menampilkan jarak di LCD
  lcd.setCursor(0, 0);
  lcd.print("Jarak: ");
  lcd.print(distance);
  lcd.print(" cm");

  // Delay sebelum pembacaan berikutnya
  delay(1000);

}
