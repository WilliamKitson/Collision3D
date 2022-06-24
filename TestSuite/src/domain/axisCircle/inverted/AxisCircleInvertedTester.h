#pragma once

#include <string>

#include "AxisCircleInvertedCollisionTest.h"
#include "AxisCircleInvertedEvasionTest.h"

class AxisCircleInvertedTester
{
public:
	AxisCircleInvertedTester();
	~AxisCircleInvertedTester();

	std::string test();

private:
	std::string testCollision();
	std::string testEvasion();
};
