#include "AxisAxisEvasionRightTest.h"

AxisAxisEvasionRightTest::AxisAxisEvasionRightTest()
{
}

AxisAxisEvasionRightTest::~AxisAxisEvasionRightTest()
{
}

std::string AxisAxisEvasionRightTest::test()
{
	float a[6]{
		-2.0f,
		0.0f,
		0.0f,
		1.0f,
		0.0f,
		0.0f
	};

	float b[6]{
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};

	collision3D::AxisAxis unit;
	unit.calculate(a, b);

	if (!unit.getCollision())
	{
		return std::string();
	}

	return "axis axis evasion right test failed\n";
}
