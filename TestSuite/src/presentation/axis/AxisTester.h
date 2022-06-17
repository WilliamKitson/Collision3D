#pragma once

#include <string>

#include "AxisXposTest.h"
#include "AxisYposTest.h"
#include "AxisWidthTest.h"
#include "AxisHeightTest.h"

class AxisTester
{
public:
	AxisTester();
	~AxisTester();

	std::string test();

private:
	std::string testXpos();
	std::string testYpos();
	std::string testWidth();
	std::string testHeight();
};
