#include "AxisCircle.h"

collision3D::AxisCircle::AxisCircle()
	: collision{ false }
{
}

collision3D::AxisCircle::~AxisCircle()
{
}

void collision3D::AxisCircle::calculate(float axis[6], float circle[4])
{
	collision = colliding(axis, circle);
}

bool collision3D::AxisCircle::getCollision()
{
	return collision;
}

bool collision3D::AxisCircle::colliding(float axis[6], float circle[4])
{
	if (squareRoot(distance(axis, circle)) > absolute(circle[3]))
	{
		return false;
	}

	return true;
}

float collision3D::AxisCircle::distance(float axis[6], float circle[4])
{
	float output = 0.0f;

	output += distance(closestX(axis, circle), circle[0]);
	output += distance(closestY(axis, circle), circle[1]);
	output += distance(closestZ(axis, circle), circle[2]);

	return output;
}

float collision3D::AxisCircle::distance(float a, float b)
{
	return distance(a - b);
}

float collision3D::AxisCircle::distance(float input)
{
	return input * input;
}

float collision3D::AxisCircle::closestX(float axis[6], float circle[4])
{
	if (circle[0] < left(axis))
	{
		return left(axis);
	}

	else if (circle[0] > right(axis))
	{
		return right(axis);
	}

	return circle[0];
}

float collision3D::AxisCircle::left(float input[6])
{
	return input[0];
}

float collision3D::AxisCircle::right(float input[6])
{
	return input[0] + input[3];
}

float collision3D::AxisCircle::closestY(float axis[6], float circle[4])
{
	if (circle[1] < axis[1])
	{
		return axis[1];
	}

	if (circle[1] > axis[1] + axis[4])
	{
		return axis[1] + axis[4];
	}

	return circle[1];
}

float collision3D::AxisCircle::closestZ(float axis[6], float circle[4])
{
	if (circle[2] < axis[2])
	{
		return axis[2];
	}

	if (circle[2] > axis[2] + axis[5])
	{
		return axis[2] + axis[5];
	}

	return circle[2];
}

float collision3D::AxisCircle::squareRoot(float input)
{
	float output = input;

	while ((output - input / output) > 0.000001f)
	{
		output = (output + input / output) / 2;
	}

	return output;
}

float collision3D::AxisCircle::absolute(float input)
{
	if (input < 0.0f)
	{
		return -input;
	}

	return input;
}
