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
	output += testInverted();

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

std::string CircleCircleTester::testInverted()
{
	return CircleCircleInvertedTest().test();
}
