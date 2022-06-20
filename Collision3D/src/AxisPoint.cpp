#include "AxisPoint.h"

collision3D::AxisPoint::AxisPoint()
	: collision{ false }
{
}

collision3D::AxisPoint::~AxisPoint()
{
}

void collision3D::AxisPoint::calculate(float[3], float[6])
{
	collision = true;
}

bool collision3D::AxisPoint::getCollision()
{
	return collision;
}
