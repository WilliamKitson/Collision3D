#pragma once

namespace collision3D
{
	class CirclePoint
	{
	public:
		CirclePoint();
		~CirclePoint();

		void calculate(float[3], float[4]);
		bool getCollision();

	private:
		bool colliding(float[3], float[4]);
		float distance(float, float);
		float squareRoot(float);
		float correct(float);

	private:
		bool collision;
	};
}
