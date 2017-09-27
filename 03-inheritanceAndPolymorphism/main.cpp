#include <iostream>

#include "gameObject.h"
#include "sfwdraw.h"
#include "Player.h"
#include "BaseParticles.h"
#include "boxParticles.h"
#include "Emitter.h"

int main()
{
	sfw::initContext(800, 800, "SFW");

	sfw::setBackgroundColor(pumkinOrange);
	
	Player me;
	me.enabled = true;
	me.name = "Jacob";
	me.x = 100;
	me.y = 100;
	me.down = 'S';
	me.up = 'W';
	me.right = 'D';
	me.left = 'A';

	BoxParticals ai;
	ai.speedX = 1;
	ai.speedY = 1;
	ai.length = 5;
	ai.width = 5;

	Emitter nom;
	nom.spawnInterval = 3;

	while (sfw::stepContext())
	{
		me.update();
		me.draw();

		ai.draw();
		ai.update();

		nom.update();
		nom.draw();
	}
	
	sfw::termContext();
}