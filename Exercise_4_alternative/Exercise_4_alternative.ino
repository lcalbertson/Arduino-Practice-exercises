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
    int percent = 255 * x / 100;  //convert the percentage value x to the equiv PWM number
    analogWrite(led,percent);
    delay(delayLength);
  }
}


