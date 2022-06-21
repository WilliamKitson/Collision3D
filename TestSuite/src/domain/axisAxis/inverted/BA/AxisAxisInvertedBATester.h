#pragma once

#include <string>

#include "AxisAxisInvertedBALeftTest.h"
#include "AxisAxisInvertedBARightTest.h"

class AxisAxisInvertedBATester
{
public:
	AxisAxisInvertedBATester();
	~AxisAxisInvertedBATester();

	std::string test();

private:
	std::string testLeft();
	std::string testRight();
};
