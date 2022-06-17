#pragma once

#include <string>

#include "AxisXposTest.h"
#include "AxisYposTest.h"
#include "AxisZposTest.h"
#include "AxisWidthTest.h"
#include "AxisHeightTest.h"
#include "AxisDepthTest.h"

class AxisTester
{
public:
	AxisTester();
	~AxisTester();

	std::string test();

private:
	std::string testXpos();
	std::string testYpos();
	std::string testZpos();
	std::string testWidth();
	std::string testHeight();
	std::string testDepth();
};
