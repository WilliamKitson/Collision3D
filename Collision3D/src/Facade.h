#pragma once

#include "Point.h"
#include "Circle.h"

namespace collision3D
{
	class Facade
	{
	public:
		Facade();
		virtual ~Facade();

		virtual void calculate(Point, Point);
		virtual void calculate(Circle, Point);
		virtual bool getCollision();
	};
}
