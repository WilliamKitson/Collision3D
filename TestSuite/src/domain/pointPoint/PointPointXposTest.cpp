#include "PointPointXposTest.h"

PointPointXposTest::PointPointXposTest()
	: itterations{ 4 }, successes{ 0 }
{
}

PointPointXposTest::~PointPointXposTest()
{
}

std::string PointPointXposTest::test()
{
	for (int i{ 0 }; i < itterations; i++)
	{
		float pointA[2]{
			(float)i,
			0.0f
		};

		float pointB[2]{
			(float)i + 1,
			0.0f
		};

		collision2D::PointPoint unit;
		unit.calculate(pointA, pointB);
		successes += unit.getCollision() == false;
	}

	if (successes == itterations)
	{
		return std::string();
	}

	return "point point xpos test failed\n";
}
