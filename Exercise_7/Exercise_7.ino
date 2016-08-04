/*  Arduino learning
 *  Exercise #7
 * 
 */

int led = 5;  //pin 5 is a PWM pin
int button = 8; //using pin 8 as button

void setup()
{
  pinMode(led,OUTPUT);  //set pin 5 as output
  pinMode(button,INPUT); //sets pin 8 as input
  digitalWrite(button,HIGH);  //sets the pull-up resistor on 
}

void loop() 
{
  for(int x = 100; x >= 0; x = x - 25)
  {
    while(digitalRead(button) == HIGH)  //with pull-up on pin reads high when button is  not pushed
    {
      delay(5); //short delay before read again
    }
    
    analogWrite(led,map(x,0,100,0,255));
  
    while(digitalRead(button) == LOW) //have the program sit here until button is released
    {
      delay(5);
    }
  }
}


