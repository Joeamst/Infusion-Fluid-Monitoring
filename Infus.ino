#define pinbuzzer 7
#define pinsensor 5
#define LED 8 //hijau
#define LED2 9 //merah

int nilai;

void setup() {
  Serial.begin(9600);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(5, INPUT_PULLUP);
}

void loop() {
  nilai = digitalRead(pinsensor);

  if (nilai <= 0)
  {
    digitalWrite(pinbuzzer, HIGH);
    digitalWrite(LED, HIGH);
    digitalWrite(LED2, LOW);

  }
  else
  {
    digitalWrite(pinbuzzer, LOW);
    digitalWrite(LED, LOW);
    digitalWrite(LED2, HIGH);
  }

  Serial.print("Sensor: ");
  Serial.println(nilai);

  delay(200);
}
