#include "AxisCircleInvertedTest.h"

AxisCircleInvertedTest::AxisCircleInvertedTest()
	: itterations{ 4 }
{
}

AxisCircleInvertedTest::~AxisCircleInvertedTest()
{
}

std::string AxisCircleInvertedTest::test()
{
	if (successes() == itterations)
	{
		return std::string();
	}

	return "axis circle inverted right test failed\n";
}

int AxisCircleInvertedTest::successes()
{
	int output = 0;

	for (int i{ 0 }; i < itterations; i++)
	{
		output += collision((float)i);
	}

	return output;
}

bool AxisCircleInvertedTest::collision(float input)
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

float AxisCircleInvertedTest::distance(float a, float b)
{
	return distance(a - b);
}

float AxisCircleInvertedTest::distance(float input)
{
	return input * input;
}

float AxisCircleInvertedTest::squareRoot(float input)
{
	float output = input;

	while ((output - input / output) > 0.000001f)
	{
		output = (output + input / output) / 2;
	}

	return output;
}
