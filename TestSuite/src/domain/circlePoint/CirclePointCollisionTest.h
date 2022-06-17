#pragma once

#include <string>
#include <math.h>

#include "CirclePoint.h"

class CirclePointCollisionTest
{
public:
	CirclePointCollisionTest();
	~CirclePointCollisionTest();

	std::string test();

private:
	float distance(double, double);

private:
	int itterations;
	int successes;
};
