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
	float distance(float, float);

private:
	int itterations;
};
