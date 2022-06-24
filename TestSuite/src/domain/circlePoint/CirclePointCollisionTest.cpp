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
		output += collision((float)i);
	}

	return output;
}

bool CirclePointCollisionTest::collision(float input)
{
	float circle[4]{
		input,
		input,
		input,
		0.0f
	};

	float point[3]{
		invert(input),
		invert(input),
		invert(input),
	};

	circle[3] = squareRoot(distance(point[0], circle[0]) + distance(point[1], circle[1]) + distance(point[2], circle[2]));

	collision3D::CirclePoint unit;
	unit.calculate(circle, point);

	return unit.getCollision();
}

float CirclePointCollisionTest::invert(float input)
{
	return input * -1.0f;
}

float CirclePointCollisionTest::distance(float a, float b)
{
	return distance(a - b);
}

float CirclePointCollisionTest::distance(float input)
{
	return input * input;
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
