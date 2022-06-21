#include "AxisAxisEvasionLeftTest.h"

AxisAxisEvasionLeftTest::AxisAxisEvasionLeftTest()
{
}

AxisAxisEvasionLeftTest::~AxisAxisEvasionLeftTest()
{
}

std::string AxisAxisEvasionLeftTest::test()
{
	float a[6]{
		1.0f,
		0.0f,
		0.0f,
		0.0f,
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

	return "axis axis evasion left test failed\n";
}
