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
	if (squareRoot(distance(a, b)) > radius(a, b))
	{
		return false;
	}

	return true;
}

float collision3D::CircleCircle::distance(float a[4], float b[4])
{
	float output = 0.0f;

	output += distance(a[0], b[0]);
	output += distance(a[1], b[1]);
	output += distance(a[2], b[2]);

	return output;
}

float collision3D::CircleCircle::distance(float a, float b)
{
	return distance(a - b);
}

float collision3D::CircleCircle::distance(float input)
{
	return input * input;
}

float collision3D::CircleCircle::squareRoot(float input)
{
	float output = input;

	while ((output - input / output) > 0.000001f)
	{
		output = (output + input / output) / 2;
	}

	return output;
}

float collision3D::CircleCircle::radius(float a[4], float b[4])
{
	return absolute(a[3]) + absolute(b[3]);
}

float collision3D::CircleCircle::absolute(float input)
{
	if (input < 0.0f)
	{
		return -input;
	}

	return input;
}
