#pragma once

class player
{
public:
	float x;
	float y;

	char up;
	char down;
	char left;
	char right;

	void update();
	void draw();
};