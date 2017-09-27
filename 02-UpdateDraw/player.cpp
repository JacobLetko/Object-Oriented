#include "player.h"
#include "sfwdraw.h"
#include "box.h"

#include <iostream>

void player::update()
{
	/*if(sfw::getMouseX() > 0 && sfw::getMouseX() < 800)
		x = sfw::getMouseX();
	if (sfw::getMouseY() > 0 && sfw::getMouseY() < 800)
		y = sfw::getMouseY();*/

		if (sfw::getMouseButton(MOUSE_BUTTON_LEFT) == true)
		{
			x = sfw::getMouseX();
			y = sfw::getMouseY();
		}
		if (sfw::getKey(up))
			y += 5;
		if (sfw::getKey(down))
			y -= 5;
		if (sfw::getKey(right))
			x += 5;
		if (sfw::getKey(left))
			x -= 5;

	if (x < 0)
		x = 800;
	if (x > 800)
		x = 0;

	if (y < 0)
		y = 800;
	if (y > 800)
		y = 0;
}

void player::draw()
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
