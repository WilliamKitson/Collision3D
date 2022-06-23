#include "AxisCircleCollisionLeftTest.h"

AxisCircleCollisionLeftTest::AxisCircleCollisionLeftTest()
{
}

AxisCircleCollisionLeftTest::~AxisCircleCollisionLeftTest()
{
}

std::string AxisCircleCollisionLeftTest::test()
{
	float axis[6]{
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};

	float circle[4]{
		1.0f,
		1.0f,
		1.0f,
		0.0f
	};

	circle[3] = squareRoot(distance(axis[0], circle[0]) + distance(axis[1], circle[1]) + distance(axis[2], circle[2]));

	collision3D::AxisCircle unit;
	unit.calculate(axis, circle);

	if (unit.getCollision())
	{
		return std::string();
	}

	return "axis circle collision left test failed\n";
}

float AxisCircleCollisionLeftTest::distance(float a, float b)
{
	return absolute(a - b);
}

float AxisCircleCollisionLeftTest::absolute(float input)
{
	return input * input;
}

float AxisCircleCollisionLeftTest::squareRoot(float input)
{
	float output = input;

	while ((output - input / output) > 0.000001f)
	{
		output = (output + input / output) / 2;
	}

	return output;
}
