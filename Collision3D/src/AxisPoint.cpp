#include "AxisPoint.h"

collision3D::AxisPoint::AxisPoint()
	: collision{ false }
{
}

collision3D::AxisPoint::~AxisPoint()
{
}

void collision3D::AxisPoint::calculate(float point[3], float axis[6])
{
	collision = left(point, axis);
}

bool collision3D::AxisPoint::getCollision()
{
	return collision;
}

bool collision3D::AxisPoint::left(float point[3], float axis[6])
{
	if (point[0] < axis[0])
	{
		return false;
	}

	return true;
}
