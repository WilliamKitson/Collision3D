#pragma once

namespace collision3D
{
	class CircleCircle
	{
	public:
		CircleCircle();
		~CircleCircle();

		void calculate(float[4], float[4]);
		bool getCollision();

	private:
		bool colliding(float[4], float[4]);
		float distance(float[4], float[4]);
		float distance(float, float);
		float square(float);
		float squareRoot(float);
		float radius(float[4], float[4]);
		float absolute(float);

	private:
		bool collision;
	};
}
