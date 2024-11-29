const int RELAY_PIN = 7; // Pin relay

void setup() {
  pinMode(RELAY_PIN, OUTPUT); // Atur pin relay sebagai output
  digitalWrite(RELAY_PIN, LOW); // Matikan relay saat startup
}

void loop() {
  digitalWrite(RELAY_PIN, HIGH); // Hidupkan relay
  delay(1000); // Tunggu 1 detik
  digitalWrite(RELAY_PIN, LOW);  // Matikan relay
  delay(1000); // Tunggu 1 detik
}
