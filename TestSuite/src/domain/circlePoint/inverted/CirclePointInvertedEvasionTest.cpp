#include "CirclePointInvertedEvasionTest.h"

CirclePointInvertedEvasonTest::CirclePointInvertedEvasonTest()
	: itterations{ 4 }
{
}

CirclePointInvertedEvasonTest::~CirclePointInvertedEvasonTest()
{
}

std::string CirclePointInvertedEvasonTest::test()
{
	if (successes() == itterations)
	{
		return std::string();
	}

	return "circle point inverted evasion test failed\n";
}

int CirclePointInvertedEvasonTest::successes()
{
	int output = 1;

	for (int i{ 1 }; i < itterations; i++)
	{
		output += !collision((float)i);
	}

	return output;
}

bool CirclePointInvertedEvasonTest::collision(float input)
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

	circle[3] = invert(squareRoot(distance(circle[0], point[0]) + distance(circle[1], point[1]) + distance(circle[2], point[2]))) + 0.1f;

	collision3D::CirclePoint unit;
	unit.calculate(circle, point);

	return unit.getCollision();
}

float CirclePointInvertedEvasonTest::invert(float input)
{
	return -input;
}

float CirclePointInvertedEvasonTest::distance(float a, float b)
{
	return distance(a - b);
}

float CirclePointInvertedEvasonTest::distance(float input)
{
	return input * input;
}

float CirclePointInvertedEvasonTest::squareRoot(float input)
{
	float output = input;

	while ((output - input / output) > 0.000001f)
	{
		output = (output + input / output) / 2;
	}

	return output;
}
