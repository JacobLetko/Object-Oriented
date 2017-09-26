#include <iostream>

#include "sfwdraw.h"
#include "player.h"
#include "box.h"

int main()
{
	//window
	sfw::initContext(800, 800, "SFW");

	//background color
	sfw::setBackgroundColor(BLACK);
	
	Player avatar;
	avatar.x = 300;
	avatar.y = 300;
	avatar.two = 0;

	Player me;
	me.x = 100;
	me.y = 100;
	me.two = 1;

	Box box;
	box.length = 10;
	box.width = 10;
	box.startX = 200;
	box.startY = 200;
	box.active = true;

	// game loop
	while (sfw::stepContext())
	{
		avatar.update();
		avatar.draw();
		//me.draw();
		//me.update();
		std::cout << "x = " << avatar.x << "	y = " << avatar.y << std::endl;
		//box.draw();
	}

	// clean up
	sfw::termContext();
}