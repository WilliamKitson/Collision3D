#include "CircleCircleInvertedTest.h"

CircleCircleInvertedTest::CircleCircleInvertedTest()
	: itterations{ 4 }
{
}

CircleCircleInvertedTest::~CircleCircleInvertedTest()
{
}

std::string CircleCircleInvertedTest::test()
{
	if (successes() == itterations)
	{
		return std::string();
	}

	return "circle circle inverted test failed\n";
}

int CircleCircleInvertedTest::successes()
{
	int output = 0;

	for (int i{ 0 }; i < itterations; i++)
	{
		float a[4]{
			(float)i * -1,
			(float)i * -1,
			(float)i * -1,
			0.0f
		};

		float b[4]{
			(float)i,
			(float)i,
			(float)i,
			0.0f
		};

		float radius = squareRoot(distance(a[0], b[0]) + distance(a[1], b[1]) + distance(a[2], b[2]));
		radius *= -0.5f;

		a[3] = radius;
		b[3] = radius;

		collision3D::CircleCircle unit;
		unit.calculate(a, b);
		output += unit.getCollision() == true;
	}

	return output;
}

float CircleCircleInvertedTest::distance(float a, float b)
{
	float output = a - b;
	return output * output;
}

float CircleCircleInvertedTest::squareRoot(float input)
{
	float output = input;

	while ((output - input / output) > 0.000001f)
	{
		output = (output + input / output) / 2;
	}

	return output;
}
