#pragma once

#include <string>

#include "point/PointTester.h"
#include "circle/CircleTester.h"
#include "axis/AxisTester.h"

class PresentationTester
{
public:
	PresentationTester();
	~PresentationTester();

	std::string test();

private:
	std::string testPoint();
	std::string testCircle();
	std::string testAxis();
};
