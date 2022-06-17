#pragma once

#include <string>

#include "PointXposTest.h"
#include "PointYposTest.h"

class PointTester
{
public:
	PointTester();
	~PointTester();

	std::string test();

private:
	std::string testXpos();
	std::string testYpos();
};
