#pragma once
#include "GameObject.h"
class mouse : public gameObject
{
public:
	int click;
	
	int cxUp;
	int cxDown;
	int cyLeft;
	int cyRight;

	virtual void update();
};