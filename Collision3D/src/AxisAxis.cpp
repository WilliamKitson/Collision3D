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
	if (left(a) > b[0])
	{
		return false;
	}

	return right(a, b);
}

float collision3D::AxisAxis::left(float axis[6])
{
	if (axis[3] < 0.0f)
	{
		return axis[0] + axis[3];
	}

	return axis[0];
}

bool collision3D::AxisAxis::right(float a[6], float b[6])
{
	if (right(a) < b[0])
	{
		return false;
	}

	return bottom(a, b);
}

float collision3D::AxisAxis::right(float axis[6])
{
	if (axis[3] > 0.0f)
	{
		return axis[0] + axis[3];
	}

	return axis[0];
}

bool collision3D::AxisAxis::bottom(float a[6], float b[6])
{
	if (bottom(a) > b[1])
	{
		return false;
	}

	return top(a, b);
}

float collision3D::AxisAxis::bottom(float axis[6])
{
	if (axis[4] < 0.0f)
	{
		return axis[1] + axis[4];
	}

	return axis[1];
}

bool collision3D::AxisAxis::top(float a[6], float b[6])
{
	if (top(a) < b[1])
	{
		return false;
	}

	return back(a, b);
}

float collision3D::AxisAxis::top(float axis[6])
{
	if (axis[4] > 0.0f)
	{
		return axis[1] + axis[4];
	}

	return axis[1];
}

bool collision3D::AxisAxis::back(float a[6], float b[6])
{
	if (back(a) > b[2])
	{
		return false;
	}

	return front(a, b);
}

float collision3D::AxisAxis::back(float axis[6])
{
	if (axis[5] < 0.0f)
	{
		return axis[2] + axis[5];
	}

	return axis[2];
}

bool collision3D::AxisAxis::front(float a[6], float b[6])
{
	if (front(a) < b[2])
	{
		return false;
	}

	return true;
}

float collision3D::AxisAxis::front(float axis[6])
{
	if (axis[5] > 0.0f)
	{
		return axis[2] + axis[5];
	}

	return axis[2];
}
