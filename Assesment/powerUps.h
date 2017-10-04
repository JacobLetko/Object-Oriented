#pragma once
#include "GameObject.h"

class powerUp : public gameObject
{
public:

	int cxUp;
	int cxDown;
	int cyLeft;
	int cyRight;

	int boost;
	bool item;

	virtual void update();
	void placement();
};