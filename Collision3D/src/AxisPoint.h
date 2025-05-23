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
		float left(float[6]);
		bool right(float[6], float[3]);
		float right(float[6]);
		bool bottom(float[6], float[3]);
		float bottom(float[6]);
		bool top(float[6], float[3]);
		float top(float[6]);
		bool back(float[6], float[3]);
		float back(float[6]);
		bool front(float[6], float[3]);
		float front(float[6]);

	private:
		bool collision;
	};
}
