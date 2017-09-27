#include "player.h"
#include "sfwdraw.h"

void avatar::update()
{
	if (sfw::getKey(up))
		y += 5;
	if (sfw::getKey(down))
		y -= 5;
	if (sfw::getKey(right))
		x += 5;
	if (sfw::getKey(left))
		x -= 5;

	if (x > 1300)
		x = 1300;
	if (x < 200)
		x = 200;
	if (y > 800)
		y = 800;
	if (y < 200)
		y = 200;

}