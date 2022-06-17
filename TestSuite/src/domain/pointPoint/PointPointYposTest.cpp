#include "PointPointYposTest.h"

PointPointYposTest::PointPointYposTest()
	: itterations{ 4 }, successes{ 0 }
{
}

PointPointYposTest::~PointPointYposTest()
{
}

std::string PointPointYposTest::test()
{
	for (int i{ 0 }; i < itterations; i++)
	{
		float pointA[3]{
			0.0f,
			(float)i,
			0.0f
		};

		float pointB[3]{
			0.0f,
			(float)i + 1,
			0.0f
		};

		collision3D::PointPoint unit;
		unit.calculate(pointA, pointB);
		successes += unit.getCollision() == false;
	}

	if (successes == itterations)
	{
		return std::string();
	}

	return "point point ypos test failed\n";
}
