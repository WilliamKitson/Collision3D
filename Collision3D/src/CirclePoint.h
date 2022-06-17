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
		float squareRoot(float);

	private:
		bool collision;
	};
}
