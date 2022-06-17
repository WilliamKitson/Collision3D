#include "AxisZposTest.h"

AxisZposTest::AxisZposTest()
{
}

AxisZposTest::~AxisZposTest()
{
}

std::string AxisZposTest::test()
{
	if (!collision3D::Axis().zpos)
	{
		return std::string();
	}

	return "axis zpos test failed\n";
}
