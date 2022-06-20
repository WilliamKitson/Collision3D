#include "AxisCircleDefaultTest.h"

AxisCircleDefaultTest::AxisCircleDefaultTest()
{
}

AxisCircleDefaultTest::~AxisCircleDefaultTest()
{
}

std::string AxisCircleDefaultTest::test()
{
	if (!collision3D::AxisCircle().getCollision())
	{
		return std::string();
	}

	return "axis circle default test failed\n";
}
