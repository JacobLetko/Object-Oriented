#include "powerUps.h"
#include "sfwdraw.h"

#include <random>
#include <ctime>

void powerUp::update()
{
	if (sfw::getMouseX() < x + raid &&
		sfw::getMouseX() > x - raid &&
		sfw::getMouseY() < y + raid &&
		sfw::getMouseY() > y - raid &&
		sfw::getMouseButton(MOUSE_BUTTON_LEFT))
	{
		boost = 1;
		item = true;
	}
}

void powerUp::placement()
{
	srand(time(NULL));

	x = rand() % 1100 + 200;
	y = rand() % 600 + 200;
}
