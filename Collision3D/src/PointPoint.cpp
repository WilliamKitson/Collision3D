#include "PointPoint.h"

collision2D::PointPoint::PointPoint()
	: collision{ false }
{
}

collision2D::PointPoint::~PointPoint()
{
}

void collision2D::PointPoint::calculate(float a[2], float b[2])
{
	collision = xposCollision(a, b);
}

bool collision2D::PointPoint::getCollision()
{
	return collision;
}

bool collision2D::PointPoint::xposCollision(float a[2], float b[2])
{
	if (a[0] != b[0])
	{
		return false;
	}

	return yposCollision(a, b);
}

bool collision2D::PointPoint::yposCollision(float a[2], float b[2])
{
	if (a[1] != b[1])
	{
		return false;
	}

	return true;
}
