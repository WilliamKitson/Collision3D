#include "CircleCircleInvertedEvasionTest.h"

CircleCircleInvertedEvasionTest::CircleCircleInvertedEvasionTest()
	: itterations{ 4 }
{
}

CircleCircleInvertedEvasionTest::~CircleCircleInvertedEvasionTest()
{
}

std::string CircleCircleInvertedEvasionTest::test()
{
	if (successes() == itterations)
	{
		return std::string();
	}

	return "circle circle inverted evasion test failed\n";
}

int CircleCircleInvertedEvasionTest::successes()
{
	int successes = 1;

	for (int i{ 1 }; i < itterations; i++)
	{
		float a[4]{
			(float)i,
			(float)i,
			(float)i,
			0.0f
		};

		float b[4]{
			-(float)i,
			-(float)i,
			-(float)i,
			0.0f
		};

		float distanceX = a[0] - b[0];
		distanceX *= distanceX;

		float distanceY = a[1] - b[1];
		distanceY *= distanceY;

		float distanceZ = a[2] - b[2];
		distanceZ *= distanceZ;

		float input = distanceX + distanceY + distanceZ;
		float output = input;

		while ((output - input / output) > 0.000001f)
		{
			output = (output + input / output) / 2;
		}

		output *= 0.5f;
		output -= 0.1f;

		a[3] = -output;
		b[3] = -output;

		collision3D::CircleCircle unit;
		unit.calculate(a, b);

		successes += !unit.getCollision();
	}

	return successes;
}
