#include "PointPointZposTest.h"

PointPointZposTest::PointPointZposTest()
	: itterations{ 4 }, successes{ 0 }
{
}

PointPointZposTest::~PointPointZposTest()
{
}

std::string PointPointZposTest::test()
{
	for (int i{ 0 }; i < itterations; i++)
	{
		float pointA[3]{
			0.0f,
			0.0f,
			(float)i
		};

		float pointB[3]{
			0.0f,
			0.0f,
			(float)i + 1
		};

		collision3D::PointPoint unit;
		unit.calculate(pointA, pointB);
		successes += unit.getCollision() == false;
	}

	if (successes == itterations)
	{
		return std::string();
	}

	return "point point zpos test failed\n";
}
