// C++ code
//
void setup()
{
  
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(7, OUTPUT);
 
}


void loop()
{
    digitalWrite(2, HIGH);
  delay(3000);
  digitalWrite(2, LOW);
    delay(600);
     
  digitalWrite(4, HIGH);
  delay(3000);
  digitalWrite(4, LOW);
    delay(605);
  
       digitalWrite(7, HIGH);
  delay(3000);
  digitalWrite(7, LOW);
  delay(610);
  
  digitalWrite(4, HIGH);
  delay(3000);
  digitalWrite(4, LOW);
    delay(615);


  
}

