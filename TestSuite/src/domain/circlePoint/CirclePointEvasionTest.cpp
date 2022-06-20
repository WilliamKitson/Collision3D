#include "CirclePointEvasionTest.h"

CirclePointEvasionTest::CirclePointEvasionTest()
{
}

CirclePointEvasionTest::~CirclePointEvasionTest()
{
}

std::string CirclePointEvasionTest::test()
{
	float circle[4]{
		1.0f,
		1.0f,
		1.0f,
		0.0
	};

	float point[3]{
		-1.0f,
		-1.0f,
		-1.0f,
	};

	collision3D::CirclePoint unit;
	unit.calculate(circle, point);

	if (!unit.getCollision())
	{
		return std::string();
	}

	return "circle point evasion test failed\n";
}
