#pragma once

#include <string>

#include "AxisCircleInvertedLeftTest.h"
#include "AxisCircleInvertedRightTest.h"

class AxisCircleInvertedTester
{
public:
	AxisCircleInvertedTester();
	~AxisCircleInvertedTester();

	std::string test();

private:
	std::string testLeft();
	std::string testRight();
};
