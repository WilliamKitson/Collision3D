#pragma once

#include <string>

#include "AxisAxisInvertedABLeftTest.h"
#include "AxisAxisInvertedABRightTest.h"

class AxisAxisInvertedABTester
{
public:
	AxisAxisInvertedABTester();
	~AxisAxisInvertedABTester();

	std::string test();

private:
	std::string testLeft();
	std::string testRight();
};
