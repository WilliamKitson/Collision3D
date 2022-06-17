#include "PointCircleDefaultTest.h"

PointCircleDefaultTest::PointCircleDefaultTest()
{
}

PointCircleDefaultTest::~PointCircleDefaultTest()
{
}

std::string PointCircleDefaultTest::test()
{
	if (collision2D::PointCircle().getCollision() == false)
	{
		return std::string();
	}

	return "point circle default test failed\n";
}
