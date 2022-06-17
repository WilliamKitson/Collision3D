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
		float circle[4]{
			(float)i * -1,
			(float)i * -1,
			(float)i * -1,
			0.0f
		};

		float point[3]{
			(float)i,
			(float)i,
			(float)i
		};

		circle[3] = squareRoot(distance(point[0], circle[0]) + distance(point[1], circle[1]) + distance(point[2], circle[2]));

		collision3D::CirclePoint unit;
		unit.calculate(circle, point);
		output += unit.getCollision() == true;
	}

	return output;
}

float CirclePointCollisionTest::distance(float a, float b)
{
	float output = a - b;
	return output * output;
}

float CirclePointCollisionTest::squareRoot(float input)
{
	float output = input;

	while ((output - input / output) > 0.000001f)
	{
		output = (output + input / output) / 2;
	}

	return output;
}
