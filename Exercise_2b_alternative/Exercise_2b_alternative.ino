/*  Arduino learning
 *  Exercise #2b
 * 
 */

int led = 13;  //define onboard LED on pin 13 as a global variable
int delayLength = 500; //declares an int variable and assigns value 500
bool ledState;    

void setup()
{
  pinMode(led,OUTPUT);  //sets I/O 13 into output mode
  ledState = digitalRead(led);  //grab the current state of the led (should be LOW if board reset)  
}

void loop() 
{
  if(ledState == HIGH)
  {
    digitalWrite(led,LOW);
    ledState = LOW; //saves the state of the LED digitalRead is not needed since the previous line set the LED
  }
  else
  {
    digitalWrite(led,HIGH);
    ledState = HIGH;
  }
  delay(delayLength);
}
