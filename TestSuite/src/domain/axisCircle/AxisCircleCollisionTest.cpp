#include "AxisCircleCollisionTest.h"

AxisCircleCollisionTest::AxisCircleCollisionTest()
{
}

AxisCircleCollisionTest::~AxisCircleCollisionTest()
{
}

std::string AxisCircleCollisionTest::test()
{
	float axis[6]{
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};

	float circle[4]{
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};

	collision3D::AxisCircle unit;
	unit.calculate(axis, circle);

	if (unit.getCollision())
	{
		return std::string();
	}

	return "axis circle collision test failed\n";
}
