#include "CirclePointDefaultTest.h"

CirclePointDefaultTest::CirclePointDefaultTest()
{
}

CirclePointDefaultTest::~CirclePointDefaultTest()
{
}

std::string CirclePointDefaultTest::test()
{
	if (collision3D::CirclePoint().getCollision() == false)
	{
		return std::string();
	}

	return "circle point default test failed\n";
}
