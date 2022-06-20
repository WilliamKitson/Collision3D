#include "AxisPointInvertedTopTest.h"

AxisPointInvertedTopTest::AxisPointInvertedTopTest()
{
}

AxisPointInvertedTopTest::~AxisPointInvertedTopTest()
{
}

std::string AxisPointInvertedTopTest::test()
{
	float axis[6]{
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		-1.0f,
		0.0f
	};

	float point[3]{
		0.0f,
		0.0f,
		0.0f
	};

	collision3D::AxisPoint unit;
	unit.calculate(axis, point);

	if (unit.getCollision())
	{
		return std::string();
	}

	return "axis point inverted top test failed\n";
}
