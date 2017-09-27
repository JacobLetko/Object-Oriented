#include "boxParticles.h"
#include "sfwdraw.h"

void BoxParticals::draw()
{
	sfw::drawLine(x, y,/**/ y + length, y);
	sfw::drawLine(x + length, y,/**/ x + length, y + width);
	sfw::drawLine(x + length, y + width,/**/ x, y + width);
	sfw::drawLine(x, y + width,/**/ x, y);
}


