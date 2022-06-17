#include "AxisWidthTest.h"

AxisWidthTest::AxisWidthTest()
{
}

AxisWidthTest::~AxisWidthTest()
{
}

std::string AxisWidthTest::test()
{
	if (!collision2D::Axis().width)
	{
		return std::string();
	}

	return "axis width test failed\n";
}
