#include <iostream>

#include "tv.h"
#include "piggyBank.h"
#include "server.h"

int main()
{
	Television tv(10, 10);
	tv.print();

	std::cout << "\n";

	DigitalPiggyBank bank(100.50f);
	std::cout << "Balance: " << bank.balance() << std::endl;

	std::cout << "\n";

	ServerBrowserService servers();

	while (true);

	return 0;
}