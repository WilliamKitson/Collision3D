#pragma once

namespace collision3D
{
	class AxisPoint
	{
	public:
		AxisPoint();
		~AxisPoint();

		void calculate(float[3], float[6]);
		bool getCollision();

	private:
		bool collision;
	};
}
