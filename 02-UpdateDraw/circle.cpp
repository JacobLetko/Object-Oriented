#include "circle.h"
#include "sfwdraw.h"

void Circle::draw()
{
	sfw::drawCircle(x, y, radius);
}
