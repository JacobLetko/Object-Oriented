#include <iostream>
#include <string>

#include "sfwdraw.h"
#include "player.h"
#include "playerTwo.h"
#include "gameField.h"
#include "points.h"


int main()
{
	//windows
	sfw::initContext(1500, 900, "hello");

	//background color
	sfw::setBackgroundColor(BLACK);

	int font = sfw::loadTextureMap("fontmap_360.png", 16, 16);

	// player 1
	avatar one;
	one.up = 'W';
	one.down = 'S';
	one.left = 'A';
	one.right = 'D';
	
	one.x = 725;
	one.y = 540;
	one.raid = 30;
	one.enabled = true;
	one.color = 0x0b52c4ff;
	

	//player 2
	mouse two;
	two.raid = 2;
	two.color = 0xd30f08ff;
	two.enabled = true;
	two.click = 0;
	
	// timer
	points time;
	time.time = 30;

	//box
	field box;
	time.font = font;

	//game loop
	while (sfw::stepContext())
	{
		std::cout << "1x: " << one.x << "  1y: " << one.y << "	2x: " << two.x << "  2y: " << two.y <<std::endl;

		two.draw();
		two.update();

		one.draw();
		one.update();

		box.draw();

		time.draw();
		time.update();

		if (time.time == 0)
		{
			one.enabled = false;
			two.enabled = false;
		}

		time.clicks = two.click;
	}

	//clean up
	sfw::termContext();
}

/*
1 player moves as circle

2 player uses mouse to try and shoot 1 player with squares

1 player trys to dooge squares
has three lives
*/