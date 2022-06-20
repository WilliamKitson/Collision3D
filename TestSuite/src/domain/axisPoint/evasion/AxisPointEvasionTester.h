#pragma once

#include <string>

#include "AxisPointEvasionLeftTest.h"
#include "AxisPointEvasionRightTest.h"
#include "AxisPointEvasionTopTest.h"
#include "AxisPointEvasionBottomTest.h"

class AxisPointEvasionTester
{
public:
	AxisPointEvasionTester();
	~AxisPointEvasionTester();

	std::string test();

private:
	std::string testLeft();
	std::string testRight();
	std::string testTop();
	std::string testBottom();
};
