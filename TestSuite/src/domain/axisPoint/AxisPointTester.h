#pragma once

#include <string>
#include "AxisPointDefaultTest.h"

class AxisPointTester
{
public:
	AxisPointTester();
	~AxisPointTester();

	std::string test();

private:
	std::string testDefault();
};
