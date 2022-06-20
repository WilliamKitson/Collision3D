#pragma once

#include <string>
#include "CircleCircle.h"

class CircleCircleCollisionTest
{
public:
	CircleCircleCollisionTest();
	~CircleCircleCollisionTest();

	std::string test();

private:
	int successes();
	float distance(float, float);
	float squareRoot(float);

private:
	int itterations;
};
