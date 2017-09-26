#include "line.h"
#include "sfwdraw.h"

void Line::draw()
{
	sfw::drawLine(startX, startY, endX, endY);
}
