const int irPin = 8;
const int ledPin = 12;

void setup() {
  pinMode(irPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("=== BAI 4.3: CAM BIEN HONG NGOAI ===");
}

void loop() {
  if (digitalRead(irPin) == LOW) {
    digitalWrite(ledPin, HIGH);
    Serial.println("Phat hien tin hieu Hong Ngoai!");
  } else {
    digitalWrite(ledPin, LOW);
  }
  delay(200);
}
