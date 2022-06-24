#pragma once

#include <string>
#include "CircleCircle.h"

class CircleCircleInvertedCollisionTest
{
public:
	CircleCircleInvertedCollisionTest();
	~CircleCircleInvertedCollisionTest();

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
