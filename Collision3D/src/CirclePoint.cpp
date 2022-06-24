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
	if (squareRoot(distance(circle, point)) > distance(circle[3]))
	{
		return false;
	}

	return true;
}

float collision3D::CirclePoint::distance(float circle[4], float point[3])
{
	float output = 0.0f;

	output += distance(circle[0], point[0]);
	output += distance(circle[1], point[1]);
	output += distance(circle[2], point[2]);

	return output;
}

float collision3D::CirclePoint::distance(float a, float b)
{
	return distance(a - b);
}

float collision3D::CirclePoint::distance(float input)
{
	return input * input;
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
