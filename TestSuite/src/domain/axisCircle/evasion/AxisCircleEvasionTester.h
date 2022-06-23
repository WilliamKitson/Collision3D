#pragma once

#include <string>
#include "AxisCircleEvasionLeftTest.h"

class AxisCircleEvasionTester
{
public:
	AxisCircleEvasionTester();
	~AxisCircleEvasionTester();

	std::string test();

private:
	std::string testLeft();
};
