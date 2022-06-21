#include "AxisAxis.h"

collision3D::AxisAxis::AxisAxis()
	: collision{ false }
{
}

collision3D::AxisAxis::~AxisAxis()
{
}

void collision3D::AxisAxis::calculate(float[6], float[6])
{
	collision = true;
}

bool collision3D::AxisAxis::getCollision()
{
	return collision;
}
