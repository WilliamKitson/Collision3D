#pragma once

#include <string>
#include "AxisCircleCollisionLeftTest.h"

class AxisCircleCollisionTester
{
public:
	AxisCircleCollisionTester();
	~AxisCircleCollisionTester();

	std::string test();

private:
	std::string testLeft();
};
