#pragma once

#include <string>

#include "AxisCircleDefaultTest.h"
#include "AxisCircleCollisionTest.h"
#include "AxisCircleInvertedTest.h"
#include "evasion/AxisCircleEvasionTester.h"

class AxisCircleTester
{
public:
	AxisCircleTester();
	~AxisCircleTester();

	std::string test();

private:
	std::string testDefault();
	std::string testCollision();
	std::string testInverted();
	std::string testEvasion();
};
