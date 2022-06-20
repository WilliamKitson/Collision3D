#include "AxisPointEvasionLeftTest.h"

AxisPointEvasionLeftTest::AxisPointEvasionLeftTest()
{
}

AxisPointEvasionLeftTest::~AxisPointEvasionLeftTest()
{
}

std::string AxisPointEvasionLeftTest::test()
{
	float point[3]{
		0.0f,
		0.0f,
		0.0f
	};

	float axis[6]{
		1.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};

	collision3D::AxisPoint unit;
	unit.calculate(point, axis);

	if (!unit.getCollision())
	{
		return std::string();
	}

	return "axis point evasion left test failed\n";
}
