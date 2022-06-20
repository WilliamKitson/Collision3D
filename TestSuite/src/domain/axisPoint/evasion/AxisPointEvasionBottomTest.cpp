#include "AxisPointEvasionBottomTest.h"

AxisPointEvasionBottomTest::AxisPointEvasionBottomTest()
{
}

AxisPointEvasionBottomTest::~AxisPointEvasionBottomTest()
{
}

std::string AxisPointEvasionBottomTest::test()
{
	float axis[6]{
		0.0f,
		1.0f,
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

	return "axis point evasion bottom test failed\n";
}
