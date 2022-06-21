#pragma once

#include "Point.h"
#include "Circle.h"
#include "Axis.h"

namespace collision3D
{
	class Facade
	{
	public:
		Facade();
		virtual ~Facade();

		virtual void calculate(Point, Point);
		virtual void calculate(Circle, Point);
		virtual void calculate(Circle, Circle);
		virtual void calculate(Axis, Point);
		virtual void calculate(Axis, Axis);
		virtual bool getCollision();
	};
}
