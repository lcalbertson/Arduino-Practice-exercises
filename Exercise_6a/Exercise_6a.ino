/*  Arduino learning
 *  Exercise #6a
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
  while(digitalRead(button) == HIGH)  //with pull-up on pin reads high when button is not pushed
  {
    digitalWrite(led,LOW);
  }
  

  while(digitalRead(button) == LOW) //have the program sit here until button is released
  {
    digitalWrite(led,HIGH);
  }
}


