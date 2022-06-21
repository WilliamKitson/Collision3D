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
	if (axis[3] < 0.0f)
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
	if (axis[3] > 0.0f)
	{
		return axis[0] + axis[3];
	}

	return axis[0];
}

bool collision3D::AxisPoint::bottom(float axis[6], float point[3])
{
	if (bottom(axis) > point[1])
	{
		return false;
	}

	return top(axis, point);
}

float collision3D::AxisPoint::bottom(float axis[6])
{
	if (axis[4] < 0.0f)
	{
		return axis[1] + axis[4];
	}

	return axis[1];
}

bool collision3D::AxisPoint::top(float axis[6], float point[3])
{
	if (top(axis) < point[1])
	{
		return false;
	}

	return back(axis, point);
}

float collision3D::AxisPoint::top(float axis[6])
{
	if (axis[4] > 0.0f)
	{
		return axis[1] + axis[4];
	}

	return axis[1];
}

bool collision3D::AxisPoint::back(float axis[6], float point[3])
{
	if (back(axis) > point[2])
	{
		return false;
	}

	return front(axis, point);
}

float collision3D::AxisPoint::back(float axis[6])
{
	if (axis[5] < 0.0f)
	{
		return axis[2] + axis[5];
	}

	return axis[2];
}

bool collision3D::AxisPoint::front(float axis[6], float point[3])
{
	if (front(axis) < point[2])
	{
		return false;
	}

	return true;
}

float collision3D::AxisPoint::front(float axis[6])
{
	if (axis[5] > 0.0f)
	{
		return axis[2] + axis[5];
	}

	return axis[2];
}
