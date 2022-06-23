#pragma once

#include <string>
#include "AxisCircle.h"

class AxisCircleInvertedLeftTest
{
public:
	AxisCircleInvertedLeftTest();
	~AxisCircleInvertedLeftTest();

	std::string test();

private:
	float distance(float, float);
	float absolute(float);
	float squareRoot(float);
};
