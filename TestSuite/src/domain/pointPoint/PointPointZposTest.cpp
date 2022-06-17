#include "PointPointZposTest.h"

PointPointZposTest::PointPointZposTest()
	: itterations{ 4 }
{
}

PointPointZposTest::~PointPointZposTest()
{
}

std::string PointPointZposTest::test()
{
	if (successes() == itterations)
	{
		return std::string();
	}

	return "point point zpos test failed\n";
}

int PointPointZposTest::successes()
{
	int output = 0;

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
		output += unit.getCollision() == false;
	}

	return output;
}
