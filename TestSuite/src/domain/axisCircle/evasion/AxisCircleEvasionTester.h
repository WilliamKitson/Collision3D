#pragma once

#include <string>

#include "AxisCircleEvasionLeftTest.h"
#include "AxisCircleEvasionRightTest.h"
#include "AxisCircleEvasionBottomTest.h"
#include "AxisCircleEvasionTopTest.h"
#include "AxisCircleEvasionBackTest.h"

class AxisCircleEvasionTester
{
public:
	AxisCircleEvasionTester();
	~AxisCircleEvasionTester();

	std::string test();

private:
	std::string testLeft();
	std::string testRight();
	std::string testBottom();
	std::string testTop();
	std::string testBack();
};
