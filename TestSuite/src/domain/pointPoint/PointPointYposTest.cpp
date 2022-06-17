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
		float pointA[2]{
			0.0f,
			(float)i
		};

		float pointB[2]{
			0.0f,
			(float)i + 1
		};

		collision2D::PointPoint unit;
		unit.calculate(pointA, pointB);
		successes += unit.getCollision() == false;
	}

	if (successes == itterations)
	{
		return std::string();
	}

	return "point point ypos test failed\n";
}
