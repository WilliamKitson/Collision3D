#include "AxisPointInvertedLeftTest.h"

AxisPointInvertedLeftTest::AxisPointInvertedLeftTest()
{
}

AxisPointInvertedLeftTest::~AxisPointInvertedLeftTest()
{
}

std::string AxisPointInvertedLeftTest::test()
{
	float axis[6]{
		1.0f,
		0.0f,
		0.0f,
		-1.0f,
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

	if (unit.getCollision())
	{
		return std::string();
	}

	return "axis point inverted left test failed\n";
}
