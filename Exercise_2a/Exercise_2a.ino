/*  Arduino learning
 *  Exercise #2a
 * 
 */

int led = 13;  //define onboard LED on pin 13 as a global variable
int delayLength = 500; //declares an int variable and assigns value 500

void setup()
{
  pinMode(led,OUTPUT);  //sets I/O 13 into output mode  
}

void loop() 
{
  digitalWrite(led,HIGH); //sets pin 13 high
  delay(delayLength);     //delay for set period of time
  //delay(500);           //this also works if the delay amount will never change
  digitalWrite(led,LOW);  //sets pin 13 low
  delay(delayLength);     //a second delay before loop function repeats
}
