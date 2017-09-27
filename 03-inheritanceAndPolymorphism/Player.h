#pragma once

#include "gameObject.h"

class Player : public GameObject
{
public:
	char up;
	char down;
	char right;
	char left;

	float x;
	float y;

	virtual void update() override;
	virtual void draw() override;
};