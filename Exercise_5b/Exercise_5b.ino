/*  Arduino learning
 *  Exercise #5b
 * 
 */

int led = 5;  //pin 5 is a PWM pin
int delayLength = 5;


void setup()
{
  pinMode(led,OUTPUT);  //set pin 5 as output
}

void loop() 
{
  for(int x = 255; x > 0; x--)
  {
    analogWrite(led,x);
    delay(delayLength);
  }
  for(int x = 0; x < 256; x++)
  {
    analogWrite(led,x);
    delay(delayLength);
  }
}


