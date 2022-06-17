#pragma once

#include <string>

#include "pointPoint/PointPointTester.h"
#include "circlePoint/PointCirlceTester.h"

class DomainTester
{
public:
	DomainTester();
	~DomainTester();

	std::string test();

private:
	std::string testPointPoint();
	std::string testCirclePoint();
};
