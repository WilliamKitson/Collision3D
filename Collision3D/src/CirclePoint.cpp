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
	collision = colliding(point, circle);
}

bool collision3D::CirclePoint::getCollision()
{
	return collision;
}

bool collision3D::CirclePoint::colliding(float point[3], float circle[4])
{
	if (squareRoot(distance(point[0], circle[0]) + distance(point[1], circle[1]) + distance(point[2], circle[2])) < circle[3])
	{
		return false;
	}

	return true;
}

float collision3D::CirclePoint::distance(float a, float b)
{
	float output = a - b;
	return output * output;
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
