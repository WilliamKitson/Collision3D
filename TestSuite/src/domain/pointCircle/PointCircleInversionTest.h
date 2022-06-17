#pragma once

#include <string>
#include "CirclePoint.h"

class PointCircleInversionTest
{
public:
	PointCircleInversionTest();
	~PointCircleInversionTest();

	std::string test();

private:
	float calculateDistance(double, double);
	float invertValue(float);

private:
	int itterations;
	int successes;
};
