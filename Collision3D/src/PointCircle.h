#pragma once

namespace collision2D
{
	class PointCircle
	{
	public:
		PointCircle();
		~PointCircle();

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
