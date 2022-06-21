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
		float left(float[6]);
		bool right(float[6], float[6]);
		float right(float[6]);
		bool bottom(float[6], float[6]);
		float bottom(float[6]);
		bool top(float[6], float[6]);
		float top(float[6]);
		bool back(float[6], float[6]);
		float back(float[6]);
		bool front(float[6], float[6]);
		float front(float[6]);

	private:
		bool collision;
	};
}
