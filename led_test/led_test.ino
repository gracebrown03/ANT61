int green_led1 = 16;
int green_led2 = 17;
int green_led3 = 18;
int green_led4 = 19;
int green_led5 = 20;

void setup() {
  pinMode(green_led1,OUTPUT);
  pinMode(green_led2,OUTPUT);
  pinMode(green_led3,OUTPUT);
  pinMode(green_led4,OUTPUT);
  pinMode(green_led5,OUTPUT);

}

void loop() {
  digitalWrite(green_led1,HIGH);
  digitalWrite(green_led2,HIGH);
  digitalWrite(green_led3,HIGH);
  digitalWrite(green_led4,HIGH);
  digitalWrite(green_led5,HIGH);

}
