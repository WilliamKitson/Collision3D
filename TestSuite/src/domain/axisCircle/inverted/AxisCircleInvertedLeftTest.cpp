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

	float distanceX = (axis[0] + axis[3]) - circle[0];
	distanceX *= distanceX;

	float distanceY = (axis[1] + axis[4]) - circle[1];
	distanceY *= distanceY;

	float distanceZ = (axis[2] + axis[5]) - circle[2];
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

	return "axis circle inverted left test failed\n";
}
