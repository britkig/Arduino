# dinput.h
## `dInput pinName(uchar pinNumber, bool invert=false)`
`dInput` designates a pin as a digital input.
### Methods
```cpp
bool Get()
```
Read the current state of the input.
### Example Usage
Output high when input is tied to ground.
```cpp
void setup(){

}

#include "dinput.h"
dOutput Input(1, true);

#include "doutput.h"
dOutput Output(LED_BUILTIN, true);

void loop(){
	Output.Set(Input.Get());
}
```
# doutput.h
## `dOutput pinName(uchar pinNumber, bool invert=false)`
`dOutput` designates a pin as a digital output.
### Methods
```cpp
bool Get()
```
Return the current state of the output.
```cpp
bool Set(bool)
```
Set output high or low; returns `true` if the output has changed state, false otherwise.
### Example Usage
Flash the onboard LED on and off at a 1Hz interval.
```cpp
void setup(){

}

#include "doutput.h"
dOutput Output(LED_BUILTIN, true);

void loop(){
	Output.Set(!Output.Get());
	delay(500);
}
```
