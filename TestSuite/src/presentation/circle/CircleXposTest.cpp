#include "CircleXposTest.h"

CircleXposTest::CircleXposTest()
{
}

CircleXposTest::~CircleXposTest()
{
}

std::string CircleXposTest::test()
{
	if (!collision3D::Circle().xpos)
	{
		return std::string();
	}

	return "circle xpos test failed\n";
}
