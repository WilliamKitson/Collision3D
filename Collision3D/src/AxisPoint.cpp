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
	if (axis[0] > point[0])
	{
		return false;
	}

	return right(axis, point);
}

bool collision3D::AxisPoint::right(float axis[6], float point[3])
{
	if ((axis[0] + axis[3]) < point[0])
	{
		return false;
	}

	return bottom(axis, point);
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

	return true;
}
