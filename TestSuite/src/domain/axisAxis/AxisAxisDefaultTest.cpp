#include "AxisAxisDefaultTest.h"

AxisAxisDefaultTest::AxisAxisDefaultTest()
{
}

AxisAxisDefaultTest::~AxisAxisDefaultTest()
{
}

std::string AxisAxisDefaultTest::test()
{
	if (!collision3D::AxisAxis().getCollision())
	{
		return std::string();
	}

	return "axis axis default test failed\n";
}
