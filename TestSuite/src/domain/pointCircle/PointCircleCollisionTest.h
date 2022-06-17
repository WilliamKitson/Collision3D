#pragma once

#include <string>
#include <math.h>

#include "PointCircle.h"

class PointCircleCollisionTest
{
public:
	PointCircleCollisionTest();
	~PointCircleCollisionTest();

	std::string test();

private:
	float calculateDistance(double, double);

private:
	int itterations;
	int successes;
};
