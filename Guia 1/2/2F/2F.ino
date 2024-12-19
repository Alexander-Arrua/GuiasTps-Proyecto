#define LED_PIN 5
#define POTENTIOMETER_PIN A0

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(POTENTIOMETER_PIN, INPUT);
}

void loop() {
  int potValue = analogRead(POTENTIOMETER_PIN); 
  int delayTime = map(potValue, 0, 1023, 0, 10000); 

  digitalWrite(LED_PIN, HIGH); 
  delay(delayTime); 
  digitalWrite(LED_PIN, LOW); 
  delay(delayTime); 
}