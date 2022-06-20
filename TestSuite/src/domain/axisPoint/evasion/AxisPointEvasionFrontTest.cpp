#include "AxisPointEvasionFrontTest.h"

AxisPointEvasionFrontTest::AxisPointEvasionFrontTest()
{
}

AxisPointEvasionFrontTest::~AxisPointEvasionFrontTest()
{
}

std::string AxisPointEvasionFrontTest::test()
{
	float axis[6]{
		0.0f,
		0.0f,
		-2.0f,
		0.0f,
		0.0f,
		1.0f,
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

	return "axis point evasion front test failed\n";
}
