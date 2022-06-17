#pragma once

#include "Facade.h"
#include "PointPoint.h"

namespace collision3D
{
	class Implimentation
		: public Facade
	{
	public:
		Implimentation();
		virtual ~Implimentation();

		virtual void calculate(Point, Point);
		virtual bool getCollision();

	private:
		bool collision;
	};
}
