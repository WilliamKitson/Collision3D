#include "CircleCircleInvertedTester.h"

CircleCircleInvertedTester::CircleCircleInvertedTester()
{
}

CircleCircleInvertedTester::~CircleCircleInvertedTester()
{
}

std::string CircleCircleInvertedTester::test()
{
	std::string failures{ "" };

	failures += testCollision();
	failures += testEvasion();

	return failures;
}

std::string CircleCircleInvertedTester::testCollision()
{
	return CircleCircleInvertedCollisionTest().test();
}

std::string CircleCircleInvertedTester::testEvasion()
{
	return CircleCircleInvertedEvasionTest().test();
}
