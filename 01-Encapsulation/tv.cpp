#include <iostream>

#include "tv.h"

Television::Television(int chn, int vol)
{
	currentChanel = chn;
	currentVolume = vol;
}

void Television::increaseVolume()
{
	Television(currentChanel, currentVolume + 5);
}

void Television::decreaseVolume()
{
	Television(currentChanel, currentVolume - 5);
}

void Television::increaseChannel()
{
	Television(currentChanel + 5, currentVolume);
}

void Television::decreaseChannel()
{
	Television(currentChanel - 5, currentVolume);
}

void Television::print()
{
	std::cout << "Channel: " << currentChanel << std::endl;
	std::cout << "Volume: " << currentVolume << std::endl;
}

