#include "AxisCircle.h"

collision3D::AxisCircle::AxisCircle()
	: collision{ false }
{
}

collision3D::AxisCircle::~AxisCircle()
{
}

void collision3D::AxisCircle::calculate(float[6], float[4])
{
}

bool collision3D::AxisCircle::getCollision()
{
	return collision;
}
