#include "player.h"
#include "sfwdraw.h"
#include "box.h"

#include <iostream>

void Player::update()
{
	/*if(sfw::getMouseX() > 0 && sfw::getMouseX() < 800)
		x = sfw::getMouseX();
	if (sfw::getMouseY() > 0 && sfw::getMouseY() < 800)
		y = sfw::getMouseY();*/

	if (two == 0)
	{
		if (sfw::getMouseButton(MOUSE_BUTTON_LEFT) == true)
		{
			x = sfw::getMouseX();
			y = sfw::getMouseY();
		}
		if (sfw::getKey('W') && y <= 800)
			y += 5;
		if (sfw::getKey('S') && y >= 0)
			y -= 5;
		if (sfw::getKey('D') && x <= 800)
			x += 5;
		if (sfw::getKey('A') && x >= 0)
			x -= 5;
	}

	if (x < 0)
		x = 800;
	if (x > 800)
		x = 0;

	if (y < 0)
		y = 800;
	if (y > 800)
		y = 0;


	if (two == 1)
	{
		if (sfw::getKey(KEY_UP) && y <= 800)
			y += 5;
		if (sfw::getKey(KEY_DOWN) && y >= 0)
			y -= 5;
		if (sfw::getKey(KEY_RIGHT) && x <= 800)
			x += 5;
		if (sfw::getKey(KEY_LEFT) && x >= 0)
			x -= 5;
	}
}

void Player::draw()
{
	//sfw::drawTexture(0, x,y);
	Box me;
	me.startX = x;
	me.startY = y;
	me.length = 50;
	me.width = 50;
	me.active = true;
	me.draw();
}
