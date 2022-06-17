#include "PointCircleDefaultTest.h"

PointCircleDefaultTest::PointCircleDefaultTest()
{
}

PointCircleDefaultTest::~PointCircleDefaultTest()
{
}

std::string PointCircleDefaultTest::test()
{
	if (collision3D::CirclePoint().getCollision() == false)
	{
		return std::string();
	}

	return "point circle default test failed\n";
}
