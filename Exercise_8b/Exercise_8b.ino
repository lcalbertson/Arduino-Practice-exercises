/*  Arduino learning
 *  Exercise #8b
 * 
 */


char letter;  //variable to store the incoming char


void setup()
{
  Serial.begin(9600);
}

void loop() 
{
  if(Serial.available())
  {
    letter = Serial.read(); //serial data comes one byte at a time
    Serial.print("Received message: "); //writes all on the same line
    Serial.println(letter); //this one sends a 'new line' character at the end of the message
  }
}
