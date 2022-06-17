#pragma once

#include <string>
#include "CirclePointDefaultTest.h"

class PointCircleTester
{
public:
	PointCircleTester();
	~PointCircleTester();

	std::string test();

private:
	std::string testDefault();
};
