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