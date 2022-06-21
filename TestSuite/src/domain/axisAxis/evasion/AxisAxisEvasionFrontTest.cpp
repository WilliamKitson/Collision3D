#include "AxisAxisEvasionFrontTest.h"

AxisAxisEvasionFrontTest::AxisAxisEvasionFrontTest()
{
}

AxisAxisEvasionFrontTest::~AxisAxisEvasionFrontTest()
{
}

std::string AxisAxisEvasionFrontTest::test()
{
	float a[6]{
		0.0f,
		0.0f,
		-2.0f,
		0.0f,
		0.0f,
		1.0f
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

	return "axis axis evasion front test failed\n";
}
