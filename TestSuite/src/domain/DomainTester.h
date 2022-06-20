#pragma once

#include <string>

#include "pointPoint/PointPointTester.h"
#include "circlePoint/PointCirlceTester.h"
#include "circleCircle/CircleCircleTester.h"
#include "axisPoint/AxisPointTester.h"
#include "axisCircle/AxisCircleTester.h"

class DomainTester
{
public:
	DomainTester();
	~DomainTester();

	std::string test();

private:
	std::string testPointPoint();
	std::string testCirclePoint();
	std::string testCircleCircle();
	std::string testAxisPoint();
	std::string testAxisCircle();
};
