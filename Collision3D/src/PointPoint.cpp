#include "PointPoint.h"

collision3D::PointPoint::PointPoint()
	: collision{ false }
{
}

collision3D::PointPoint::~PointPoint()
{
}

void collision3D::PointPoint::calculate(float a[2], float b[2])
{
	collision = xposCollision(a, b);
}

bool collision3D::PointPoint::getCollision()
{
	return collision;
}

bool collision3D::PointPoint::xposCollision(float a[2], float b[2])
{
	if (a[0] != b[0])
	{
		return false;
	}

	return yposCollision(a, b);
}

bool collision3D::PointPoint::yposCollision(float a[2], float b[2])
{
	if (a[1] != b[1])
	{
		return false;
	}

	return true;
}
