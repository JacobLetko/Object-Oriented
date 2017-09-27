#include "Player.h"

#include "sfwdraw.h"

void Player::update()
{
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

void Player::draw()
{
	sfw::drawCircle(x, y, 10);
}
