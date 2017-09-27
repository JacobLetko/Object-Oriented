#pragma once
#include "gameObject.h"

class BaseParticle : public GameObject
{
public:
	float speedX;
	float speedY;

	float x;
	float y;

	virtual void update() override;
	virtual void draw() override;
};