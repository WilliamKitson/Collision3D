#pragma once

#include <string>

#include "AxisPointEvasionLeftTest.h"
#include "AxisPointEvasionRightTest.h"
#include "AxisPointEvasionBottomTest.h"
#include "AxisPointEvasionTopTest.h"
#include "AxisPointEvasionBackTest.h"
#include "AxisPointEvasionFrontTest.h"

class AxisPointEvasionTester
{
public:
	AxisPointEvasionTester();
	~AxisPointEvasionTester();

	std::string test();

private:
	std::string testLeft();
	std::string testRight();
	std::string testBottom();
	std::string testTop();
	std::string testBack();
	std::string testFront();
};
