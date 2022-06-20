#include "AxisPoint.h"

collision3D::AxisPoint::AxisPoint()
	: collision{ false }
{
}

collision3D::AxisPoint::~AxisPoint()
{
}

void collision3D::AxisPoint::calculate(float axis[6], float point[3])
{
	collision = left(axis, point);
}

bool collision3D::AxisPoint::getCollision()
{
	return collision;
}

bool collision3D::AxisPoint::left(float axis[6], float point[3])
{
	if (left(axis) > point[0])
	{
		return false;
	}

	return right(axis, point);
}

float collision3D::AxisPoint::left(float axis[6])
{
	if (axis[3] < 0)
	{
		return axis[0] + axis[3];
	}

	return axis[0];
}

bool collision3D::AxisPoint::right(float axis[6], float point[3])
{
	if (right(axis) < point[0])
	{
		return false;
	}

	return bottom(axis, point);
}

float collision3D::AxisPoint::right(float axis[6])
{
	if (axis[3] > 0)
	{
		return axis[0] + axis[3];
	}

	return axis[0];
}

bool collision3D::AxisPoint::bottom(float axis[6], float point[3])
{
	if (axis[1] > point[1])
	{
		return false;
	}

	return top(axis, point);
}

bool collision3D::AxisPoint::top(float axis[6], float point[3])
{
	if ((axis[1] + axis[4]) < point[1])
	{
		return false;
	}

	return back(axis, point);
}

bool collision3D::AxisPoint::back(float axis[6], float point[3])
{
	if (axis[2] > point[2])
	{
		return false;
	}

	return front(axis, point);
}

bool collision3D::AxisPoint::front(float axis[6], float point[3])
{
	if ((axis[2] + axis[5]) < point[2])
	{
		return false;
	}

	return true;
}
