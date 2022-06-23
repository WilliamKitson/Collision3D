#include "AxisCircleEvasionFrontTest.h"

AxisCircleEvasionFrontTest::AxisCircleEvasionFrontTest()
{
}

AxisCircleEvasionFrontTest::~AxisCircleEvasionFrontTest()
{
}

std::string AxisCircleEvasionFrontTest::test()
{
	float axis[6]{
		0.0f,
		0.0f,
		-2.0f,
		0.0f,
		0.0f,
		1.0f
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

	return "axis circle evasion front test failed\n";
}
