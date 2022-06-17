#include "PointPointYposTest.h"

PointPointYposTest::PointPointYposTest()
	: itterations{ 4 }
{
}

PointPointYposTest::~PointPointYposTest()
{
}

std::string PointPointYposTest::test()
{
	if (successes() == itterations)
	{
		return std::string();
	}

	return "point point ypos test failed\n";
}

int PointPointYposTest::successes()
{
	int output = 0;

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
		output += unit.getCollision() == false;
	}

	return output;
}
