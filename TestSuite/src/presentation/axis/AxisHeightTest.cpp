#include "AxisHeightTest.h"

AxisHeightTest::AxisHeightTest()
{
}

AxisHeightTest::~AxisHeightTest()
{
}

std::string AxisHeightTest::test()
{
	if (!collision2D::Axis().height)
	{
		return std::string();
	}

	return "axis height test failed\n";
}
