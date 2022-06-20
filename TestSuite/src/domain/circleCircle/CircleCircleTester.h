#pragma once

#include <string>
#include "CircleCircleDefaultTest.h"

class CircleCircleTester
{
public:
	CircleCircleTester();
	~CircleCircleTester();

	std::string test();

private:
	std::string testDefault();
};
