#include "AxisXposTest.h"

AxisXposTest::AxisXposTest()
{
}

AxisXposTest::~AxisXposTest()
{
}

std::string AxisXposTest::test()
{
	if (!collision2D::Axis().xpos)
	{
		return std::string();
	}

	return "axis xpos test failed\n";
}
