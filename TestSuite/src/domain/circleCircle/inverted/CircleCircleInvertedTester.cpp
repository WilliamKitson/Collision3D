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

	return failures;
}

std::string CircleCircleInvertedTester::testCollision()
{
	return CircleCircleInvertedCollisionTest().test();
}
