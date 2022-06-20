#pragma once

namespace collision3D
{
	class AxisPoint
	{
	public:
		AxisPoint();
		~AxisPoint();

		void calculate(float[6], float[3]);
		bool getCollision();

	private:
		bool left(float[6], float[3]);
		bool right(float[6], float[3]);
		bool top(float[6], float[3]);

	private:
		bool collision;
	};
}
