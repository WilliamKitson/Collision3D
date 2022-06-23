#pragma once

#include <string>
#include "AxisCircle.h"

class AxisCircleInvertedTest
{
public:
	AxisCircleInvertedTest();
	~AxisCircleInvertedTest();

	std::string test();

private:
	float distance(float, float);
	float absolute(float);
	float squareRoot(float);
	float invert(float);
};
