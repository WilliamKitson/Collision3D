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
	return square(a - b);
}

float collision3D::AxisCircle::square(float input)
{
	return input * input;
}

float collision3D::AxisCircle::closestX(float axis[6], float circle[4])
{
	if (circle[0] < left(axis))
	{
		return left(axis);
	}

	if (circle[0] > right(axis))
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
	if (circle[1] < top(axis))
	{
		return top(axis);
	}

	if (circle[1] > bottom(axis))
	{
		return bottom(axis);
	}

	return circle[1];
}

float collision3D::AxisCircle::top(float input[6])
{
	return input[1];
}

float collision3D::AxisCircle::bottom(float input[6])
{
	return input[1] + input[4];
}

float collision3D::AxisCircle::closestZ(float axis[6], float circle[4])
{
	if (circle[2] < back(axis))
	{
		return back(axis);
	}

	if (circle[2] > front(axis))
	{
		return front(axis);
	}

	return circle[2];
}

float collision3D::AxisCircle::back(float input[6])
{
	return input[2];
}

float collision3D::AxisCircle::front(float input[6])
{
	return input[2] + input[5];
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
