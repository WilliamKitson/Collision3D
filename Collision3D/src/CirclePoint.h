#pragma once

namespace collision3D
{
	class CirclePoint
	{
	public:
		CirclePoint();
		~CirclePoint();

		void calculate(float[4], float[3]);
		bool getCollision();

	private:
		bool colliding(float[4], float[3]);
		float distance(float[4], float[3]);
		float distance(float, float);
		float distance(float);
		float squareRoot(float);

	private:
		bool collision;
	};
}
