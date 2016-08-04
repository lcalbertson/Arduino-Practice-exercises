/*  Arduino learning
 *  Exercise #8a
 * 
 */

int led = 13;  //define onboard LED on pin 13 as a global variable
int delayLength = 5000; //declares an int variable and assigns value 5000

void setup()
{
  Serial.begin();
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
