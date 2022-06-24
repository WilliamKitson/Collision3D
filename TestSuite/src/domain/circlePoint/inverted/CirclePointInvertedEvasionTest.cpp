#include "CirclePointInvertedEvasionTest.h"

CirclePointInvertedEvasonTest::CirclePointInvertedEvasonTest()
	: itterations{ 4 }
{
}

CirclePointInvertedEvasonTest::~CirclePointInvertedEvasonTest()
{
}

std::string CirclePointInvertedEvasonTest::test()
{
	int successes = 0;

	for (int i{ 1 }; i < itterations; i++)
	{
		float circle[4]{
			(float)i,
			(float)i,
			(float)i,
			0.0f
		};

		float point[3]{
			(float)i * -1.0f,
			(float)i * -1.0f,
			(float)i * -1.0f
		};

		float distanceX = circle[0] - point[0];
		distanceX *= distanceX;

		float distanceY = circle[1] - point[1];
		distanceY *= distanceY;

		float distanceZ = circle[2] - point[2];
		distanceZ *= distanceZ;

		float input = distanceX + distanceY + distanceZ;
		float output = input;

		while ((output - input / output) > 0.000001f)
		{
			output = (output + input / output) / 2;
		}

		circle[3] = output - 0.1f;

		collision3D::CirclePoint unit;
		unit.calculate(circle, point);

		successes += !unit.getCollision();
	}

	if (successes == itterations - 1)
	{
		return std::string();
	}

	return "circle point inverted evasion test failed\n";
}
