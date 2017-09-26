#pragma once

#include "sfwdraw.h"

class Box
{
public:

	bool active;

	float startX;
	float startY;

	float length;
	float width;

	void draw();
};