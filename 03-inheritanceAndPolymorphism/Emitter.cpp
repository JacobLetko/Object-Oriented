#include "Emitter.h"
#include "sfwdraw.h"

Emitter::Emitter()
{
	for (int i = 0; i < 100; i++)
		Particles[i].enabled = true;

	spawnAccumulator = 0.0f;
}

void Emitter::update()
{
	spawnAccumulator += sfw::getDeltaTime();

	if (spawnAccumulator > spawnInterval)
	{
		for (int i = 0; i < 100; i++)
		{
			if (Particles[i].enabled == false)
			{
				BaseParticle& baby = Particles[i];

				baby.x = 400;
				baby.y = 400;

				baby.speedX = 1;
				baby.speedY = 1;

				baby.enabled = true;

				spawnAccumulator == 0.0f;
				break;
			}
		}
	}

	for (int i = 0; i < 100; i++)
	{
		if (Particles[i].enabled == true)
			Particles[i].update();
	}
}

void Emitter::draw()
{
	for (int i = 0; i < 100; i++)
	{
		if (Particles[i].enabled)
		{
			Particles[i].draw();
		}
	}
}
