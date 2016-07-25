/*  Arduino learning
 *  Exercise #3a
 * 
 */

int led = 13;  //define onboard LED on pin 13 as a global variable
int shortDelay = 500; //declares an int variable and assigns value 500
int longDelay = 5000; //declares an int for the long delay

void setup()
{
  pinMode(led,OUTPUT);  //sets I/O 13 into output mode  
}

void loop() 
{
  for(int x = 0; x < 10; x++)
  {
    digitalWrite(led,HIGH);
    delay(shortDelay);
    digitalWrite(led,LOW);
    if(x != 9)                    //used so that on the 10th cycle 500 ms isn't added to the long delay
    {
      delay(shortDelay);
    }
  }
  delay(longDelay);
}
