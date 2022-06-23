#pragma once

#include <string>
#include "AxisCircleInvertedLeftTest.h"

class AxisCircleInvertedTester
{
public:
	AxisCircleInvertedTester();
	~AxisCircleInvertedTester();

	std::string test();

private:
	std::string testLeft();
};
