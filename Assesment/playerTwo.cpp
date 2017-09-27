#include "playerTwo.h"
#include "sfwdraw.h"
void mouse::update()
{
	if (sfw::getMouseX() < cxUp &&
		sfw::getMouseX() > cxDown &&
		sfw::getMouseY() < cyRight &&
		sfw::getMouseY() > cyLeft &&
		sfw::getKey(MOUSE_BUTTON_LEFT))
	{
		click++;
	}

	x = sfw::getMouseX();
	y = sfw::getMouseY();
}
