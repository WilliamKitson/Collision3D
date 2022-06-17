#include "PointCircle.h"

collision2D::PointCircle::PointCircle()
	: collision{ false }
{
}

collision2D::PointCircle::~PointCircle()
{
}

void collision2D::PointCircle::calculate(float point[2], float circle[3])
{
	collision = calculateCollision(point, circle);
}

bool collision2D::PointCircle::getCollision()
{
	return collision;
}

bool collision2D::PointCircle::calculateCollision(float point[2], float circle[3])
{
	if (calculateDistance(point, circle) > correctRadius(circle[2]))
	{
		return false;
	}

	return true;
}

float collision2D::PointCircle::calculateDistance(float point[2], float circle[3])
{
	return calculateSquareRoot(getDistanceX(point, circle) + getDistanceY(point, circle));
}

float collision2D::PointCircle::getDistanceX(float point[2], float circle[3])
{
	float distanceX = point[0] - circle[0];
	return distanceX * distanceX;
}

float collision2D::PointCircle::getDistanceY(float point[2], float circle[3])
{
	float distanceY = point[1] - circle[1];
	return distanceY * distanceY;
}

float collision2D::PointCircle::calculateSquareRoot(float value)
{
	float square = value;

	while ((square - value / square) > 0.000001f)
	{
		square = (square + value / square) / 2;
	}

	return square;
}

float collision2D::PointCircle::correctRadius(float radius)
{
	if (radius < 0.0f)
	{
		radius *= -1.0f;
	}

	return radius;
}
