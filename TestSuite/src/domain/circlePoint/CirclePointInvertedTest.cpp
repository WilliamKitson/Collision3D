#include "CirclePointInvertedTest.h"

CirclePointInvertedTest::CirclePointInvertedTest()
	: itterations{ 4 }
{
}

CirclePointInvertedTest::~CirclePointInvertedTest()
{
}

std::string CirclePointInvertedTest::test()
{
	if (successes() == itterations)
	{
		return std::string();
	}

	return "circle point inverted test failed\n";
}

int CirclePointInvertedTest::successes()
{
	int output = 0;

	for (int i{ 0 }; i < itterations; i++)
	{
		float circle[4]{
			(float)i * -1,
			(float)i * -1,
			(float)i * -1,
			0.0f
		};

		float point[3]{
			(float)i,
			(float)i,
			(float)i
		};

		circle[3] = squareRoot(distance(point[0], circle[0]) + distance(point[1], circle[1]) + distance(point[2], circle[2])) * -1.0f;

		collision3D::CirclePoint unit;
		unit.calculate(circle, point);
		output += unit.getCollision() == true;
	}

	return output;
}

float CirclePointInvertedTest::distance(float a, float b)
{
	float output = a - b;
	return output * output;
}

float CirclePointInvertedTest::squareRoot(float input)
{
	float output = input;

	while ((output - input / output) > 0.000001f)
	{
		output = (output + input / output) / 2;
	}

	return output;
}
