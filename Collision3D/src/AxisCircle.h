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
		float distance(float[6], float[4]);
		float distance(float, float);
		float distance(float);
		float closestX(float[6], float[4]);
		float left(float[6]);
		float right(float[6]);
		float closestY(float[6], float[4]);
		float top(float[6]);
		float bottom(float[6]);
		float closestZ(float[6], float[4]);
		float back(float[6]);
		float front(float[6]);
		float squareRoot(float);
		float absolute(float);

	private:
		bool collision;
	};
}
