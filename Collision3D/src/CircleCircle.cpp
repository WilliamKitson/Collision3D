#include "CircleCircle.h"

collision3D::CircleCircle::CircleCircle()
	: collision{ false }
{
}

collision3D::CircleCircle::~CircleCircle()
{
}

void collision3D::CircleCircle::calculate(float a[4], float b[4])
{
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

	if (output > a[3] + b[3])
	{
		collision = false;
		return;
	}

	collision = true;
}

bool collision3D::CircleCircle::getCollision()
{
	return collision;
}
