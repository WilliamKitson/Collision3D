#pragma once

#include <string>
#include "CirclePoint.h"

class CirclePointInvertedEvasonTest
{
public:
	CirclePointInvertedEvasonTest();
	~CirclePointInvertedEvasonTest();

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
