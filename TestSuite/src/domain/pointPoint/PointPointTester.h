#pragma once

#include <string>

#include "PointPointDefaultTest.h"
#include "PointPointCollisionTest.h"
#include "PointPointXposTest.h"
#include "PointPointYposTest.h"

class PointPointTester
{
public:
	PointPointTester();
	~PointPointTester();

	std::string test();

private:
	std::string testDefault();
	std::string testCollision();
	std::string testXpos();
	std::string testYpos();
};
