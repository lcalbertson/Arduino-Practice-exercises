/*  Arduino learning
 *  Exercise #8a
 * 
 */

int delayLength = 5000  //sets delay

void setup()
{
  Serial.begin(9600); //sets up the serial connection
}

void loop() 
{
  Serial.println("Hello World");  //sends message over the serial
  delay(delayLength);   //delay
}
