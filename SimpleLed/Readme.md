# SimpleLed
Encapsulates a simple LED connected to a digital or analog pin.

## `on()`
Turns **on** the led.

## `off()`
Turns **off** the led.

## `toggle()`
Switches the digital state of the LED, preserves the analog intensity if one is set.

## `setIntensity(float percentage)`
Set the brightness of the LED to a given percentage.  Accepts any float between 0 and 1. Values outside of this range will produce either ON, if larger than 1, or OFF, if less than 0.

# ThreeColorLed
Encapsulates a 3 color led connected to three pins on the Arduino.  This class is particularly aimed at teaching Hexedecimal color representations.

## `on()`
Turns **on** the led with the stored color value.

## `off()`
Turns **off** the led.  Keeps the color value in memory.

## `setColor(short r, short g, short b)`
Set the color of the LED given the RGB color values as short integers (0~255).

## `setColor(String hex)`
Sets the color of the LED given a hexadecimal color value.  This may be preceeded by a '#' or '0x' to indicate hex, but these are not required.