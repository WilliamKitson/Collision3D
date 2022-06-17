#include "CirclePointCollisionTest.h"

CirclePointCollisionTest::CirclePointCollisionTest()
	: itterations{ 4 }
{
}

CirclePointCollisionTest::~CirclePointCollisionTest()
{
}

std::string CirclePointCollisionTest::test()
{
	if (successes() == itterations)
	{
		return std::string();
	}

	return "circle point collision test failed\n";
}

int CirclePointCollisionTest::successes()
{
	int output = 0;

	for (int i{ 0 }; i < itterations; i++)
	{
		float point[3]{
			(float)i,
			(float)i,
			(float)i
		};

		float circle[4]{
			(float)i * i,
			(float)i * i,
			(float)i * i,
			distance((double)i, (double)i * (double)i)
		};

		collision3D::CirclePoint unit;
		unit.calculate(point, circle);
		output += unit.getCollision() == true;
	}

	return output;
}

float CirclePointCollisionTest::distance(double a, double b)
{
	double distance = a - b;
	return (float)sqrt((distance * distance) + (distance * distance) + (distance * distance));
}
