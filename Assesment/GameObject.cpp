#include "GameObject.h"
#include "sfwdraw.h"


void gameObject::update()
{
	if (x > 1300)
		x = 1300;
	if (x < 200)
		x = 200;
	if (y > 800)
		y = 800;
	if (y < 200)
		y = 200;
}

void gameObject::draw()
{
	if(enabled == true)
		for(int i = raid; i >= 0; i--)
			sfw::drawCircle(x, y, i, 12, color);
}
