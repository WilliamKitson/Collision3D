#pragma once

#include <string>

#include "AxisAxisDefaultTest.h"
#include "AxisAxisCollisionTest.h"
#include "evasion/AxisAxisEvasionTester.h"
#include "inverted/AxisAxisInvertedTester.h"

class AxisAxisTester
{
public:
	AxisAxisTester();
	~AxisAxisTester();

	std::string test();

private:
	std::string testDefault();
	std::string testCollision();
	std::string testEvasion();
	std::string testInverted();
};
