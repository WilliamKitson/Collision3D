#pragma once

#include <string>

#include "AB/AxisAxisInvertedABTester.h"
#include "BA/AxisAxisInvertedBATester.h"

class AxisAxisInvertedTester
{
public:
	AxisAxisInvertedTester();
	~AxisAxisInvertedTester();

	std::string test();

private:
	std::string testAB();
	std::string testBA();
};
