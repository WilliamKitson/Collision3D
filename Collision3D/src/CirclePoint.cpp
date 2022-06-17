#include "CirclePoint.h"

collision3D::CirclePoint::CirclePoint()
	: collision{ false }
{
}

collision3D::CirclePoint::~CirclePoint()
{
}

void collision3D::CirclePoint::calculate(float point[2], float circle[3])
{
	collision = calculateCollision(point, circle);
}

bool collision3D::CirclePoint::getCollision()
{
	return collision;
}

bool collision3D::CirclePoint::calculateCollision(float point[2], float circle[3])
{
	if (calculateDistance(point, circle) > correctRadius(circle[2]))
	{
		return false;
	}

	return true;
}

float collision3D::CirclePoint::calculateDistance(float point[2], float circle[3])
{
	return calculateSquareRoot(getDistanceX(point, circle) + getDistanceY(point, circle));
}

float collision3D::CirclePoint::getDistanceX(float point[2], float circle[3])
{
	float distanceX = point[0] - circle[0];
	return distanceX * distanceX;
}

float collision3D::CirclePoint::getDistanceY(float point[2], float circle[3])
{
	float distanceY = point[1] - circle[1];
	return distanceY * distanceY;
}

float collision3D::CirclePoint::calculateSquareRoot(float value)
{
	float square = value;

	while ((square - value / square) > 0.000001f)
	{
		square = (square + value / square) / 2;
	}

	return square;
}

float collision3D::CirclePoint::correctRadius(float radius)
{
	if (radius < 0.0f)
	{
		radius *= -1.0f;
	}

	return radius;
}
