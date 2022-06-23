#pragma once

#include <string>
#include "AxisCircle.h"

class AxisCircleInvertedRightTest
{
public:
	AxisCircleInvertedRightTest();
	~AxisCircleInvertedRightTest();

	std::string test();

private:
	float distance(float, float);
};
