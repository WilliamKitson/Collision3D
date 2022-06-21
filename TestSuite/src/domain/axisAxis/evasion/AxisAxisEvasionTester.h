#pragma once

#include <string>
#include "AxisAxisEvasionLeftTest.h"

class AxisAxisEvasionTester
{
public:
	AxisAxisEvasionTester();
	~AxisAxisEvasionTester();

	std::string test();

private:
	std::string testLeft();
};
