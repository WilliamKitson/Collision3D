#pragma once

#include <string>
#include "AB/AxisAxisInvertedABTester.h"

class AxisAxisInvertedTester
{
public:
	AxisAxisInvertedTester();
	~AxisAxisInvertedTester();

	std::string test();

private:
	std::string testAB();
};
