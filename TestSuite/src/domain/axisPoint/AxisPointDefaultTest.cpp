#include "AxisPointDefaultTest.h"

AxisPointDefaultTest::AxisPointDefaultTest()
{
}

AxisPointDefaultTest::~AxisPointDefaultTest()
{
}

std::string AxisPointDefaultTest::test()
{
	if (!collision3D::AxisPoint().getCollision())
	{
		return std::string();
	}

	return "axis point default test failed\n";
}
