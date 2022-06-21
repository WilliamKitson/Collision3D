#pragma once

namespace collision3D
{
	class AxisAxis
	{
	public:
		AxisAxis();
		~AxisAxis();

		void calculate(float[6], float[6]);
		bool getCollision();

	private:
		bool left(float[6], float[6]);
		bool right(float[6], float[6]);
		bool bottom(float[6], float[6]);
		bool top(float[6], float[6]);

	private:
		bool collision;
	};
}
