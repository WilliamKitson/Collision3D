#include "AxisCircleInvertedLeftTest.h"

AxisCircleInvertedLeftTest::AxisCircleInvertedLeftTest()
{
}

AxisCircleInvertedLeftTest::~AxisCircleInvertedLeftTest()
{
}

std::string AxisCircleInvertedLeftTest::test()
{
	float axis[6]{
		1.0f,
		0.0f,
		0.0f,
		-1.0f,
		0.0f,
		0.0f
	};

	float circle[4]{
		-1.0f,
		-1.0f,
		-1.0f,
		0.0f
	};

	circle[3] = invert(squareRoot(distance(axis[0] + axis[3], circle[0]) + distance(axis[1] + axis[4], circle[1]) + distance(axis[2] + axis[5], circle[2])));

	collision3D::AxisCircle unit;
	unit.calculate(axis, circle);

	if (unit.getCollision())
	{
		return std::string();
	}

	return "axis circle inverted left test failed\n";
}

float AxisCircleInvertedLeftTest::distance(float a, float b)
{
	return absolute(a - b);
}

float AxisCircleInvertedLeftTest::absolute(float input)
{
	return input * input;
}

float AxisCircleInvertedLeftTest::squareRoot(float input)
{
	float output = input;

	while ((output - input / output) > 0.000001f)
	{
		output = (output + input / output) / 2;
	}

	return output;
}

float AxisCircleInvertedLeftTest::invert(float input)
{
	return input * -1.0f;
}
