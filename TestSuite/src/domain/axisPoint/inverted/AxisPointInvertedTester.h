#pragma once

#include <string>

#include "AxisPointInvertedLeftTest.h"
#include "AxisPointInvertedRightTest.h"
#include "AxisPointInvertedBottomTest.h"

class AxisPointInvertedTester
{
public:
	AxisPointInvertedTester();
	~AxisPointInvertedTester();

	std::string test();

private:
	std::string testLeft();
	std::string testRight();
	std::string testBottom();
};
