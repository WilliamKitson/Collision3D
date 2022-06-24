#pragma once

#include <string>
#include "CirclePoint.h"

class CirclePointInvertedTest
{
public:
	CirclePointInvertedTest();
	~CirclePointInvertedTest();

	std::string test();

private:
	int successes();
	bool collision(float);
	float distance(float, float);
	float squareRoot(float);

private:
	int itterations;
};
