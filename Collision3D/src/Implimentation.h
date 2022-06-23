#pragma once

#include "Facade.h"
#include "PointPoint.h"
#include "CirclePoint.h"
#include "CircleCircle.h"
#include "AxisPoint.h"
#include "AxisAxis.h"

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
		virtual void calculate(Axis, Circle);
		virtual void calculate(Axis, Axis);
		virtual bool getCollision();

	private:
		bool collision;
	};
}
