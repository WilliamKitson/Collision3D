#include "PointXposTest.h"

PointXposTest::PointXposTest()
{
}

PointXposTest::~PointXposTest()
{
}

std::string PointXposTest::test()
{
	if (!collision3D::Point().xpos)
	{
		return std::string();
	}

	return "point xpos test failed\n";
}
