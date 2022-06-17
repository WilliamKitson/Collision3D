#include "CirclePointInversionTest.h"

CirclePointInversionTest::CirclePointInversionTest()
	: itterations{ 4 }, successes{ 0 }
{
}

CirclePointInversionTest::~CirclePointInversionTest()
{
}

std::string CirclePointInversionTest::test()
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

		collision3D::CirclePoint unit;
		unit.calculate(point, circle);
		successes += unit.getCollision() == true;
	}

	if (successes == itterations)
	{
		return std::string();
	}

	return "circle point inversion test failed\n";
}

float CirclePointInversionTest::calculateDistance(double a, double b)
{
	double distance = a - b;
	return (float)sqrt((distance * distance) + (distance * distance));
}

float CirclePointInversionTest::invertValue(float value)
{
	return value * -1.0f;
}
