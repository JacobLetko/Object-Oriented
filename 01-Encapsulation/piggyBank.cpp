#include "piggyBank.h"

DigitalPiggyBank::DigitalPiggyBank(float balance)
{
	currentBalance = balance;
}

void DigitalPiggyBank::deposit(float net)
{
	currentBalance += net;
}

float DigitalPiggyBank::withdraw()
{
	float mon = currentBalance;
	currentBalance = 0;
	return mon;
}

float DigitalPiggyBank::balance() const
{
	return currentBalance;
}
