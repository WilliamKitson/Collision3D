#include "AxisPointEvasionTopTest.h"

AxisPointEvasionTopTest::AxisPointEvasionTopTest()
{
}

AxisPointEvasionTopTest::~AxisPointEvasionTopTest()
{
}

std::string AxisPointEvasionTopTest::test()
{
	float axis[6]{
		0.0f,
		-2.0f,
		0.0f,
		0.0f,
		1.0f,
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

	return "axis point evasion top test failed\n";
}
