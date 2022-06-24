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
	int successes();
	bool collision(float);
	float distance(float, float);
	float distance(float);
	float squareRoot(float);

private:
	int itterations;
};
