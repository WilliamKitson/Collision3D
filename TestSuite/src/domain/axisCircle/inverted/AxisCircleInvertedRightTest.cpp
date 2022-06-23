#include "AxisCircleInvertedRightTest.h"

AxisCircleInvertedRightTest::AxisCircleInvertedRightTest()
{
}

AxisCircleInvertedRightTest::~AxisCircleInvertedRightTest()
{
}

std::string AxisCircleInvertedRightTest::test()
{
	float axis[6]{
		0.0f,
		0.0f,
		0.0f,
		-1.0f,
		0.0f,
		0.0f
	};

	float circle[4]{
		1.0f,
		1.0f,
		1.0f,
		0.0f
	};

	circle[3] = invert(squareRoot(distance(axis[0], circle[0]) + distance(axis[1], circle[1]) + distance(axis[2], circle[2])) * -1.0f);

	collision3D::AxisCircle unit;
	unit.calculate(axis, circle);

	if (unit.getCollision())
	{
		return std::string();
	}

	return "axis circle inverted right test failed\n";
}

float AxisCircleInvertedRightTest::distance(float a, float b)
{
	return absolute(a - b);
}

float AxisCircleInvertedRightTest::absolute(float input)
{
	return input * input;
}

float AxisCircleInvertedRightTest::squareRoot(float input)
{
	float output = input;

	while ((output - input / output) > 0.000001f)
	{
		output = (output + input / output) / 2;
	}

	return output;
}

float AxisCircleInvertedRightTest::invert(float input)
{
	return input * -1.0f;
}
