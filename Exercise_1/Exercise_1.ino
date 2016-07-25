/*  Arduino learning
 *  Exercise #1 
 * 
 */

int led = 13;  //define onboard LED on pin 13 as a global variable

void setup() //this setup function is only run once
{
  pinMode(led,OUTPUT);  //sets I/O 13 into output mode  
  //pinMode(13, OUTPUT);  this also works if you do not define a variable for pin 13
  digitalWrite(led,HIGH); //turns on the LED
  //I turned LED on in setup because the exercise never has the LED changing state
}

void loop() //this function continues to loop
{
  while(1); //while loop that will never exit
  

}
