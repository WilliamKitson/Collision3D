#pragma once

#include <string>

#include "AxisAxisInvertedABLeftTest.h"
#include "AxisAxisInvertedABRightTest.h"
#include "AxisAxisInvertedABBottomTest.h"
#include "AxisAxisInvertedABTopTest.h"
#include "AxisAxisInvertedABBackTest.h"
#include "AxisAxisInvertedABFrontTest.h"

class AxisAxisInvertedABTester
{
public:
	AxisAxisInvertedABTester();
	~AxisAxisInvertedABTester();

	std::string test();

private:
	std::string testLeft();
	std::string testRight();
	std::string testBottom();
	std::string testTop();
	std::string testBack();
	std::string testFront();
};
