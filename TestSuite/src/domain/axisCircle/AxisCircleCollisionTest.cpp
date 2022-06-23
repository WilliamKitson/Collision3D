#include "AxisCircleCollisionTest.h"

AxisCircleCollisionTest::AxisCircleCollisionTest()
{
}

AxisCircleCollisionTest::~AxisCircleCollisionTest()
{
}

std::string AxisCircleCollisionTest::test()
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

	float input = distance(axis[0], circle[0]) + distance(axis[1], circle[1]) + distance(axis[2], circle[2]);
	float output = input;

	while ((output - input / output) > 0.000001f)
	{
		output = (output + input / output) / 2;
	}

	circle[3] = output;

	collision3D::AxisCircle unit;
	unit.calculate(axis, circle);

	if (unit.getCollision())
	{
		return std::string();
	}

	return "axis circle collision test failed\n";
}

float AxisCircleCollisionTest::distance(float a, float b)
{
	return absolute(a - b);
}

float AxisCircleCollisionTest::absolute(float input)
{
	return input * input;
}
