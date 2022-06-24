#pragma once

#include <string>

#include "CircleCircleInvertedCollisionTest.h"
#include "CircleCircleInvertedEvasionTest.h"

class CircleCircleInvertedTester
{
public:
	CircleCircleInvertedTester();
	~CircleCircleInvertedTester();

	std::string test();

private:
	std::string testCollision();
	std::string testEvasion();
};
