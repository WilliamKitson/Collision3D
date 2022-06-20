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
	float distance(float, float);
	float squareRoot(float);

private:
	int itterations;
};
