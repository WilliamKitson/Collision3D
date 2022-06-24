#pragma once

#include <string>
#include "CircleCircleInvertedCollisionTest.h"

class CircleCircleInvertedTester
{
public:
	CircleCircleInvertedTester();
	~CircleCircleInvertedTester();

	std::string test();

private:
	std::string testCollision();
};
