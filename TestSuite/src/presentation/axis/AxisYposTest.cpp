#include "AxisYposTest.h"

AxisYposTest::AxisYposTest()
{
}

AxisYposTest::~AxisYposTest()
{
}

std::string AxisYposTest::test()
{
	if (!collision3D::Axis().ypos)
	{
		return std::string();
	}

	return "axis ypos test failed\n";
}
