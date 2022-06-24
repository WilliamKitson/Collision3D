#include "CirclePointInvertedTester.h"

CirclePointInvertedTester::CirclePointInvertedTester()
{
}

CirclePointInvertedTester::~CirclePointInvertedTester()
{
}

std::string CirclePointInvertedTester::test()
{
	std::string output{ "" };

	output += testCollision();

	return output;
}

std::string CirclePointInvertedTester::testCollision()
{
	return CirclePointInvertedCollisionTest().test();
}
