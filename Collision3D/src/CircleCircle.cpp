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
	collision = colliding(a, b);
}

bool collision3D::CircleCircle::getCollision()
{
	return collision;
}

bool collision3D::CircleCircle::colliding(float a[4], float b[4])
{
	float input = distance(a[0], b[0]) + distance(a[1], b[1]) + distance(a[2], b[2]);
	float output = input;

	while ((output - input / output) > 0.000001f)
	{
		output = (output + input / output) / 2;
	}

	if (output > a[3] + b[3])
	{
		return false;
	}

	return true;
}

float collision3D::CircleCircle::distance(float a, float b)
{
	float output = a - b;
	return output * output;
}
