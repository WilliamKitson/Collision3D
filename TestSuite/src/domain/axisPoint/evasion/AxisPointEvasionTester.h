#pragma once

#include <string>
#include "AxisPointEvasionLeftTest.h"

class AxisPointEvasionTester
{
public:
	AxisPointEvasionTester();
	~AxisPointEvasionTester();

	std::string test();

private:
	std::string testLeft();
};
