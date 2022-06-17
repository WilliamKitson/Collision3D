#include "PointCircleCollisionTest.h"

PointCircleCollisionTest::PointCircleCollisionTest()
	: itterations{ 4 }, successes{ 0 }
{
}

PointCircleCollisionTest::~PointCircleCollisionTest()
{
}

std::string PointCircleCollisionTest::test()
{
	for (int i{ 0 }; i < itterations; i++)
	{
		float point[2]{
			(float)i,
			(float)i
		};

		float circle[3]{
			(float)i * i,
			(float)i * i,
			calculateDistance((double)i, (double)i * (double)i)
		};

		collision2D::CirclePoint unit;
		unit.calculate(point, circle);
		successes += unit.getCollision() == true;
	}

	if (successes == itterations)
	{
		return std::string();
	}

	return "point circle collision test failed\n";
}

float PointCircleCollisionTest::calculateDistance(double a, double b)
{
	double distance = a - b;
	return (float)sqrt((distance * distance) + (distance * distance));
}
