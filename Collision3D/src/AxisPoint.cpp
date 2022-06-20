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

	return true;
}
