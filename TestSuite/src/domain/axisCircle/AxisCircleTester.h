#pragma once

#include <string>

#include "AxisCircleDefaultTest.h"
#include "AxisCircleEvasionTest.h"
#include "collision/AxisCircleCollisionTester.h"

class AxisCircleTester
{
public:
	AxisCircleTester();
	~AxisCircleTester();

	std::string test();

private:
	std::string testDefault();
	std::string testEvasion();
	std::string testCollision();
};
