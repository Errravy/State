#include "TurnOffState.h"
#include <iostream>

TurnOffState :: TurnOffState(Phone* phone)
{
	this->phone = phone;
}
void TurnOffState :: turnOn()
{
	std::cout << "Hp Hidup" << std::endl;
	phone->setState(phone->ON);
}

void TurnOffState :: turnOff()
{
	std::cout << "Hp mu dah mati" << std::endl;
}