#pragma once

#include <string>
#include "AxisCircle.h"

class AxisCircleInvertedEvasionTest
{
public:
	AxisCircleInvertedEvasionTest();
	~AxisCircleInvertedEvasionTest();

	std::string test();

private:
	int successes();
	bool collision(float);

private:
	int itterations;
};
