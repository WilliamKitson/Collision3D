#include "AxisDepthTest.h"

AxisDepthTest::AxisDepthTest()
{
}

AxisDepthTest::~AxisDepthTest()
{
}

std::string AxisDepthTest::test()
{
	if (!collision3D::Axis().depth)
	{
		return std::string();
	}

	return "axis depth test failed\n";
}
