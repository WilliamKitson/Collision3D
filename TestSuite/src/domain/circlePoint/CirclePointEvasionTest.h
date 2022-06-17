#pragma once

#include <string>
#include "CirclePoint.h"

class CirclePointEvasionTest
{
public:
	CirclePointEvasionTest();
	~CirclePointEvasionTest();

	std::string test();

private:
	int itterations;
	int successes;
};
