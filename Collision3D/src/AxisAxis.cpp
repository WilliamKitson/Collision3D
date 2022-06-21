#include "AxisAxis.h"

collision3D::AxisAxis::AxisAxis()
	: collision{ false }
{
}

collision3D::AxisAxis::~AxisAxis()
{
}

void collision3D::AxisAxis::calculate(float a[6], float b[6])
{
	collision = left(a, b);
}

bool collision3D::AxisAxis::getCollision()
{
	return collision;
}

bool collision3D::AxisAxis::left(float a[6], float b[6])
{
	if (a[0] > b[0])
	{
		return false;
	}

	return right(a, b);
}

bool collision3D::AxisAxis::right(float a[6], float b[6])
{
	if ((a[0] + a[3]) < b[0])
	{
		return false;
	}

	return bottom(a, b);
}

bool collision3D::AxisAxis::bottom(float a[6], float b[6])
{
	if (a[1] > b[1])
	{
		return false;
	}

	return top(a, b);
}

bool collision3D::AxisAxis::top(float a[6], float b[6])
{
	if ((a[1] + a[4]) < b[1])
	{
		return false;
	}

	return back(a, b);
}

bool collision3D::AxisAxis::back(float a[6], float b[6])
{
	if (a[2] > b[2])
	{
		return false;
	}

	return true;
}
