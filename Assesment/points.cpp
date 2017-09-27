#include "points.h"
#include "sfwdraw.h"

#include <string>




void points::update()
{
	if (time > 0)
		time -= sfw::getDeltaTime();
	else
		time = 0;
}

void points::draw()
{
	point = std::to_string(time);
	clik = std::to_string(clicks);
	const char * cha = point.c_str();
	sfw::drawString(font, cha, 700, 30, 20, 20);
	cha = clik.c_str();
	sfw::drawString(font, cha, 750, 30, 20, 20);

	
}
