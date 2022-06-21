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

	return true;
}
