#include "AxisCircleInvertedEvasionTest.h"

AxisCircleInvertedEvasionTest::AxisCircleInvertedEvasionTest()
	: itterations{ 4 }
{
}

AxisCircleInvertedEvasionTest::~AxisCircleInvertedEvasionTest()
{
}

std::string AxisCircleInvertedEvasionTest::test()
{
	if (successes() == itterations)
	{
		return std::string();
	}

	return "axis circle inverted evasion test failed\n";
}

int AxisCircleInvertedEvasionTest::successes()
{
	int successes = 1;

	for (int i{ 1 }; i < itterations; i++)
	{
		float axis[6]{
			(float)i,
			(float)i,
			(float)i,
			0.0f,
			0.0f,
			0.0f
		};

		float circle[4]{
			-(float)i,
			-(float)i,
			-(float)i,
			0.0f
		};

		float distanceX = axis[0] - circle[0];
		distanceX *= distanceX;

		float distanceY = axis[1] - circle[1];
		distanceY *= distanceY;

		float distanceZ = axis[2] - circle[2];
		distanceZ *= distanceZ;

		float input = distanceX + distanceY + distanceZ;
		float output = input;

		while ((output - input / output) > 0.000001f)
		{
			output = (output + input / output) / 2;
		}

		circle[3] = -output + 0.1f;

		collision3D::AxisCircle unit;
		unit.calculate(axis, circle);

		successes += !unit.getCollision();
	}

	return successes;
}
