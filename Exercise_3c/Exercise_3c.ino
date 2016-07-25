/*  Arduino learning
 *  Exercise #3a
 * 
 */

int led = 13;  //define onboard LED on pin 13 as a global variable
int startDelay = 500; //declares an int variable and assigns value 500
//int longDelay = 5000; //declares an int for the long delay
int blinkCycles = 10; //how many times should the light blink each cycle
int delayStep = 25;   //how many 25 to subtract each cycle
void setup()
{
  pinMode(led,OUTPUT);  //sets I/O 13 into output mode  
}

void loop() 
{
  for(int i = startDelay; i > 0; i = i - delayStep) //outer loop counts down the delay length
    for(int x = 0; x < blinkCycles; x++)        //inner loop controls the blink cycles
    {
      blinkonce(led,i);
    }
  
}

void blinkonce(int ledPin, int delayLength)   //one cycle of on/off of equal times
{
  digitalWrite(ledPin,HIGH);
  delay(delayLength);
  digitalWrite(ledPin,LOW);
  delay(delayLength);
}

