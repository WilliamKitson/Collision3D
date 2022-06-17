#include "PointCircle.h"

collision2D::CirclePoint::CirclePoint()
	: collision{ false }
{
}

collision2D::CirclePoint::~CirclePoint()
{
}

void collision2D::CirclePoint::calculate(float point[2], float circle[3])
{
	collision = calculateCollision(point, circle);
}

bool collision2D::CirclePoint::getCollision()
{
	return collision;
}

bool collision2D::CirclePoint::calculateCollision(float point[2], float circle[3])
{
	if (calculateDistance(point, circle) > correctRadius(circle[2]))
	{
		return false;
	}

	return true;
}

float collision2D::CirclePoint::calculateDistance(float point[2], float circle[3])
{
	return calculateSquareRoot(getDistanceX(point, circle) + getDistanceY(point, circle));
}

float collision2D::CirclePoint::getDistanceX(float point[2], float circle[3])
{
	float distanceX = point[0] - circle[0];
	return distanceX * distanceX;
}

float collision2D::CirclePoint::getDistanceY(float point[2], float circle[3])
{
	float distanceY = point[1] - circle[1];
	return distanceY * distanceY;
}

float collision2D::CirclePoint::calculateSquareRoot(float value)
{
	float square = value;

	while ((square - value / square) > 0.000001f)
	{
		square = (square + value / square) / 2;
	}

	return square;
}

float collision2D::CirclePoint::correctRadius(float radius)
{
	if (radius < 0.0f)
	{
		radius *= -1.0f;
	}

	return radius;
}
