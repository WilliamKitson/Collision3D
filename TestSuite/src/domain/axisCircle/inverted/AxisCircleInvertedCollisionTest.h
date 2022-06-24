#pragma once

#include <string>
#include "AxisCircle.h"

class AxisCircleInvertedCollisionTest
{
public:
	AxisCircleInvertedCollisionTest();
	~AxisCircleInvertedCollisionTest();

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
