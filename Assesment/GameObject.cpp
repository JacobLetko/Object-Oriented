#include "GameObject.h"
#include "sfwdraw.h"


void gameObject::update()
{
	if (x > 800)
		x = 0;
	if (x < 0)
		x = 800;
	if (y > 800)
		y = 0;
	if (y < 0)
		y = 800;
}

void gameObject::draw()
{
	if(enabled == true)
		for(int i = raid; i >= 0; i--)
			sfw::drawCircle(x, y, i, 12, color);
}
