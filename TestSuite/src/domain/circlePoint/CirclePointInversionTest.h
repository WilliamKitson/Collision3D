#pragma once

#include <string>
#include "CirclePoint.h"

class CirclePointInversionTest
{
public:
	CirclePointInversionTest();
	~CirclePointInversionTest();

	std::string test();

private:
	float calculateDistance(double, double);
	float invertValue(float);

private:
	int itterations;
	int successes;
};
