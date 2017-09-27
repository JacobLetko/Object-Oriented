#pragma once

#include "GameObject.h"

class avatar : public gameObject
{
public:

	char up;
	char down;
	char left;
	char right;

	virtual void update();
};