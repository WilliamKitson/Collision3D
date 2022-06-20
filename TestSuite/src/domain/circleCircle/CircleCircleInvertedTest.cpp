#include "CircleCircleInvertedTest.h"

CircleCircleInvertedTest::CircleCircleInvertedTest()
	: itterations{ 4 }
{
}

CircleCircleInvertedTest::~CircleCircleInvertedTest()
{
}

std::string CircleCircleInvertedTest::test()
{
	int successes = 0;

	for (int i{ 0 }; i < itterations; i++)
	{
		float a[4]{
			(float)i * -1,
			(float)i * -1,
			(float)i * -1,
			0.0f
		};

		float b[4]{
			(float)i,
			(float)i,
			(float)i,
			0.0f
		};

		float xDistance = a[0] - b[0];
		xDistance *= xDistance;

		float yDistance = a[1] - b[1];
		yDistance *= yDistance;

		float zDistance = a[2] - b[2];
		zDistance *= zDistance;

		float input = xDistance + yDistance + zDistance;
		float output = input;

		while ((output - input / output) > 0.000001f)
		{
			output = (output + input / output) / 2;
		}

		float radius = output;
		radius *= -0.5f;

		a[3] = radius;
		b[3] = radius;

		collision3D::CircleCircle unit;
		unit.calculate(a, b);
		successes += unit.getCollision() == true;
	}

	if (successes == itterations)
	{
		return std::string();
	}

	return "circle circle inverted test failed\n";
}
