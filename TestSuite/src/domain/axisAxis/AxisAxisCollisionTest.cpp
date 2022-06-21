#include "AxisAxisCollisionTest.h"

AxisAxisCollisionTest::AxisAxisCollisionTest()
{
}

AxisAxisCollisionTest::~AxisAxisCollisionTest()
{
}

std::string AxisAxisCollisionTest::test()
{
	float axis[6]{
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};

	collision3D::AxisAxis unit;
	unit.calculate(axis, axis);

	if (unit.getCollision())
	{
		return std::string();
	}

	return "axis axis collision test failed\n";
}
