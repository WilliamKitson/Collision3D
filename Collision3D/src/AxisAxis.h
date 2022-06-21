#pragma once

namespace collision3D
{
	class AxisAxis
	{
	public:
		AxisAxis();
		~AxisAxis();

		void calculate(float[6], float[6]);
		bool getCollision();

	private:
		bool collision;
	};
}
