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
	if (successes() == itterations)
	{
		return std::string();
	}

	return "circle point inverted evasion test failed\n";
}

int CirclePointInvertedEvasonTest::successes()
{
	int output = 1;

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
		float squareRoot = input;

		while ((squareRoot - input / squareRoot) > 0.000001f)
		{
			squareRoot = (squareRoot + input / squareRoot) / 2;
		}

		circle[3] = squareRoot - 0.1f;

		collision3D::CirclePoint unit;
		unit.calculate(circle, point);

		output += !unit.getCollision();
	}

	return output;
}
