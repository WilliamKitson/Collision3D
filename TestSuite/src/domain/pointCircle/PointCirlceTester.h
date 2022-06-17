#pragma once

#include <string>

#include "CirclePointDefaultTest.h"
#include "PointCircleCollisionTest.h"
#include "PointCircleEvasionTest.h"
#include "PointCircleInversionTest.h"

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
	std::string testInversion();
};
