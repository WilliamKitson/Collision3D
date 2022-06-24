#pragma once

#include <string>
#include "CirclePoint.h"

class CirclePointCollisionTest
{
public:
	CirclePointCollisionTest();
	~CirclePointCollisionTest();

	std::string test();

private:
	int successes();
	bool collision(float);
	float invert(float);
	float distance(float, float);
	float distance(float);
	float squareRoot(float);

private:
	int itterations;
};
