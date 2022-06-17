#pragma once

#include <string>
#include "CirclePoint.h"

class PointCircleEvasionTest
{
public:
	PointCircleEvasionTest();
	~PointCircleEvasionTest();

	std::string test();

private:
	int itterations;
	int successes;
};
