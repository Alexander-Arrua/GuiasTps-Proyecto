// C++ code
//
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  digitalWrite(4, HIGH);
  delay(600);
  digitalWrite(4, LOW);
  delay(3000); 
  
  digitalWrite(4, HIGH);
  delay(605);
  digitalWrite(4, LOW);
  delay(3000); 
  
  digitalWrite(2, HIGH);
  delay(610);
  digitalWrite(2, LOW);
  delay(3500); 
}