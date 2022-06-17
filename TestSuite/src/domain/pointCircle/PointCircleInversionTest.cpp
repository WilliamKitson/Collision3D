#include "PointCircleInversionTest.h"

PointCircleInversionTest::PointCircleInversionTest()
	: itterations{ 4 }, successes{ 0 }
{
}

PointCircleInversionTest::~PointCircleInversionTest()
{
}

std::string PointCircleInversionTest::test()
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
			invertValue(calculateDistance((double)i, (double)i * (double)i))
		};

		collision2D::CirclePoint unit;
		unit.calculate(point, circle);
		successes += unit.getCollision() == true;
	}

	if (successes == itterations)
	{
		return std::string();
	}

	return "point circle inversion test failed\n";
}

float PointCircleInversionTest::calculateDistance(double a, double b)
{
	double distance = a - b;
	return (float)sqrt((distance * distance) + (distance * distance));
}

float PointCircleInversionTest::invertValue(float value)
{
	return value * -1.0f;
}
