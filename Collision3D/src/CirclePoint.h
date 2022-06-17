#pragma once

namespace collision3D
{
	class CirclePoint
	{
	public:
		CirclePoint();
		~CirclePoint();

		void calculate(float[2], float[3]);
		bool getCollision();

	private:
		bool calculateCollision(float[2], float[3]);
		float calculateDistance(float[2], float[3]);
		float getDistanceX(float[2], float[3]);
		float getDistanceY(float[2], float[3]);
		float calculateSquareRoot(float);
		float correctRadius(float);

	private:
		bool collision;
	};
}
