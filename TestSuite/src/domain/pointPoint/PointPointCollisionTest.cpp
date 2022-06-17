#include "PointPointCollisionTest.h"

PointPointCollisionTest::PointPointCollisionTest()
	: itterations{ 4 }, successes{ 0 }
{
}

PointPointCollisionTest::~PointPointCollisionTest()
{
}

std::string PointPointCollisionTest::test()
{
	for (int i{ 0 }; i < itterations; i++)
	{
		float point[3]{
			(float)i,
			(float)i,
			(float)i
		};

		collision3D::PointPoint unit;
		unit.calculate(point, point);
		successes += unit.getCollision() == true;
	}

	if (successes == itterations)
	{
		return std::string();
	}

	return "point point collision test failed\n";
}
