#pragma once

namespace collision3D
{
	class PointPoint
	{
	public:
		PointPoint();
		~PointPoint();

		void calculate(float[3], float[3]);
		bool getCollision();

	private:
		bool xposCollision(float[3], float[3]);
		bool yposCollision(float[3], float[3]);

	private:
		bool collision;
	};
}
