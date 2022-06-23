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
	float distanceX = closestX(axis, circle) - circle[0];
	distanceX *= distanceX;

	float distanceY = closestY(axis, circle) - circle[1];
	distanceY *= distanceY;

	float closestZ = circle[2];

	if (circle[2] < axis[2])
	{
		closestZ = axis[2];
	}
	else if (circle[2] > axis[2] + axis[5])
	{
		closestZ = axis[1] + axis[5];
	}

	float distanceZ = closestZ - circle[2];
	distanceZ *= distanceZ;

	float input = distanceX + distanceY + distanceZ;
	float output = input;

	while ((output - input / output) > 0.000001f)
	{
		output = (output + input / output) / 2;
	}

	if (output > circle[3])
	{
		return false;
	}

	return true;
}

float collision3D::AxisCircle::closestX(float axis[6], float circle[4])
{
	if (circle[0] < axis[0])
	{
		return axis[0];
	}

	else if (circle[0] > axis[0] + axis[3])
	{
		return axis[0] + axis[3];
	}

	return circle[0];
}

float collision3D::AxisCircle::closestY(float axis[6], float circle[4])
{
	if (circle[1] < axis[1])
	{
		return axis[1];
	}
	else if (circle[1] > axis[1] + axis[4])
	{
		return axis[1] + axis[4];
	}

	return circle[1];
}
