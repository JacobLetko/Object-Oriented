#pragma once

class gameObject
{
public:
	int x; 
	int y;

	int raid;
	int length;
	int width;

	int color;

	bool enabled;

	virtual void update();
	virtual void draw();
};