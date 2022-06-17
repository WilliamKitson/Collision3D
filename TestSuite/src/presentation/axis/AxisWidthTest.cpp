#include "AxisWidthTest.h"

AxisWidthTest::AxisWidthTest()
{
}

AxisWidthTest::~AxisWidthTest()
{
}

std::string AxisWidthTest::test()
{
	if (!collision3D::Axis().width)
	{
		return std::string();
	}

	return "axis width test failed\n";
}
