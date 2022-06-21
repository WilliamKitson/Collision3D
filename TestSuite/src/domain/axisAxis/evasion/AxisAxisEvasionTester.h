#pragma once

#include <string>

#include "AxisAxisEvasionLeftTest.h"
#include "AxisAxisEvasionRightTest.h"
#include "AxisAxisEvasionBottomTest.h"
#include "AxisAxisEvasionTopTest.h"
#include "AxisAxisEvasionBackTest.h"

class AxisAxisEvasionTester
{
public:
	AxisAxisEvasionTester();
	~AxisAxisEvasionTester();

	std::string test();

private:
	std::string testLeft();
	std::string testRight();
	std::string testBottom();
	std::string testTop();
	std::string testBack();
};
