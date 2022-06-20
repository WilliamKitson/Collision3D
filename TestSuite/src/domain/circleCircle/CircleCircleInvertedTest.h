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

private:
	int itterations;
};
