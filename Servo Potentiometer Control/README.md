# Servo Potentiometer Control

A simple project which allows you to control the movement of a servo motor with a potentiometer.

## Resources List

• 1 X Arduino Micro or Arduino Uno

• 1 X Servo Motor Operating voltage: 4.8V～6.0V

• 1 X Prototype PCB Board/Breadboard

• 1 X Prototype PCB Board/Breadboard

• 8 X Solderless Flexible Breadboard Jumper Wires

• 1 X Mini USB cable.

• 1 X Potentiometer (3 pin) 

• [The Arduino IDE](https://www.arduino.cc/en/main/software)

## Setup

**A.** Use jumper wires to connect the 5v pin of the Arduino to the breadboards positive rail and the GRD pin to the negative. This will provide the power to the outer rails for the other components.

**B.** To connect to your servo you can simply push one end of the jumper cable into the connector and the other to the breadboard. The positive wire of the servo connects to the positive rail and the negative to the negative rail. The positive will typically be red and the negative will typically be black or brown, refer to your servo's instructions if you're unsure. Finally, connect the last wire (the signal) to pin 9 of your Arduino, this wire will typically be orange, white, or yellow.

**C.** Potentiometers come in all shapes and sizes, however, providing yours has 3 pins the left will be positive, the middle will be the signal and the right will be negative. Connect the positive to the positive rail, the negative to the negative rail, and the middle to A1 of the Arduino (analog input 1).

**D.** Connect your Arduino and open the Arduino IDE, select your board type via **tools > board** and the correct port via **tools > port** (only one available port will show providing only one Ardunio is connected)

**E.**
Add the [code](https://github.com/Steven-Klavins/Arduino-Experimentation/blob/master/Servo%20Potentiometer%20Control/Servo%20Potentiometer%20Control.ino) to the IDE and upload it by clicking on the upload arrow. Your done! 

<p align="center">
<img src="Schematic.png" alt="Schematic" width="600"/>
</p>

<p align="center">
<img src="01.jpg" alt="screenshot" width="600"/>
</p>

<p align="center">
<img src="02.jpg" alt="screenshot" width="600"/>
</p>

<p align="center">
<img src="03.jpg" alt="screenshot" width="600"/>
</p>

## The Code 

**#include <Servo.h>** Imports [the servo library](https://www.arduino.cc/reference/en/libraries/servo/) a C++ library developed for Arduino/Genuino boards.

**Servo myServo;** Creates a new servo object named myServo, this object represents our real-life servo and allows us to control it.

**int val;** The integer val is later used to track the position of our servo. 

**void setup** is used to initialize variables, it goes at the top of the file and as you can guess its the 'set up' stage of the code.

**myServo.attach(9);** which resides in the set up assigns the pin that controls the servo, in this case, 9.


**void loop()** contains the code we want to infinitely allowing the program to change and respond.
