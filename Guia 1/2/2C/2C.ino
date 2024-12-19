#define led_r 9  
#define led_a 10
#define led_v 11

void setup() {
  pinMode(led_r, OUTPUT);
  pinMode(led_a, OUTPUT);
  pinMode(led_v, OUTPUT);
}

void loop() {
  analogWrite(led_r, 0);
  analogWrite(led_v, 255);  
  analogWrite(led_a, 255);
  delay(500);

  analogWrite(led_r, 0);
  analogWrite(led_v, 105);  
  analogWrite(led_a, 105);
  delay(500);

  analogWrite(led_r, 0);
  analogWrite(led_v, 75);  
  analogWrite(led_a, 75);
  delay(500);

  analogWrite(led_r, 255);
  analogWrite(led_v, 0);  
  analogWrite(led_a, 0);
  delay(500);

  analogWrite(led_r, 105);
  analogWrite(led_v, 0);  
  analogWrite(led_a, 0);
  delay(500);

  analogWrite(led_r, 75);
  analogWrite(led_v, 0);  
  analogWrite(led_a, 0);
  delay(500);

  analogWrite(led_r, 255);
  analogWrite(led_v, 255);  
  analogWrite(led_a, 0);
  delay(500);

  analogWrite(led_r, 105);
  analogWrite(led_v, 105);  
  analogWrite(led_a, 0);
  delay(500);

  analogWrite(led_r, 75);
  analogWrite(led_v, 75);  
  analogWrite(led_a, 0);
  delay(500);
}