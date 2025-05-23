#pragma once

#include <string>

#include "AxisCircleDefaultTest.h"
#include "AxisCircleCollisionTest.h"
#include "evasion/AxisCircleEvasionTester.h"
#include "inverted/AxisCircleInvertedTester.h"

class AxisCircleTester
{
public:
	AxisCircleTester();
	~AxisCircleTester();

	std::string test();

private:
	std::string testDefault();
	std::string testCollision();
	std::string testEvasion();
	std::string testInverted();
};
