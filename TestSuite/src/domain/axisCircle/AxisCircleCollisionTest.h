#pragma once

#include <string>
#include "AxisCircle.h"

class AxisCircleCollisionTest
{
public:
	AxisCircleCollisionTest();
	~AxisCircleCollisionTest();

	std::string test();

private:
	float distance(float, float);
	float absolute(float);
	float squareRoot(float);
};
