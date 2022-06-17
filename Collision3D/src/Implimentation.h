#pragma once

#include "Facade.h"
#include "PointPoint.h"
#include "CirclePoint.h"

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
		virtual bool getCollision();

	private:
		bool collision;
	};
}
