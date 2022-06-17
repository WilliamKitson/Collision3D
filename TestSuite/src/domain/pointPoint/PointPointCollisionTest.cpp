#include "PointPointCollisionTest.h"

PointPointCollisionTest::PointPointCollisionTest()
	: itterations{ 4 }
{
}

PointPointCollisionTest::~PointPointCollisionTest()
{
}

std::string PointPointCollisionTest::test()
{
	if (successes() == itterations)
	{
		return std::string();
	}

	return "point point collision test failed\n";
}

int PointPointCollisionTest::successes()
{
	int output = 0;

	for (int i{ 0 }; i < itterations; i++)
	{
		float point[3]{
			(float)i,
			(float)i,
			(float)i
		};

		collision3D::PointPoint unit;
		unit.calculate(point, point);
		output += unit.getCollision() == true;
	}

	return output;
}
