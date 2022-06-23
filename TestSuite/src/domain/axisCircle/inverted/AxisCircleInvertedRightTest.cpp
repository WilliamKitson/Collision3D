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

	float distanceX = axis[0] - circle[0];
	distanceX *= distanceX;

	float distanceY = axis[1] - circle[1];
	distanceY *= distanceY;

	float distanceZ = axis[2] - circle[2];
	distanceZ *= distanceZ;

	float input = distanceX + distanceY + distanceZ;
	float output = input;

	while ((output - input / output) > 0.000001f)
	{
		output = (output + input / output) / 2;
	}

	circle[3] = output * -1.0f;

	collision3D::AxisCircle unit;
	unit.calculate(axis, circle);

	if (unit.getCollision())
	{
		return std::string();
	}

	return "axis circle inverted right test failed\n";
}
