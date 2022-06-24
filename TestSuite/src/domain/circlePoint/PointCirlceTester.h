#pragma once

#include <string>

#include "CirclePointDefaultTest.h"
#include "CirclePointCollisionTest.h"
#include "CirclePointEvasionTest.h"
#include "inverted/CirclePointInvertedTester.h"

class PointCircleTester
{
public:
	PointCircleTester();
	~PointCircleTester();

	std::string test();

private:
	std::string testDefault();
	std::string testCollision();
	std::string testEvasion();
	std::string testInverted();
};
