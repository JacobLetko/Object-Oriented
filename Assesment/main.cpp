#include <iostream>
#include <string>
#include <random>
#include <ctime>

#include "sfwdraw.h"
#include "player.h"
#include "playerTwo.h"
#include "gameField.h"
#include "points.h"
#include "powerUps.h"


int main()
{
	//windows
	sfw::initContext(1500, 900, "Aim Assists");

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
	one.speed = 5;
	one.enabled = true;
	one.color = 0x0b52c4ff;
	

	//player 2
	mouse two;
	two.raid = 2;
	two.color = 0xd30f08ff;
	two.enabled = true;
	two.click = 0;
	
	// timer
	points Time;
	Time.Time = 30;
	Time.clicks = 0;

	//box
	field box;
	Time.font = font;

	// power up
	powerUp boost;
	boost.color = 0x1fce1cff;
	boost.enabled = true;
	boost.raid = 10;
	boost.placement();

	//game loop
	while (sfw::stepContext())
	{
		/*std::cout << "1x: " << one.x << "  1y: " << one.y << std::endl;
		std::cout << "2x: " << two.x << "  2y: " << two.y << std::endl;
		std::cout << "3x: " << boost.x << "	 3y: " << boost.y << std::endl;*/

		two.cxUp = one.x + one.raid;
		two.cxDown = one.x - one.raid;
		two.cyLeft = one.y - one.raid;
		two.cyRight = one.y + one.raid;

		boost.cxUp = two.cxUp;
		boost.cxDown = two.cxDown;
		boost.cyLeft = two.cyLeft;
		boost.cyRight = two.cyRight;

		boost.draw();
		boost.update();

		two.draw();
		two.update();

		one.draw();
		one.update();

		box.draw();

		Time.draw();
		Time.update();

		if (Time.Time == 0)
		{
			one.enabled = false;
			two.enabled = false;
			boost.enabled = false;
		}

		if (boost.item == true && boost.boost != 0)
		{
			Time.Time += boost.boost;
			boost.boost = 0;
			boost.placement();
			boost.item = false;
		}


		Time.clicks += two.click;
		two.click = 0;


	}

	//clean up
	sfw::termContext();
}