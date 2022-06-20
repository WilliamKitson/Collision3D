#pragma once

#include <string>

#include "AxisCircleDefaultTest.h"
#include "AxisCircleCollisionTest.h"

class AxisCircleTester
{
public:
	AxisCircleTester();
	~AxisCircleTester();

	std::string test();

private:
	std::string testDefault();
	std::string testCollision();
};
