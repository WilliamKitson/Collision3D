#pragma once

#include <string>

#include "AxisAxisInvertedBALeftTest.h"
#include "AxisAxisInvertedBARightTest.h"
#include "AxisAxisInvertedBABottomTest.h"
#include "AxisAxisInvertedBATopTest.h"
#include "AxisAxisInvertedBABackTest.h"

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
	std::string testTop();
	std::string testBack();
};
