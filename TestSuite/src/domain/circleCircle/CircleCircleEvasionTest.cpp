#include "CircleCircleEvasionTest.h"

CircleCircleEvasionTest::CircleCircleEvasionTest()
{
}

CircleCircleEvasionTest::~CircleCircleEvasionTest()
{
}

std::string CircleCircleEvasionTest::test()
{
	float a[4]{
		1.0f,
		1.0f,
		1.0f,
		0.0f
	};

	float b[4]{
		-1.0f,
		-1.0f,
		-1.0f,
		0.0f
	};

	collision3D::CircleCircle unit;
	unit.calculate(a, b);

	if (!unit.getCollision())
	{
		return std::string();
	}

	return "circle circle evasion test failed\n";
}
