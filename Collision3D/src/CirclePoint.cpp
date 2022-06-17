#include "CirclePoint.h"

collision3D::CirclePoint::CirclePoint()
	: collision{ false }
{
}

collision3D::CirclePoint::~CirclePoint()
{
}

void collision3D::CirclePoint::calculate(float point[3], float circle[4])
{
	float xDistance = point[0] - circle[0];
	xDistance *= xDistance;

	float yDistance = point[1] - circle[1];
	yDistance *= yDistance;

	float zDistance = point[2] - circle[2];
	zDistance *= zDistance;

	float distance = squareRoot(xDistance + yDistance + zDistance);

	if (distance < circle[3])
	{
		collision = false;
		return;
	}

	collision = true;
}

bool collision3D::CirclePoint::getCollision()
{
	return collision;
}

float collision3D::CirclePoint::squareRoot(float input)
{
	float output = input;

	while ((output - input / output) > 0.000001f)
	{
		output = (output + input / output) / 2;
	}

	return output;
}
