#pragma once
#include "TurnOffState.h"
#include "TurnOnState.h"

class Phone
{
public:
	PhoneState *currentState;
	PhoneState *ON;
	PhoneState *OFF;
	Phone();
	void turnOn();
	void turnOff();
	void setState(PhoneState* state);
};