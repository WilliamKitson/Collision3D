#include "AxisCircleInvertedCollisionTest.h"

AxisCircleInvertedCollisionTest::AxisCircleInvertedCollisionTest()
	: itterations{ 4 }
{
}

AxisCircleInvertedCollisionTest::~AxisCircleInvertedCollisionTest()
{
}

std::string AxisCircleInvertedCollisionTest::test()
{
	if (successes() == itterations)
	{
		return std::string();
	}

	return "axis circle inverted collision test failed\n";
}

int AxisCircleInvertedCollisionTest::successes()
{
	int output = 0;

	for (int i{ 0 }; i < itterations; i++)
	{
		output += collision((float)i);
	}

	return output;
}

bool AxisCircleInvertedCollisionTest::collision(float input)
{
	float axis[6]{
		input,
		input,
		input,
		0.0f,
		0.0f,
		0.0f
	};

	float circle[4]{
		-input,
		-input,
		-input,
		0.0f
	};

	circle[3] = -squareRoot(distance(axis[0], circle[0]) + distance(axis[1], circle[1]) + distance(axis[2], circle[2]));

	collision3D::AxisCircle unit;
	unit.calculate(axis, circle);

	return unit.getCollision();
}

float AxisCircleInvertedCollisionTest::distance(float a, float b)
{
	return distance(a - b);
}

float AxisCircleInvertedCollisionTest::distance(float input)
{
	return input * input;
}

float AxisCircleInvertedCollisionTest::squareRoot(float input)
{
	float output = input;

	while ((output - input / output) > 0.000001f)
	{
		output = (output + input / output) / 2;
	}

	return output;
}
