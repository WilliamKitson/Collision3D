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
	int output = 1;

	for (int i{ 1 }; i < itterations; i++)
	{
		output += !collision((float)i);;
	}

	return output;
}

bool CircleCircleInvertedEvasionTest::collision(float input)
{
	float a[4]{
		input,
		input,
		input,
		0.0f
	};

	float b[4]{
		-input,
		-input,
		-input,
		0.0f
	};

	float distanceX = a[0] - b[0];
	distanceX *= distanceX;

	float distanceY = a[1] - b[1];
	distanceY *= distanceY;

	float distanceZ = a[2] - b[2];
	distanceZ *= distanceZ;

	float temp = distanceX + distanceY + distanceZ;
	float output = temp;

	while ((output - temp / output) > 0.000001f)
	{
		output = (output + temp / output) / 2;
	}

	output *= 0.5f;
	output -= 0.1f;

	a[3] = -output;
	b[3] = -output;

	collision3D::CircleCircle unit;
	unit.calculate(a, b);

	return unit.getCollision();
}
