#include "player.h"
#include "sfwdraw.h"

void avatar::update()
{
	if (sfw::getKey(up))
		y += speed;
	if (sfw::getKey(down))
		y -= speed;
	if (sfw::getKey(right))
		x += speed;
	if (sfw::getKey(left))
		x -= speed;

	if (x > 1300)
		x = 1300;
	if (x < 200)
		x = 200;
	if (y > 800)
		y = 800;
	if (y < 200)
		y = 200;

}