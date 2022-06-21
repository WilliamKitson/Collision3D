#pragma once

#include <string>

#include "AxisAxisEvasionLeftTest.h"
#include "AxisAxisEvasionRightTest.h"

class AxisAxisEvasionTester
{
public:
	AxisAxisEvasionTester();
	~AxisAxisEvasionTester();

	std::string test();

private:
	std::string testLeft();
	std::string testRight();
};
