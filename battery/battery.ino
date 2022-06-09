#define hall_sensor A1

int red_led1 = 8;
int red_led2 = 9;
int red_led3 = 10;
int red_led4 = 11;
int red_led5 = 12;

int green_led1 = 16;
int green_led2 = 17;
int green_led3 = 18;
int green_led4 = 19;
int green_led5 = 20;

void setup() {
  Serial.begin(9600);

  pinMode(green_led1,OUTPUT);
  pinMode(green_led2,OUTPUT);
  pinMode(green_led3,OUTPUT);
  pinMode(green_led4,OUTPUT);
  pinMode(green_led5,OUTPUT);

  pinMode(red_led1,OUTPUT);
  pinMode(red_led2,OUTPUT);
  pinMode(red_led3,OUTPUT);
  pinMode(red_led4,OUTPUT);
  pinMode(red_led5,OUTPUT);
}

void loop() {
  // read hall effect sensor value 
  int read = analogRead(hall_sensor);
  
  // if magnet detected, turn on green LEDs
  if (read < 200) {
    // turn off red LEDs
    digitalWrite(red_led1,LOW);
    digitalWrite(red_led2,LOW);
    digitalWrite(red_led3,LOW);
    digitalWrite(red_led4,LOW);
    digitalWrite(red_led5,LOW);

    // turn on green LEDs in order 
    digitalWrite(green_led5,HIGH);
    delay(500);
    digitalWrite(green_led1,HIGH);
    delay(500);
    digitalWrite(green_led4,HIGH);
    delay(500);
    digitalWrite(green_led2,HIGH);
    delay(500);
    digitalWrite(green_led3,HIGH);
    delay(500);

  }
  // if no magnet detected 
  if (read > 200) {
    // turn off green LEDs
    digitalWrite(green_led1,LOW);
    digitalWrite(green_led2,LOW);
    digitalWrite(green_led3,LOW);
    digitalWrite(green_led4,LOW);
    digitalWrite(green_led5,LOW);

    // turn on red LEDs
    digitalWrite(red_led1,HIGH);
    digitalWrite(red_led2,HIGH);
    digitalWrite(red_led3,HIGH);
    digitalWrite(red_led4,HIGH);
    digitalWrite(red_led5,HIGH);

  }

  Serial.println(read);
  delay(100);
  
}
