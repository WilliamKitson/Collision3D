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
	int successes();
	float distance(double, double);

private:
	int itterations;
};
