#include "CirclePoint.h"

collision3D::CirclePoint::CirclePoint()
	: collision{ false }
{
}

collision3D::CirclePoint::~CirclePoint()
{
}

void collision3D::CirclePoint::calculate(float circle[4], float point[3])
{
	collision = colliding(circle, point);
}

bool collision3D::CirclePoint::getCollision()
{
	return collision;
}

bool collision3D::CirclePoint::colliding(float circle[4], float point[3])
{
	if (squareRoot(distance(circle[0], point[0]) + distance(circle[1], point[1]) + distance(circle[2], point[2])) > correct(circle[3]))
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

float collision3D::CirclePoint::correct(float input)
{
	return input * input;
}
