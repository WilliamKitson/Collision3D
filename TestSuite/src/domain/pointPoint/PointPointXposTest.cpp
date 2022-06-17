#include "PointPointXposTest.h"

PointPointXposTest::PointPointXposTest()
	: itterations{ 4 }
{
}

PointPointXposTest::~PointPointXposTest()
{
}

std::string PointPointXposTest::test()
{
	if (successes() == itterations)
	{
		return std::string();
	}

	return "point point xpos test failed\n";
}

int PointPointXposTest::successes()
{
	int output = 0;

	for (int i{ 0 }; i < itterations; i++)
	{
		float pointA[3]{
			(float)i,
			0.0f,
			0.0f
		};

		float pointB[3]{
			(float)i + 1,
			0.0f,
			0.0f
		};

		collision3D::PointPoint unit;
		unit.calculate(pointA, pointB);
		output += unit.getCollision() == false;
	}

	return output;
}
