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
	float closestX = circle[0];

	if (circle[0] < axis[0])
	{
		closestX = axis[0];
	}
	else if (circle[0] > axis[0] + axis[3])
	{
		closestX = axis[0] + axis[3];
	}

	float distanceX = closestX - circle[0];
	distanceX *= distanceX;

	float closestY = circle[1];

	if (circle[1] < axis[1])
	{
		closestX = axis[1];
	}
	else if (circle[1] > axis[1] + axis[4])
	{
		closestX = axis[1] + axis[4];
	}

	float distanceY = closestY - circle[1];
	distanceY *= distanceY;

	float closestZ = circle[2];

	if (circle[2] < axis[2])
	{
		closestX = axis[2];
	}
	else if (circle[2] > axis[2] + axis[5])
	{
		closestX = axis[1] + axis[5];
	}

	float distanceZ = closestZ - circle[2];
	distanceZ *= distanceZ;

	float input = distanceX + distanceY + distanceZ;
	float output = input;

	while ((output - input / output) > 0.000001f)
	{
		output = (output + input / output) / 2;
	}

	if (circle[3] > output)
	{
		return true;
	}

	return false;
}
