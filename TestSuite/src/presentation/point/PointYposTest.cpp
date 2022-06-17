#include "PointYposTest.h"

PointYposTest::PointYposTest()
{
}

PointYposTest::~PointYposTest()
{
}

std::string PointYposTest::test()
{
	if (!collision2D::Point().ypos)
	{
		return std::string();
	}

	return "point ypos test failed\n";
}
