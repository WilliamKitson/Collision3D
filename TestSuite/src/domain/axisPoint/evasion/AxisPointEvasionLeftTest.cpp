#include "AxisPointEvasionLeftTest.h"

AxisPointEvasionLeftTest::AxisPointEvasionLeftTest()
{
}

AxisPointEvasionLeftTest::~AxisPointEvasionLeftTest()
{
}

std::string AxisPointEvasionLeftTest::test()
{
	float axis[6]{
		1.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};

	float point[3]{
		0.0f,
		0.0f,
		0.0f
	};

	collision3D::AxisPoint unit;
	unit.calculate(axis, point);

	if (!unit.getCollision())
	{
		return std::string();
	}

	return "axis point evasion left test failed\n";
}
