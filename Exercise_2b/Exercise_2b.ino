/*  Arduino learning
 *  Exercise #2b
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
  if(digitalRead(led))  //
  //if(digitalRead(led) == HIGH)    //alternative has the same result
  //if(digitalRead(led) != LOW)     //alternative has the same result
  {
    digitalWrite(led,LOW);    
  }
  else
  {
    digitalWrite(led,HIGH);
  }
  delay(delayLength);
}
