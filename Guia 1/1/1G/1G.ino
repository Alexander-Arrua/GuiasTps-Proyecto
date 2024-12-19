bool boton = false;
int contar = 0;
int tiempo = 200;
void setup()
{
    pinMode(2, INPUT_PULLUP);
    pinMode(3, OUTPUT); 
    pinMode(4, OUTPUT); 
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT); 
    pinMode(8, OUTPUT); 
    pinMode(9, OUTPUT); 
    pinMode(10, OUTPUT); 
    pinMode(11, OUTPUT); 
 
    Serial.begin(9600);

}

void loop()
{
  	
	if(  digitalRead(2) == LOW )
    {
      	boton = !boton;
      	delay(tiempo);
    }

  	if( boton == true)
    {
      	contar = contar + 1;
      	boton = false;
    }


  	
  	Serial.print(contar);
  	Serial.print(" - resto:");
  	Serial.println( contar % 3 ) ;
  
  	
  	if( contar == 1 )
    {
        digitalWrite( 9 , LOW );
      	digitalWrite( 11 ,LOW );
      	digitalWrite( 3 , HIGH );
      	digitalWrite( 4 , HIGH ); 
      	digitalWrite( 5 , LOW );
    }


  	else if( contar == 2 ){
        digitalWrite( 3 , LOW );
      	digitalWrite( 4 , LOW  );
    	digitalWrite( 6 , LOW ); 
      	digitalWrite( 7 , HIGH );
      	digitalWrite( 8 , HIGH );
    }
  
  	else{
        digitalWrite( 7 , LOW );
      	digitalWrite( 8 ,LOW );
      	digitalWrite( 9 , HIGH );
      	digitalWrite( 10 , LOW );
      	digitalWrite( 11 , HIGH );
      	contar = 0;
    }
  
  
  
}