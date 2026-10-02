# Lab 04: Arduino Inputs and Switches

In this lab, I used an Arduino Uno, a pushbutton switch, resistors, jumper wires, a breadboard, and an LED to learn how Arduino programs receive and respond to physical input. The purpose of the lab was to understand digital input, button states, pull-up and pull-down circuits, switch bounce, and using a button to control an LED.

## Materials Used

- Arduino Uno board  
- Breadboard  
- Pushbutton switch  
- LED  
- Current-limiting resistor for the LED  
- Pull-up or pull-down resistor for the switch  
- Jumper wires  
- USB cable and computer  
- Arduino IDE and Serial Monitor  

## What I Did

I wired a pushbutton as an Arduino input using pull-down and pull-up switch configurations. I set the connected Arduino pin as an `INPUT` and programmed the Arduino to read whether the switch was pressed or released.

I first used the pushbutton to control the built-in Arduino LED. When the button was pressed, the LED turned on, and when the button was released, the LED turned off. I also wrote code that printed the state of the input pin to the Serial Monitor whenever the switch state changed.

Next, I connected an external LED and programmed the switch to control it in several ways. I made the LED stay on only while the button was pressed, then reversed the behavior so the LED was off while the button was pressed and on while it was released. I also programmed the button as a toggle: each button press changed the LED state from off to on or from on to off.

## Reflection

While testing the pushbutton, I noticed that one press could sometimes produce several quick HIGH and LOW readings instead of one clean input change. This happened because of **switch bounce**, where the metal contacts inside a mechanical switch vibrate briefly before settling.

The bouncing lasted only a few milliseconds, but it could cause one press to be counted several times. Adding a short debounce delay helps the Arduino recognize one physical press as one input event.

This lab also showed how buttons can support different interactions, such as short presses, long presses, double presses, repeated presses, combinations, and custom patterns. For example, a secret button sequence such as short press, short press, long press, and short press could be used to unlock a feature, turn on an LED, or start a blinking pattern.
