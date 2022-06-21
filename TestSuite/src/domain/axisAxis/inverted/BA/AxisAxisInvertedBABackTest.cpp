#include "AxisAxisInvertedBABackTest.h"

AxisAxisInvertedBABackTest::AxisAxisInvertedBABackTest()
{
}

AxisAxisInvertedBABackTest::~AxisAxisInvertedBABackTest()
{
}

std::string AxisAxisInvertedBABackTest::test()
{
	float a[6]{
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};

	float b[6]{
		0.0f,
		0.0f,
		1.0f,
		0.0f,
		0.0f,
		-1.0f
	};

	collision3D::AxisAxis unit;
	unit.calculate(a, b);

	if (unit.getCollision())
	{
		return std::string();
	}

	return "axis axis inverted BA back test failed\n";
}
