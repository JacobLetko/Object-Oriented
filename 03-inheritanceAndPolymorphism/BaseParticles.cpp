#include "BaseParticles.h"
#include "sfwdraw.h"

void BaseParticle::update()
{
	x += speedX;
	y += speedY;

	if (x < 0)
		x = 800;
	if (x > 800)
		x = 0;

	if (y < 0)
		y = 800;
	if (y > 800)
		y = 0;
}

void BaseParticle::draw()
{
	sfw::drawCircle(x, y, 10);
}
