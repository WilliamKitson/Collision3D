#pragma once

#include <string>

#include "CircleCircleDefaultTest.h"
#include "CircleCircleCollisionTest.h"

class CircleCircleTester
{
public:
	CircleCircleTester();
	~CircleCircleTester();

	std::string test();

private:
	std::string testDefault();
	std::string testCollision();
};
