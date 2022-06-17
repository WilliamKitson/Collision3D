#include "PointPointDefaultTest.h"

PointPointDefaultTest::PointPointDefaultTest()
{
}

PointPointDefaultTest::~PointPointDefaultTest()
{
}

std::string PointPointDefaultTest::test()
{
	if (collision3D::PointPoint().getCollision() == false)
	{
		return std::string();
	}

	return "point point default test failed\n";
}
