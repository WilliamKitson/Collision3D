#pragma once

#include <string>
#include "pointPoint/PointPointTester.h"

class DomainTester
{
public:
	DomainTester();
	~DomainTester();

	std::string test();

private:
	std::string testPointPoint();
};
