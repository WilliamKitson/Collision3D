#include "CirclePointCollisionTest.h"

CirclePointCollisionTest::CirclePointCollisionTest()
	: itterations{ 4 }, successes{ 0 }
{
}

CirclePointCollisionTest::~CirclePointCollisionTest()
{
}

std::string CirclePointCollisionTest::test()
{
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
			calculateDistance((double)i, (double)i * (double)i)
		};

		collision3D::CirclePoint unit;
		unit.calculate(point, circle);
		successes += unit.getCollision() == true;
	}

	if (successes == itterations)
	{
		return std::string();
	}

	return "circle point collision test failed\n";
}

float CirclePointCollisionTest::calculateDistance(double a, double b)
{
	double distance = a - b;
	return (float)sqrt((distance * distance) + (distance * distance) + (distance * distance));
}
