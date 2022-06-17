#pragma once

#include <string>
#include "PointCircle.h"

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
