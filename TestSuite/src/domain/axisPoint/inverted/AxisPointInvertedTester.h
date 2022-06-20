#pragma once

#include <string>

#include "AxisPointInvertedLeftTest.h"
#include "AxisPointInvertedRightTest.h"
#include "AxisPointInvertedBottomTest.h"
#include "AxisPointInvertedTopTest.h"
#include "AxisPointInvertedBackTest.h"
#include "AxisPointInvertedFrontTest.h"

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
	std::string testTop();
	std::string testBack();
	std::string testFront();
};
