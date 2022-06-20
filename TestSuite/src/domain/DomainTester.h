#pragma once

#include <string>

#include "pointPoint/PointPointTester.h"
#include "circlePoint/PointCirlceTester.h"
#include "circleCircle/CircleCircleTester.h"

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
};
