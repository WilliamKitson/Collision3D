#include "AxisPointInvertedFrontTest.h"

AxisPointInvertedFrontTest::AxisPointInvertedFrontTest()
{
}

AxisPointInvertedFrontTest::~AxisPointInvertedFrontTest()
{
}

std::string AxisPointInvertedFrontTest::test()
{
	float axis[6]{
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		-1.0f
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

	return "axis point inverted front test failed\n";
}
