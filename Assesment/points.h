#pragma once
#include <string>

class points
{
public:
	float Time;
	std::string point;
	std::string clik;
	int font;
	int clicks;

	virtual void update();
	virtual void draw();
};