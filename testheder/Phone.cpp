#include "Phone.h"
#include <iostream>

Phone::Phone()
{
	ON = new TurnOnState(this);
	OFF = new TurnOffState(this);
	currentState = OFF;
}

void Phone::turnOff()
{
	currentState->turnOff();
}

void Phone::turnOn()
{
	currentState->turnOn();
}

void Phone::setState(PhoneState* state)
{
	currentState = state;
}