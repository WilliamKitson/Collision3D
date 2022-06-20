#pragma once

#include <string>
#include "AxisCircleDefaultTest.h"

class AxisCircleTester
{
public:
	AxisCircleTester();
	~AxisCircleTester();

	std::string test();

private:
	std::string testDefault();
};
