#include "TurnOnState.h"
#include <iostream>

TurnOnState::TurnOnState(Phone* phone)
{
	this->phone = phone;
}
void TurnOnState :: turnOn()
{
	std::cout << "Hp mu dah hidup" << std::endl;
}

void TurnOnState :: turnOff()
{
	std::cout << "Hp mati" << std::endl;
	phone->setState(phone->OFF);
}