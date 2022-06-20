#include "AxisPointCollisionTest.h"

AxisPointCollisionTest::AxisPointCollisionTest()
{
}

AxisPointCollisionTest::~AxisPointCollisionTest()
{
}

std::string AxisPointCollisionTest::test()
{
	float point[3]{
		0.0f,
		0.0f,
		0.0f
	};

	float axis[6]{
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};

	collision3D::AxisPoint unit;
	unit.calculate(point, axis);

	if (unit.getCollision())
	{
		return std::string();
	}

	return "axis point collision test failed\n";
}
