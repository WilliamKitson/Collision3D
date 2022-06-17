#include "PointZposTest.h"

PointZposTest::PointZposTest()
{
}

PointZposTest::~PointZposTest()
{
}

std::string PointZposTest::test()
{
	if (!collision3D::Point().zpos)
	{
		return std::string();
	}

	return "point zpos test failed\n";
}
