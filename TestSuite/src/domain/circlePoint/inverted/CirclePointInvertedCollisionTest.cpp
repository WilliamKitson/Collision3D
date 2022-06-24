#include "CirclePointInvertedCollisionTest.h"

CirclePointInvertedCollisionTest::CirclePointInvertedCollisionTest()
	: itterations{ 4 }
{
}

CirclePointInvertedCollisionTest::~CirclePointInvertedCollisionTest()
{
}

std::string CirclePointInvertedCollisionTest::test()
{
	if (successes() == itterations)
	{
		return std::string();
	}

	return "circle point inverted collision test failed\n";
}

int CirclePointInvertedCollisionTest::successes()
{
	int output = 0;

	for (int i{ 0 }; i < itterations; i++)
	{
		output += collision((float)i);
	}

	return output;
}

bool CirclePointInvertedCollisionTest::collision(float input)
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
		invert(input)
	};

	circle[3] = invert(squareRoot(distance(point[0], circle[0]) + distance(point[1], circle[1]) + distance(point[2], circle[2])));

	collision3D::CirclePoint unit;
	unit.calculate(circle, point);

	return unit.getCollision();
}

float CirclePointInvertedCollisionTest::invert(float input)
{
	return -input;
}

float CirclePointInvertedCollisionTest::distance(float a, float b)
{
	return distance(a - b);
}

float CirclePointInvertedCollisionTest::distance(float input)
{
	return input * input;
}

float CirclePointInvertedCollisionTest::squareRoot(float input)
{
	float output = input;

	while ((output - input / output) > 0.000001f)
	{
		output = (output + input / output) / 2;
	}

	return output;
}
