#include "AxisAxisInvertedBATopTest.h"

AxisAxisInvertedBATopTest::AxisAxisInvertedBATopTest()
{
}

AxisAxisInvertedBATopTest::~AxisAxisInvertedBATopTest()
{
}

std::string AxisAxisInvertedBATopTest::test()
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
		0.0f,
		0.0f,
		-1.0f,
		0.0f
	};

	collision3D::AxisAxis unit;
	unit.calculate(a, b);

	if (unit.getCollision())
	{
		return std::string();
	}

	return "axis axis inverted BA top test failed\n";
}
