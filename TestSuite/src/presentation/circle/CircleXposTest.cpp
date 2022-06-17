#include "CircleXposTest.h"

CircleXposTest::CircleXposTest()
{
}

CircleXposTest::~CircleXposTest()
{
}

std::string CircleXposTest::test()
{
	if (!collision2D::Circle().xpos)
	{
		return std::string();
	}

	return "circle xpos test failed\n";
}
