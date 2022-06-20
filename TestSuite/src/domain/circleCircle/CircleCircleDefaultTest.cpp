#include "CircleCircleDefaultTest.h"

CircleCircleDefaultTest::CircleCircleDefaultTest()
{
}

CircleCircleDefaultTest::~CircleCircleDefaultTest()
{
}

std::string CircleCircleDefaultTest::test()
{
	if (!collision3D::CircleCircle().getCollision())
	{
		return std::string();
	}

	return "circle circle default test failed\n";
}
