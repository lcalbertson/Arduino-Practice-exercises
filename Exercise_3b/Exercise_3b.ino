/*  Arduino learning
 *  Exercise #3a
 * 
 */

int led = 13;  //define onboard LED on pin 13 as a global variable
int shortDelay = 500; //declares an int variable and assigns value 500
int longDelay = 5000; //declares an int for the long delay
int blinkCycles = 10; //how many times should the light blink

void setup()
{
  pinMode(led,OUTPUT);  //sets I/O 13 into output mode  
}

void loop() 
{
  for(int x = 0; x < blinkCycles; x++)
  {
    blinkonce(led,shortDelay,x,blinkCycles);
  }
  delay(longDelay);
}

void blinkonce(int ledPin, int delayLength, int currentCycle, int maxCycles)
{
  digitalWrite(ledPin,HIGH);
  delay(delayLength);
  digitalWrite(ledPin,LOW);
  if(currentCycle != (maxCycles - 1))
  {
    delay(delayLength);
  }
}

