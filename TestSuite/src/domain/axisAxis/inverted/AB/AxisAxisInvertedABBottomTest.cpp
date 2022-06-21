#include "AxisAxisInvertedABBottomTest.h"

AxisAxisInvertedABBottomTest::AxisAxisInvertedABBottomTest()
{
}

AxisAxisInvertedABBottomTest::~AxisAxisInvertedABBottomTest()
{
}

std::string AxisAxisInvertedABBottomTest::test()
{
	float a[6]{
		0.0f,
		1.0f,
		0.0f,
		0.0f,
		-1.0f,
		0.0f
	};

	float b[6]{
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};

	collision3D::AxisAxis unit;
	unit.calculate(a, b);

	if (unit.getCollision())
	{
		return std::string();
	}

	return "axis axis inverted AB bottom test failed\n";
}
