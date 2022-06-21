#pragma once

#include <string>
#include "AxisAxisInvertedBALeftTest.h"

class AxisAxisInvertedBATester
{
public:
	AxisAxisInvertedBATester();
	~AxisAxisInvertedBATester();

	std::string test();

private:
	std::string testLeft();
};
