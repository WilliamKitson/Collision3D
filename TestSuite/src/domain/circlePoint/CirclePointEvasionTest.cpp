#include "CirclePointEvasionTest.h"

CirclePointEvasionTest::CirclePointEvasionTest()
	: itterations{ 4 }, successes{ 0 }
{
}

CirclePointEvasionTest::~CirclePointEvasionTest()
{
}

std::string CirclePointEvasionTest::test()
{
	for (int i{ 1 }; i < itterations; i++)
	{
		float point[3]{
			(float)i,
			(float)i,
			(float)i
		};

		float circle[4]{
			(float)i * -1,
			(float)i * -1,
			(float)i * -1,
			0.0f
		};

		collision3D::CirclePoint unit;
		unit.calculate(point, circle);
		successes += unit.getCollision() == false;
	}

	if (successes == itterations - 1)
	{
		return std::string();
	}

	return "circle point evasion test failed\n";
}
