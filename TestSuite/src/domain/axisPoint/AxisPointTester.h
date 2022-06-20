#pragma once

#include <string>

#include "AxisPointDefaultTest.h"
#include "AxisPointCollisionTest.h"

class AxisPointTester
{
public:
	AxisPointTester();
	~AxisPointTester();

	std::string test();

private:
	std::string testDefault();
	std::string testCollision();
};
