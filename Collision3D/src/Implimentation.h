#pragma once

#include "Facade.h"
#include "PointPoint.h"
#include "CirclePoint.h"
#include "CircleCircle.h"
#include "AxisPoint.h"

namespace collision3D
{
	class Implimentation
		: public Facade
	{
	public:
		Implimentation();
		virtual ~Implimentation();

		virtual void calculate(Point, Point);
		virtual void calculate(Circle, Point);
		virtual void calculate(Circle, Circle);
		virtual void calculate(Axis, Point);
		virtual bool getCollision();

	private:
		bool collision;
	};
}
