#pragma once
#include "Phone.h"
#include "PhoneState.h"

class Phone;

class TurnOnState : public PhoneState
{
public:
	TurnOnState(Phone* phone);
	void turnOn() override;
	void turnOff() override;

private:
	Phone* phone;
};