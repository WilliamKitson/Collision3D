#include "AxisYposTest.h"

AxisYposTest::AxisYposTest()
{
}

AxisYposTest::~AxisYposTest()
{
}

std::string AxisYposTest::test()
{
	if (!collision2D::Axis().ypos)
	{
		return std::string();
	}

	return "axis ypos test failed\n";
}
