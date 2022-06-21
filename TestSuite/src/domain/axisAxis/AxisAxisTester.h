#pragma once

#include <string>

#include "AxisAxisDefaultTest.h"
#include "AxisAxisCollisionTest.h"

class AxisAxisTester
{
public:
	AxisAxisTester();
	~AxisAxisTester();

	std::string test();

private:
	std::string testDefault();
	std::string testCollision();
};
