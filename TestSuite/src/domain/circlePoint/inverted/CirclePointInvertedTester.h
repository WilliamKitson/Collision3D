#pragma once

#include <string>

#include "CirclePointInvertedCollisionTest.h"
#include "CirclePointInvertedEvasionTest.h"

class CirclePointInvertedTester
{
public:
	CirclePointInvertedTester();
	~CirclePointInvertedTester();

	std::string test();

private:
	std::string testCollision();
	std::string testEvasion();
};
