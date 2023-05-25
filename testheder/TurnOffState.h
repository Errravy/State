#pragma once
#include "Phone.h"
#include "PhoneState.h"

class Phone;

class TurnOffState : public PhoneState
{
private:
	Phone* phone;
public:
	TurnOffState(Phone* phone);
	void turnOn() override;
	void turnOff() override;

};