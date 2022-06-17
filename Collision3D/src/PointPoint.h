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
		bool xpos(float[3], float[3]);
		bool ypos(float[3], float[3]);
		bool zpos(float[3], float[3]);

	private:
		bool collision;
	};
}
