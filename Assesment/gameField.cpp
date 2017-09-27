#include "gameField.h"
#include "sfwdraw.h"

void field::draw()
{
	//left
	sfw::drawLine(170, 170, 170, 830);
	//top
	sfw::drawLine(170, 830, 1330, 830);
	//right
	sfw::drawLine(1330, 830, 1330, 170);
	//bottom
	sfw::drawLine(1330, 170, 170, 170);

	//1300  200  800
}
