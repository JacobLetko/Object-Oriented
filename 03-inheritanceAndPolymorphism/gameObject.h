#pragma once

#include <string>

class GameObject
{
public:
	std::string name;

	bool enabled;

	float x;
	float y;

	virtual void update();
	virtual void draw();
};