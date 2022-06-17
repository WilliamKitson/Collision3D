#include "PointPoint.h"

collision3D::PointPoint::PointPoint()
	: collision{ false }
{
}

collision3D::PointPoint::~PointPoint()
{
}

void collision3D::PointPoint::calculate(float a[3], float b[3])
{
	collision = xpos(a, b);
}

bool collision3D::PointPoint::getCollision()
{
	return collision;
}

bool collision3D::PointPoint::xpos(float a[3], float b[3])
{
	if (a[0] != b[0])
	{
		return false;
	}

	return ypos(a, b);
}

bool collision3D::PointPoint::ypos(float a[3], float b[3])
{
	if (a[1] != b[1])
	{
		return false;
	}

	return zpos(a, b);
}

bool collision3D::PointPoint::zpos(float a[3], float b[3])
{
	if (a[2] != b[2])
	{
		return false;
	}

	return true;
}
