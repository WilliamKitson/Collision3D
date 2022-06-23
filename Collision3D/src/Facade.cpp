#include "Facade.h"

collision3D::Facade::Facade()
{
}

collision3D::Facade::~Facade()
{
}

void collision3D::Facade::calculate(Point, Point)
{
}

void collision3D::Facade::calculate(Circle, Point)
{
}

void collision3D::Facade::calculate(Circle, Circle)
{
}

void collision3D::Facade::calculate(Axis, Point)
{
}

void collision3D::Facade::calculate(Axis, Circle)
{
}

void collision3D::Facade::calculate(Axis, Axis)
{
}

bool collision3D::Facade::getCollision()
{
    return false;
}
