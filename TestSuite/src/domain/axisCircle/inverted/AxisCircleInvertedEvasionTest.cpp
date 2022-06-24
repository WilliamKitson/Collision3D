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
	int output = 1;

	for (int i{ 1 }; i < itterations; i++)
	{
		output += !collision((float)i);
	}

	return output;
}

bool AxisCircleInvertedEvasionTest::collision(float input)
{
	float axis[6]{
		input,
		input,
		input,
		0.0f,
		0.0f,
		0.0f
	};

	float circle[4]{
		-input,
		-input,
		-input,
		0.0f
	};

	float distanceX = axis[0] - circle[0];
	distanceX *= distanceX;

	float distanceY = axis[1] - circle[1];
	distanceY *= distanceY;

	float distanceZ = axis[2] - circle[2];
	distanceZ *= distanceZ;

	float temp = distanceX + distanceY + distanceZ;
	float squereRoot = temp;

	while ((squereRoot - temp / squereRoot) > 0.000001f)
	{
		squereRoot = (squereRoot + temp / squereRoot) / 2;
	}

	circle[3] = -squereRoot + 0.1f;

	collision3D::AxisCircle unit;
	unit.calculate(axis, circle);

	return unit.getCollision();
}
