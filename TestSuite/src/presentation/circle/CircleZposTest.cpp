#include "CircleZposTest.h"

CircleZposTest::CircleZposTest()
{
}

CircleZposTest::~CircleZposTest()
{
}

std::string CircleZposTest::test()
{
	if (!collision3D::Circle().zpos)
	{
		return std::string();
	}

	return "circle zpos test failed\n";
}
