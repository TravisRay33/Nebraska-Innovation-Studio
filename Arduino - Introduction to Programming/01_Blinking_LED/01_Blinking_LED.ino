/*
Example sketch 01: Blinking LED


Goal: BLINKING LED

 Turn an LED on for one second, off for one second,
  and repeat forever.

Hardware connections:

You will need the following:
  Arduino UNO + Breadboard
  1 LED 
  1 330-Ohm Resistor (Orange-Orange-Brown)
  3 wires


  Most Arduinos already have an LED and resistor connected to pin 13, so we don't need additional harware.
  However, we will still attach an external LED to get familiar with the arduino platform 

    Place the LED into the Connect the positive side of your LED (longer leg) to Arduino
    digital pin 13 (or another digital pin, don't forget to change
    the code to match).
  
    Connect the negative side of your LED (shorter leg) to a 
    330 Ohm resistor (orange-orange-brown). Connect the other side
    of the resistor to ground.

    pin 13 _____ + LED - _____ 330 Ohm _____ GND
    	
    (We always use resistors between the Arduino and and LEDs
    to keep the LEDs from burning out due to too much current.)

This sketch was written by Travis Ray, Nebraska Innovation Studio,
with lots of help from the Arduino community.
This code is completely free for any use.
Visit http://www.arduino.cc to learn about the Arduino.

Version 2.0 6/2012 MDG
*/


// Welcome to Arduino!

// We have so much to explore!
// The Arduino is a tiny computer that runs programs called "sketches". 
// These are text files written using instructionsthe computer understances. You're reading a sketch right now.
// Sketches have computer code in them, but also (hopefully) "comments" that explain what the code does. 
// Comments and code will have different colors in the editor so you can tell them apart.

// This is a comment - anything on a line after "//" is ignored by the computer.

/* This is also a comment 
this one can be multi-line, but it
must start and end with these characters */

// A "function" is a named block of code, that performs a specific task.
// All Arduino sketches MUST have two specific functions:
// "setup()" which is where we will set-up the arduino board
// "loop()" repeats our desired action(s) 


void setup()
{
  // Here is where we must set-up our Arduino UNO board
  // Let's tell the UNO that we plugged an output device into pin 13:

  pinMode(13, OUTPUT);

  // pinMode is a built-in function. I.e. our UNO board already knows what to do
  // There are many built-in functions like this one, we will explore a bunch in this workshop
  // You can find information on all of them at http://arduino.cc/en/Reference
}


// After setup() finishes, the loop() function runs over and over
// again, forever (or until you turn off or reset the Arduino).
// This is usually where the bulk of your program lives:

void loop()
{
 
  digitalWrite(13, HIGH);   // Turn on the LED
  
  delay(1000);              // Wait for one second (AKA 1000 milliseconds)
  
  digitalWrite(13, LOW);    // Turn off the LED (by giving it a LOW voltage)
  
  delay(1000);              // Wait for one second

 

  // When the computer gets to the end of the loop() function,
  // it starts loop() over again. So this program will continue
  // blinking the LED on and off!

  
}

/* CHALLENGES ---------------------------------
1. Make the LED be ON for longer
2. Add a second LED, connected to pin 12
3. Make the LEDs flash in sequence (alternate flashing)
4. Make the LEDs flash in tandem (flash at the same time)
*/