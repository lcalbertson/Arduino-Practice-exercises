# Arduino-Practice-exercises

Arduino simple learning projects.

1 - Attach a single LED to a digital pin and run a sketch that configures the pin to turn on and stay on.

2a - With a single LED write a sketch that blinks the LED at a rate of 500 ms (do this by using the digitalWrite and delay function)

2b - With a single LED write a sketch that blinks the LED at a rate of 500 ms (do this by using digitalWrite delay and digitalRead to change the state of the LED)

3a - With a single LED write a sketch that blinks the LED at a rate of 500 ms on and 500 ms off for ten cycles then turns off for 5 seconds then repeats

3b - Write a sketch that completes 3a but call a function to handle one blink cycle

3c - With a single LED write a sketch that blinks the LED at a rate of 500 ms on 500 ms off for ten cycles then blinks at a rate of 475 ms on and 475 ms off for 10 cycles then continue to decrease at this same rate and pattern until it reaches zero then repeat at 500 ms starting point

4 - Use a single LED and PWM to make the LED appear to be at an intensity of 100/75/50/25/10% changing between the levels at some constant rate

5 - Using PWM make the LED smoothly fade from 100% to 0%

6 - Using a single LED and a momentary switch write a sketch where a user can push the button to turn on and off the LED (lookup switch debouncing but keep it simple it’s not critical)

7 - Make a "3 way lamp" using the LED and button to let the user turn on the light at 100/50/25/off

8a - Use the arduino serial monitor to write a hello world sketch - Every 5 seconds send from the arduino a message that says "Hello World"

8b - Over serial let the user send a single keyboard character to the arduino and have the arduino respond with a message that says "received message: " then the message

8c - Over serial let the user send multiple characters and have the arduino respond with "received message: " then the message

8d - Using the arduino serial monitor write a sketch where a user can turn on a single LED by typing the number 1 and turn off the LED by typing the number 2

8e - using the arudino serial monitor write a sketch where the user can turn on and off the LED by typing "On" and "Off"

9 - Using the serial monitor write a sketch where the user can turn on and off the LED by typing 100 and 0 and any number in between to control intensity

10 - With a single LED write a sketch where a LED blinks at a rate of 500ms on then 500 ms off for 5 seconds then at 450 ms on and 450 ms off for 5 seconds then continue to decrease this by 50 ms until 100 ms on 100 ms off then repeat

11 - Use 4 LEDs and write a sketch where each LED turns on in sequence from 1 to 4 at a rate of 1000 ms

12 - Use 4 LEDs to represent a counter from 0 to 15 (look up binary 4 bit or 8 bit but using the lower half) and run the counter sequence automatically or use it to count button pushes from the user

13 - Using the 4 LEDs again let the user have the serial monitor control the rate of the LEDs by typing in the length of time the LEDs are on for

14 - Using the 4 LEDs write a sketch where the LEDs operate in two different modes 1 where all LEDs are off except for the one that is on the other mode is where all are on except for the one that is off.  Let the user set the speed by serial and mode by using the button.

15 - Use 4 LEDs and serial monitor to accept a binary input from the user to turn on and off the bank of 4 LEDs

16 - Using a single 7 segment display show numbers 0 to 9 in order at some time delayed rate.

17 - Using the 7 segment display show numbers 0 to 9 in order when the user pushes the buttons.
