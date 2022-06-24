#pragma once

#include <string>
#include "CircleCircle.h"

class CircleCircleInvertedEvasionTest
{
public:
	CircleCircleInvertedEvasionTest();
	~CircleCircleInvertedEvasionTest();

	std::string test();

private:
	int successes();
	bool collision(float);
	float distance(float, float);

private:
	int itterations;
};
