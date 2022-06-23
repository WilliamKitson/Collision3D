#include "AxisCircleEvasionTopTest.h"

AxisCircleEvasionTopTest::AxisCircleEvasionTopTest()
{
}

AxisCircleEvasionTopTest::~AxisCircleEvasionTopTest()
{
}

std::string AxisCircleEvasionTopTest::test()
{
	float axis[6]{
		0.0f,
		-2.0f,
		0.0f,
		0.0f,
		1.0f,
		0.0f,
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

	return "axis circle evasion top test failed\n";
}
