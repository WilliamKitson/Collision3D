#include "CircleYposTest.h"

CircleYposTest::CircleYposTest()
{
}

CircleYposTest::~CircleYposTest()
{
}

std::string CircleYposTest::test()
{
	if (!collision2D::Circle().ypos)
	{
		return std::string();
	}

	return "circle ypos test failed\n";
}
