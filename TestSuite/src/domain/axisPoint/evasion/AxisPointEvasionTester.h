#pragma once

#include <string>

#include "AxisPointEvasionLeftTest.h"
#include "AxisPointEvasionRightTest.h"

class AxisPointEvasionTester
{
public:
	AxisPointEvasionTester();
	~AxisPointEvasionTester();

	std::string test();

private:
	std::string testLeft();
	std::string testRight();
};
