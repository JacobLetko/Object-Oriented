#pragma once

class DigitalPiggyBank
{
private:

	// balance of bank
	float currentBalance = 0;

public:
	DigitalPiggyBank::DigitalPiggyBank(float balance);

	// adds to currentBalance
	void deposit(float net);

	//takes out of current balance
	float withdraw();

	// returns current balance
	float balance() const;
};