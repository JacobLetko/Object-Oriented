#pragma once
#include "gameObject.h"
#include "BaseParticles.h"

class Emitter : public GameObject
{
	float spawnAccumulator;
public:
	Emitter();
	
	BaseParticle Particles[100];

	int partcleID;

	float spawnInterval;

	void update();
	void draw();

};