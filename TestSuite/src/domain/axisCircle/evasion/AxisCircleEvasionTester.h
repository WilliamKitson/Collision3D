#pragma once

#include <string>

#include "AxisCircleEvasionLeftTest.h"
#include "AxisCircleEvasionRightTest.h"

class AxisCircleEvasionTester
{
public:
	AxisCircleEvasionTester();
	~AxisCircleEvasionTester();

	std::string test();

private:
	std::string testLeft();
	std::string testRight();
};
