#include "AxisPointEvasionRightTest.h"

AxisPointEvasionRightTest::AxisPointEvasionRightTest()
{
}

AxisPointEvasionRightTest::~AxisPointEvasionRightTest()
{
}

std::string AxisPointEvasionRightTest::test()
{
	float axis[6]{
		-2.0f,
		0.0f,
		0.0f,
		1.0f,
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

	return "axis point evasion right test failed\n";
}
