#pragma once

#include <string>

#include "pointPoint/PointPointTester.h"
#include "pointCircle/PointCirlceTester.h"

class DomainTester
{
public:
	DomainTester();
	~DomainTester();

	std::string test();

private:
	std::string testPointPoint();
	std::string testPointCircle();
};
