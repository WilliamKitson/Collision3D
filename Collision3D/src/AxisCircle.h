#pragma once

namespace collision3D
{
	class AxisCircle
	{
	public:
		AxisCircle();
		~AxisCircle();

		void calculate(float[6], float[4]);
		bool getCollision();

	private:
		bool colliding(float[6], float[4]);

	private:
		bool collision;
	};
}
