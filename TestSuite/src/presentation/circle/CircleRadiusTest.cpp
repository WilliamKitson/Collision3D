#include "CircleRadiusTest.h"

CircleRadiusTest::CircleRadiusTest()
{
}

CircleRadiusTest::~CircleRadiusTest()
{
}

std::string CircleRadiusTest::test()
{
	if (!collision2D::Circle().radius)
	{
		return std::string();
	}

	return "circle radius test failed\n";
}
