#include "CircleCircleTester.h"

CircleCircleTester::CircleCircleTester()
{
}

CircleCircleTester::~CircleCircleTester()
{
}

std::string CircleCircleTester::test()
{
	std::string output{ "" };

	output += testDefault();
	output += testCollision();
	output += testEvasion();

	return output;
}

std::string CircleCircleTester::testDefault()
{
	return CircleCircleDefaultTest().test();
}

std::string CircleCircleTester::testCollision()
{
	return CircleCircleCollisionTest().test();
}

std::string CircleCircleTester::testEvasion()
{
	return CircleCircleEvasionTest().test();
}
