#pragma once

#include <string>

#include "AxisPointDefaultTest.h"
#include "AxisPointCollisionTest.h"
#include "evasion/AxisPointEvasionTester.h"

class AxisPointTester
{
public:
	AxisPointTester();
	~AxisPointTester();

	std::string test();

private:
	std::string testDefault();
	std::string testCollision();
	std::string testEvasion();
};
