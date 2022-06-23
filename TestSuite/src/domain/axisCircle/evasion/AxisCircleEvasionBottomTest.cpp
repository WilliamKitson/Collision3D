#include "AxisCircleEvasionBottomTest.h"

AxisCircleEvasionBottomTest::AxisCircleEvasionBottomTest()
{
}

AxisCircleEvasionBottomTest::~AxisCircleEvasionBottomTest()
{
}

std::string AxisCircleEvasionBottomTest::test()
{
	float axis[6]{
		0.0f,
		1.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};

	float circle[4]{
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};

	collision3D::AxisCircle unit;
	unit.calculate(axis, circle);

	if (!unit.getCollision())
	{
		return std::string();
	}

	return "axis circle evasion bottom test failed\n";
}
