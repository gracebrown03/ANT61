#define hall_sensor A0

int val = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int read = analogRead(hall_sensor);
  Serial.println(read);
  delay(500);
}
