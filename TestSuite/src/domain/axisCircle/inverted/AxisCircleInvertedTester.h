#pragma once

#include <string>
#include "AxisCircleInvertedCollisionTest.h"

class AxisCircleInvertedTester
{
public:
	AxisCircleInvertedTester();
	~AxisCircleInvertedTester();

	std::string test();

private:
	std::string testCollision();
};
