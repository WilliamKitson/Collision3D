#pragma once

#include <string>

#include "AxisAxisInvertedBALeftTest.h"
#include "AxisAxisInvertedBARightTest.h"
#include "AxisAxisInvertedBABottomTest.h"

class AxisAxisInvertedBATester
{
public:
	AxisAxisInvertedBATester();
	~AxisAxisInvertedBATester();

	std::string test();

private:
	std::string testLeft();
	std::string testRight();
	std::string testBottom();
};
