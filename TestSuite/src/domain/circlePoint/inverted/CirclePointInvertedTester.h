#pragma once

#include <string>
#include "CirclePointInvertedCollisionTest.h"

class CirclePointInvertedTester
{
public:
	CirclePointInvertedTester();
	~CirclePointInvertedTester();

	std::string test();

private:
	std::string testCollision();
};
