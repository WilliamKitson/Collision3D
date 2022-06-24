#include "CircleCircleInvertedCollisionTest.h"

CircleCircleInvertedCollisionTest::CircleCircleInvertedCollisionTest()
	: itterations{ 4 }
{
}

CircleCircleInvertedCollisionTest::~CircleCircleInvertedCollisionTest()
{
}

std::string CircleCircleInvertedCollisionTest::test()
{
	if (successes() == itterations)
	{
		return std::string();
	}

	return "circle circle inverted collision test failed\n";
}

int CircleCircleInvertedCollisionTest::successes()
{
	int output = 0;

	for (int i{ 0 }; i < itterations; i++)
	{
		output += collision((float)i);
	}

	return output;
}

bool CircleCircleInvertedCollisionTest::collision(float input)
{
	float a[4]{
		input,
		input,
		input,
		0.0f
	};

	float b[4]{
		-input,
		-input,
		-input,
		0.0f
	};

	float radius = squareRoot(distance(a[0], b[0]) + distance(a[1], b[1]) + distance(a[2], b[2]));
	radius *= -0.5f;

	a[3] = radius;
	b[3] = radius;

	collision3D::CircleCircle unit;
	unit.calculate(a, b);
	
	return unit.getCollision();
}

float CircleCircleInvertedCollisionTest::distance(float a, float b)
{
	return distance(a - b);
}

float CircleCircleInvertedCollisionTest::distance(float input)
{
	return input * input;
}

float CircleCircleInvertedCollisionTest::squareRoot(float input)
{
	float output = input;

	while ((output - input / output) > 0.000001f)
	{
		output = (output + input / output) / 2;
	}

	return output;
}
