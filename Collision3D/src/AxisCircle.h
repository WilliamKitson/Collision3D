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
		float absolute(float);
		float closestX(float[6], float[4]);
		float closestY(float[6], float[4]);
		float closestZ(float[6], float[4]);
		float squareRoot(float);

	private:
		bool collision;
	};
}
