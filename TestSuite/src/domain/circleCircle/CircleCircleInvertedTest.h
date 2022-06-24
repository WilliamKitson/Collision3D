#pragma once

#include <string>
#include "CircleCircle.h"

class CircleCircleInvertedTest
{
public:
	CircleCircleInvertedTest();
	~CircleCircleInvertedTest();

	std::string test();

private:
	int successes();
	bool collision(float);
	float distance(float, float);
	float squareRoot(float);

private:
	int itterations;
};
