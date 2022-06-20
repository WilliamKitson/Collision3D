#include "CircleCircle.h"

collision3D::CircleCircle::CircleCircle()
	: collision{ false }
{
}

collision3D::CircleCircle::~CircleCircle()
{
}

void collision3D::CircleCircle::calculate(float[4], float[4])
{
	collision = true;
}

bool collision3D::CircleCircle::getCollision()
{
	return collision;
}
