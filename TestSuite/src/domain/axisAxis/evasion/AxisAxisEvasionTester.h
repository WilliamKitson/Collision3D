#pragma once

#include <string>

#include "AxisAxisEvasionLeftTest.h"
#include "AxisAxisEvasionRightTest.h"
#include "AxisAxisEvasionBottomTest.h"
#include "AxisAxisEvasionTopTest.h"
#include "AxisAxisEvasionBackTest.h"
#include "AxisAxisEvasionFrontTest.h"

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
	std::string testFront();
};
