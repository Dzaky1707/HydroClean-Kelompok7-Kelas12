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
