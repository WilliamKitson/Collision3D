#pragma once

#include <string>
#include "PointPoint.h"

class PointPointCollisionTest
{
public:
	PointPointCollisionTest();
	~PointPointCollisionTest();

	std::string test();

private:
	int itterations;
	int successes;
};
