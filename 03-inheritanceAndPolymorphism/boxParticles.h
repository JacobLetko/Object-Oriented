#pragma once
#include "BaseParticles.h"
#include "gameObject.h"

class BoxParticals : public BaseParticle
{
public:
	int length;
	int width;
	
	virtual void draw() override;
};