#include "box.h"
#include "sfwdraw.h"
#include <iostream>

void Box::draw()
{
	if (active == true)
	{
		
		
		sfw::drawLine(startX, startY,/**/ startX + length, startY);
		sfw::drawLine(startX + length, startY,/**/ startX + length, startY + width);
		sfw::drawLine(startX + length, startY + width,/**/ startX, startY + width);
		sfw::drawLine(startX, startY + width,/**/ startX, startY);
	}
}
