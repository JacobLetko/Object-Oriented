#include "points.h"
#include "sfwdraw.h"

#include <string>




void points::update()
{
	if (Time > 0)
		Time -= sfw::getDeltaTime();
	else
		Time = 0;
}

void points::draw()
{
	point = std::to_string(Time);
	const char * cha = point.c_str();
	sfw::drawString(font, cha, 700, 30, 20, 20);

	clik = std::to_string(clicks);
	cha = clik.c_str();
	sfw::drawString(font, cha, 100, 30, 20, 20);
}
