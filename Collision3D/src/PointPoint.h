#pragma once

namespace collision2D
{
	class PointPoint
	{
	public:
		PointPoint();
		~PointPoint();

		void calculate(float[2], float[2]);
		bool getCollision();

	private:
		bool xposCollision(float[2], float[2]);
		bool yposCollision(float[2], float[2]);

	private:
		bool collision;
	};
}
