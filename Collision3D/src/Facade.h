#pragma once

#include "Point.h"

namespace collision3D
{
	class Facade
	{
	public:
		Facade();
		virtual ~Facade();

		virtual void calculate(Point, Point);
		virtual bool getCollision();
	};
}
