/*  Arduino learning
 *  Exercise #4
 * 
 */

int led = 5;  //pin 5 is a PWM pin
int delayLength = 3000;
void setup()
{
  pinMode(led,OUTPUT);  //set pin 5 as output
}

void loop() 
{
  for(int x = 100; x > 0; x = x - 25)
  {
    analogWrite(led,map(x,0,255,0,100));
    delay(delayLength);
  }
}


