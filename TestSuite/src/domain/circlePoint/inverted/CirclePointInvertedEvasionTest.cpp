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
		output += !collision((float)i);
	}

	return output;
}

bool CirclePointInvertedEvasonTest::collision(float input)
{
	float circle[4]{
		(float)input,
		(float)input,
		(float)input,
		0.0f
	};

	float point[3]{
		(float)input * -1.0f,
		(float)input * -1.0f,
		(float)input * -1.0f
	};

	float distanceX = circle[0] - point[0];
	distanceX *= distanceX;

	float distanceY = circle[1] - point[1];
	distanceY *= distanceY;

	float distanceZ = circle[2] - point[2];
	distanceZ *= distanceZ;

	float temp = distanceX + distanceY + distanceZ;
	float squareRoot = temp;

	while ((squareRoot - temp / squareRoot) > 0.000001f)
	{
		squareRoot = (squareRoot + temp / squareRoot) / 2;
	}

	circle[3] = squareRoot - 0.1f;

	collision3D::CirclePoint unit;
	unit.calculate(circle, point);

	return unit.getCollision();
}
