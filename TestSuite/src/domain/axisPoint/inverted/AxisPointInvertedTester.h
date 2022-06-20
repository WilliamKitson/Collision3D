#pragma once

#include <string>
#include "AxisPointInvertedLeftTest.h"

class AxisPointInvertedTester
{
public:
	AxisPointInvertedTester();
	~AxisPointInvertedTester();

	std::string test();

private:
	std::string testLeft();
};
