const int Valve1Pin = 13; // Pin untuk valve
const int Valve2Pin = 12;
int incomingByte;      // variabel untuk membaca data serial
 
void setup() {
  // Inisialisasi komunikasi serial
  Serial.begin(9600);
  // Inisialisasi pin sebagai output
  pinMode(Valve1Pin, OUTPUT);
  pinMode(Valve2Pin, OUTPUT);
}
 
void loop() {
  // Mengecek data serial
  if (Serial.available() > 0) {
    // Membaca data serial
    incomingByte = Serial.read();
    // Jika yang terbaca huruf H, maka nyalakan valve
    if (incomingByte == 'H') {
      delay(80);
      digitalWrite(Valve1Pin, HIGH);  
    }
    // Jika yang terbaca huruf L, maka matikan valve
    if (incomingByte == 'L') {
      digitalWrite(Valve1Pin, LOW);
    }
    // Jika yang terbaca huruf N, maka nyalakan valve
    if (incomingByte == 'N') {
      digitalWrite(Valve2Pin, HIGH);
    }
    // Jika yang terbaca huruf M, maka matikan valve
    if (incomingByte == 'M') {
      digitalWrite(Valve2Pin, LOW);
    }
  }
}
