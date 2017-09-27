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
	
	player avatar;
	avatar.x = 300;
	avatar.y = 300;
	avatar.up = 'W';
	avatar.down = 'S';
	avatar.left = 'A';
	avatar.right = 'D';

	player me;
	me.x = 100;
	me.y = 100;

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
		std::cout << "x = " << avatar.x << "	y = " << avatar.y << std::endl;
		//box.draw();
	}

	// clean up
	sfw::termContext();
}